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

// Function: sub_0038DA38
// Address: 0x38da38 - 0x38dbd8
void sub_0038DA38_0x38da38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DA38_0x38da38");
#endif

    switch (ctx->pc) {
        case 0x38da68u: goto label_38da68;
        case 0x38da84u: goto label_38da84;
        case 0x38daa4u: goto label_38daa4;
        case 0x38daf4u: goto label_38daf4;
        case 0x38db08u: goto label_38db08;
        case 0x38db64u: goto label_38db64;
        case 0x38db7cu: goto label_38db7c;
        case 0x38db8cu: goto label_38db8c;
        case 0x38dbacu: goto label_38dbac;
        default: break;
    }

    ctx->pc = 0x38da38u;

    // 0x38da38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38da38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38da3c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38da40: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x38da40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x38da44: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x38da44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x38da48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38da48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38da4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38da4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x38da50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38da50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38da54: 0x2452ade8  addiu       $s2, $v0, -0x5218
    ctx->pc = 0x38da54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946280));
    // 0x38da58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38da58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38da5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38da5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38da60: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x38DA60u;
    SET_GPR_U32(ctx, 31, 0x38DA68u);
    ctx->pc = 0x38DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DA60u;
    // 0x38da64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x38DA60u, 0x38DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DA68u;
label_38da68:
    // 0x38da68: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x38da68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x38da6c: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x38da6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x38da70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38da70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38da74: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x38da74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x38da78: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x38da78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x38da7c: 0xc103404  jal         func_40D010
    ctx->pc = 0x38DA7Cu;
    SET_GPR_U32(ctx, 31, 0x38DA84u);
    ctx->pc = 0x38DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DA7Cu;
    // 0x38da80: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x38DA7Cu, 0x38DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DA84u;
label_38da84:
    // 0x38da84: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x38DA84u;
    {
        const bool branch_taken_0x38da84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA84u;
        // 0x38da88: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38da84) {
            ctx->pc = 0x38DB14u;
            goto label_38db14;
        }
    }
    ctx->pc = 0x38DA8Cu;
    // 0x38da8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38da8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38da90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38da90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38da94: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x38da94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x38da98: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x38da98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x38da9c: 0xc103404  jal         func_40D010
    ctx->pc = 0x38DA9Cu;
    SET_GPR_U32(ctx, 31, 0x38DAA4u);
    ctx->pc = 0x38DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DA9Cu;
    // 0x38daa0: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x38DA9Cu, 0x38DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DAA4u;
label_38daa4:
    // 0x38daa4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x38DAA4u;
    {
        const bool branch_taken_0x38daa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAA4u;
        // 0x38daa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38daa4) {
            ctx->pc = 0x38DB14u;
            goto label_38db14;
        }
    }
    ctx->pc = 0x38DAACu;
    // 0x38daac: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x38daacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x38dab0: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x38dab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x38dab4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38dab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dab8: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x38dab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38dabc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x38dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x38dac0: 0xc6040018  lwc1        $f4, 0x18($s0)
    ctx->pc = 0x38dac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x38dac4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x38dac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x38dac8: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x38dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38dacc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x38daccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x38dad0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x38dad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38dad4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x38dad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38dad8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x38dad8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x38dadc: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x38dadcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x38dae0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x38dae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x38dae4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x38dae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x38dae8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x38dae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x38daec: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x38DAECu;
    SET_GPR_U32(ctx, 31, 0x38DAF4u);
    ctx->pc = 0x38DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DAECu;
    // 0x38daf0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x38DAECu, 0x38DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DAF4u;
label_38daf4:
    // 0x38daf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38DAF4u;
    {
        const bool branch_taken_0x38daf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAF4u;
        // 0x38daf8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38daf4) {
            ctx->pc = 0x38DB14u;
            goto label_38db14;
        }
    }
    ctx->pc = 0x38DAFCu;
    // 0x38dafc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38dafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38db00: 0xc104a72  jal         func_4129C8
    ctx->pc = 0x38DB00u;
    SET_GPR_U32(ctx, 31, 0x38DB08u);
    ctx->pc = 0x38DB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DB00u;
    // 0x38db04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C8u, 0x38DB00u, 0x38DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DB08u;
