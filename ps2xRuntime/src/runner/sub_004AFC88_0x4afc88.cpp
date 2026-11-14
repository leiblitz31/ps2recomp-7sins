#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AFC88
// Address: 0x4afc88 - 0x4afe98
void sub_004AFC88_0x4afc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFC88_0x4afc88");
#endif

    switch (ctx->pc) {
        case 0x4afcc0u: goto label_4afcc0;
        case 0x4afce8u: goto label_4afce8;
        case 0x4afd38u: goto label_4afd38;
        case 0x4afd48u: goto label_4afd48;
        case 0x4afdacu: goto label_4afdac;
        case 0x4afdb4u: goto label_4afdb4;
        case 0x4afdd8u: goto label_4afdd8;
        case 0x4afde0u: goto label_4afde0;
        case 0x4afe44u: goto label_4afe44;
        case 0x4afe4cu: goto label_4afe4c;
        case 0x4afe70u: goto label_4afe70;
        case 0x4afe78u: goto label_4afe78;
        default: break;
    }

    ctx->pc = 0x4afc88u;

    // 0x4afc88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4afc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4afc8c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4afc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4afc90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4afc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4afc94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4afc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4afc98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afc9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4afc9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afca0: 0x8e230f40  lw          $v1, 0xF40($s1)
    ctx->pc = 0x4afca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3904)));
    // 0x4afca4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4AFCA4u;
    {
        const bool branch_taken_0x4afca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AFCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFCA4u;
        // 0x4afca8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afca4) {
            ctx->pc = 0x4AFCE8u;
            goto label_4afce8;
        }
    }
    ctx->pc = 0x4AFCACu;
    // 0x4afcac: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x4afcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4afcb0: 0x3c014b80  lui         $at, 0x4B80
    ctx->pc = 0x4afcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19328 << 16));
    // 0x4afcb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4afcb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4afcb8: 0xc0bec4e  jal         func_2FB138
    ctx->pc = 0x4AFCB8u;
    SET_GPR_U32(ctx, 31, 0x4AFCC0u);
    ctx->pc = 0x4AFCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFCB8u;
    // 0x4afcbc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB138u, 0x4AFCB8u, 0x4AFCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFCC0u;
label_4afcc0:
    // 0x4afcc0: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x4afcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x4afcc4: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x4afcc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4afcc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afccc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4afcccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4afcd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4afcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4afcd4: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x4afcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4afcd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4afcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4afcdc: 0x26250f00  addiu       $a1, $s1, 0xF00
    ctx->pc = 0x4afcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3840));
    // 0x4afce0: 0xc12d1a0  jal         func_4B4680
    ctx->pc = 0x4AFCE0u;
    SET_GPR_U32(ctx, 31, 0x4AFCE8u);
    ctx->pc = 0x4AFCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFCE0u;
    // 0x4afce4: 0x262402c0  addiu       $a0, $s1, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4680u, 0x4AFCE0u, 0x4AFCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFCE8u;
label_4afce8:
    // 0x4afce8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4afce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4afcec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4afcecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4afcf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFCF4u;
        // 0x4afcf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFCFCu;
    // 0x4afcfc: 0x0  nop
    ctx->pc = 0x4afcfcu;
    // NOP
    // 0x4afd00: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFD00u;
        // 0x4afd04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFD08u;
    // 0x4afd08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4afd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4afd0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4afd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4afd10: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4afd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4afd14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afd18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4afd18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afd1c: 0x8e030f40  lw          $v1, 0xF40($s0)
    ctx->pc = 0x4afd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3904)));
    // 0x4afd20: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AFD20u;
    {
        const bool branch_taken_0x4afd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFD20u;
        // 0x4afd24: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afd20) {
            ctx->pc = 0x4AFD48u;
            goto label_4afd48;
        }
    }
    ctx->pc = 0x4AFD28u;
    // 0x4afd28: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x4afd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x4afd2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4afd2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4afd30: 0xc0bec4e  jal         func_2FB138
    ctx->pc = 0x4AFD30u;
    SET_GPR_U32(ctx, 31, 0x4AFD38u);
    ctx->pc = 0x4AFD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFD30u;
    // 0x4afd34: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB138u, 0x4AFD30u, 0x4AFD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFD38u;
label_4afd38:
    // 0x4afd38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4afd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4afd3c: 0x26050f00  addiu       $a1, $s0, 0xF00
    ctx->pc = 0x4afd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
    // 0x4afd40: 0xc12d194  jal         func_4B4650
    ctx->pc = 0x4AFD40u;
    SET_GPR_U32(ctx, 31, 0x4AFD48u);
    ctx->pc = 0x4AFD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFD40u;
    // 0x4afd44: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4650u, 0x4AFD40u, 0x4AFD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFD48u;
label_4afd48:
    // 0x4afd48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4afd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4afd4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afd50: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFD50u;
        // 0x4afd54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFD58u;
    // 0x4afd58: 0xc4810f50  lwc1        $f1, 0xF50($a0)
    ctx->pc = 0x4afd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4afd5c: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x4afd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x4afd60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4afd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4afd64: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFD64u;
        // 0x4afd68: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFD6Cu;
    // 0x4afd6c: 0x0  nop
    ctx->pc = 0x4afd6cu;
    // NOP
    // 0x4afd70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4afd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4afd74: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4afd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4afd78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4afd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4afd7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4afd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4afd80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4afd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4afd84: 0x2450ea40  addiu       $s0, $v0, -0x15C0
    ctx->pc = 0x4afd84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961728));
    // 0x4afd88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afd8c: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x4afd8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x4afd90: 0x2118825  or          $s1, $s0, $s1
    ctx->pc = 0x4afd90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x4afd94: 0x8c851044  lw          $a1, 0x1044($a0)
    ctx->pc = 0x4afd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4164)));
    // 0x4afd98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4afd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afd9c: 0xac45ea40  sw          $a1, -0x15C0($v0)
    ctx->pc = 0x4afd9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x65EA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65EA40u, _value); } while (0);
    // 0x4afda0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x4afda0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65EA44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65EA44u, _value); } while (0);
    // 0x4afda4: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4AFDA4u;
    SET_GPR_U32(ctx, 31, 0x4AFDACu);
    ctx->pc = 0x4AFDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFDA4u;
    // 0x4afda8: 0x260500bf  addiu       $a1, $s0, 0xBF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 191));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4AFDA4u, 0x4AFDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFDACu;
label_4afdac:
    // 0x4afdac: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AFDACu;
    SET_GPR_U32(ctx, 31, 0x4AFDB4u);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AFDACu, 0x4AFDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFDB4u;
label_4afdb4:
    // 0x4afdb4: 0x8f84b8e0  lw          $a0, -0x4720($gp)
    ctx->pc = 0x4afdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949088)));
    // 0x4afdb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4afdb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afdbc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4afdbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afdc0: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x4afdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x4afdc4: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x4afdc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4afdc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4afdc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afdcc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4afdccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afdd0: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4AFDD0u;
    SET_GPR_U32(ctx, 31, 0x4AFDD8u);
    ctx->pc = 0x4AFDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFDD0u;
    // 0x4afdd4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4AFDD0u, 0x4AFDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFDD8u;
label_4afdd8:
    // 0x4afdd8: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4AFDD8u;
    SET_GPR_U32(ctx, 31, 0x4AFDE0u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4AFDD8u, 0x4AFDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFDE0u;
label_4afde0:
    // 0x4afde0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4afde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4afde4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4afde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4afde8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4afde8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4afdec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFDF0u;
        // 0x4afdf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFDF8u;
    // 0x4afdf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4afdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4afdfc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4afdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4afe00: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4afe00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4afe04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4afe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4afe08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4afe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4afe0c: 0x2450ea40  addiu       $s0, $v0, -0x15C0
    ctx->pc = 0x4afe0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961728));
    // 0x4afe10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4afe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4afe14: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x4afe14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x4afe18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afe1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4afe1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afe20: 0x2118825  or          $s1, $s0, $s1
    ctx->pc = 0x4afe20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x4afe24: 0x260500bf  addiu       $a1, $s0, 0xBF
    ctx->pc = 0x4afe24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 191));
    // 0x4afe28: 0x8c861044  lw          $a2, 0x1044($a0)
    ctx->pc = 0x4afe28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4164)));
    // 0x4afe2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4afe2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afe30: 0xac46ea40  sw          $a2, -0x15C0($v0)
    ctx->pc = 0x4afe30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x65EA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65EA40u, _value); } while (0);
    // 0x4afe34: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x4afe34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65EA44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65EA44u, _value); } while (0);
    // 0x4afe38: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4afe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4afe3c: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4AFE3Cu;
    SET_GPR_U32(ctx, 31, 0x4AFE44u);
    ctx->pc = 0x4AFE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFE3Cu;
    // 0x4afe40: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4AFE3Cu, 0x4AFE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFE44u;
label_4afe44:
    // 0x4afe44: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AFE44u;
    SET_GPR_U32(ctx, 31, 0x4AFE4Cu);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AFE44u, 0x4AFE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFE4Cu;
label_4afe4c:
    // 0x4afe4c: 0x8f84b8e0  lw          $a0, -0x4720($gp)
    ctx->pc = 0x4afe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949088)));
    // 0x4afe50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4afe50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afe54: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4afe54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afe58: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x4afe58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x4afe5c: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x4afe5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4afe60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4afe60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afe64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4afe64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afe68: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4AFE68u;
    SET_GPR_U32(ctx, 31, 0x4AFE70u);
    ctx->pc = 0x4AFE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFE68u;
    // 0x4afe6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4AFE68u, 0x4AFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFE70u;
label_4afe70:
    // 0x4afe70: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4AFE70u;
    SET_GPR_U32(ctx, 31, 0x4AFE78u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4AFE70u, 0x4AFE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFE78u;
label_4afe78:
    // 0x4afe78: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4afe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4afe7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4afe7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4afe80: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x4afe80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x4afe84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4afe84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4afe88: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4afe88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4afe8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afe8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afe90: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFE90u;
        // 0x4afe94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFE98u;
}