label_38db08:
    // 0x38db08: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x38db08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x38db0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38DB0Cu;
    {
        const bool branch_taken_0x38db0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB0Cu;
        // 0x38db10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db0c) {
            ctx->pc = 0x38DB18u;
            goto label_38db18;
        }
    }
    ctx->pc = 0x38DB14u;
label_38db14:
    // 0x38db14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38db14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38db18:
    // 0x38db18: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x38db18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38db1c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x38db1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38db20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38db20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38db24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38db24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38db28: 0x3e00008  jr          $ra
    ctx->pc = 0x38DB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB28u;
        // 0x38db2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DB30u;
    // 0x38db30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38db30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38db34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38db34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38db38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x38db38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x38db3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38db3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x38db40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38db40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38db44: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x38db44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x38db48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38db48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38db4c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38db4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38db50: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x38db50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x38db54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38db54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38db58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38db58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38db5c: 0xc103322  jal         func_40CC88
    ctx->pc = 0x38DB5Cu;
    SET_GPR_U32(ctx, 31, 0x38DB64u);
    ctx->pc = 0x38DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DB5Cu;
    // 0x38db60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x38DB5Cu, 0x38DB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DB64u;
label_38db64:
    // 0x38db64: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38DB64u;
    {
        const bool branch_taken_0x38db64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB64u;
        // 0x38db68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db64) {
            ctx->pc = 0x38DBB4u;
            goto label_38dbb4;
        }
    }
    ctx->pc = 0x38DB6Cu;
    // 0x38db6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38db6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38db70: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x38db70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x38db74: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x38DB74u;
    SET_GPR_U32(ctx, 31, 0x38DB7Cu);
    ctx->pc = 0x38DB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DB74u;
    // 0x38db78: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x38DB74u, 0x38DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DB7Cu;
label_38db7c:
    // 0x38db7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38db7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38db80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38db80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38db84: 0xc10480a  jal         func_412028
    ctx->pc = 0x38DB84u;
    SET_GPR_U32(ctx, 31, 0x38DB8Cu);
    ctx->pc = 0x38DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DB84u;
    // 0x38db88: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x38DB84u, 0x38DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DB8Cu;
label_38db8c:
    // 0x38db8c: 0x5450000a  bnel        $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x38DB8Cu;
    {
        const bool branch_taken_0x38db8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x38db8c) {
            ctx->pc = 0x38DB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38DB8Cu;
            // 0x38db90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DBB8u;
            goto label_38dbb8;
        }
    }
    ctx->pc = 0x38DB94u;
    // 0x38db94: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x38db94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38db98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38db98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38db9c: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x38db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x38dba0: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x38dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
    // 0x38dba4: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x38DBA4u;
    SET_GPR_U32(ctx, 31, 0x38DBACu);
    ctx->pc = 0x38DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DBA4u;
    // 0x38dba8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x38DBA4u, 0x38DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DBACu;
label_38dbac:
    // 0x38dbac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38DBACu;
    {
        const bool branch_taken_0x38dbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBACu;
        // 0x38dbb0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbac) {
            ctx->pc = 0x38DBB8u;
            goto label_38dbb8;
        }
    }
    ctx->pc = 0x38DBB4u;
label_38dbb4:
    // 0x38dbb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38dbb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38dbb8:
    // 0x38dbb8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x38dbb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38dbbc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x38dbbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38dbc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38dbc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38dbc4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x38dbc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38dbc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38dbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38dbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x38DBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBCCu;
        // 0x38dbd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DBD4u;
    // 0x38dbd4: 0x0  nop
    ctx->pc = 0x38dbd4u;
    // NOP
    ctx->pc = 0x38dbd8u;
}
