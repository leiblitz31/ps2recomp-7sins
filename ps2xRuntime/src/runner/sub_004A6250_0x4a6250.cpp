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

// Function: sub_004A6250
// Address: 0x4a6250 - 0x4a6330
void sub_004A6250_0x4a6250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6250_0x4a6250");
#endif

    switch (ctx->pc) {
        case 0x4a6280u: goto label_4a6280;
        case 0x4a62a4u: goto label_4a62a4;
        case 0x4a62dcu: goto label_4a62dc;
        default: break;
    }

    ctx->pc = 0x4a6250u;

    // 0x4a6250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a6250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a6254: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a6254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a6258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a6258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a625c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a625cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a6260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a6264: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A6264u;
    {
        const bool branch_taken_0x4a6264 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6264u;
        // 0x4a6268: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6264) {
            ctx->pc = 0x4A6298u;
            goto label_4a6298;
        }
    }
    ctx->pc = 0x4A626Cu;
    // 0x4a626c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a626cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4a6270: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a6270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4a6274: 0x24848858  addiu       $a0, $a0, -0x77A8
    ctx->pc = 0x4a6274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
    // 0x4a6278: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x4A6278u;
    SET_GPR_U32(ctx, 31, 0x4A6280u);
    ctx->pc = 0x4A627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6278u;
    // 0x4a627c: 0x34a50805  ori         $a1, $a1, 0x805 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2053);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x4A6278u, 0x4A6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6280u;
label_4a6280:
    // 0x4a6280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a6280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6284: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4A6284u;
    {
        const bool branch_taken_0x4a6284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6284u;
        // 0x4a6288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6284) {
            ctx->pc = 0x4A6318u;
            goto label_4a6318;
        }
    }
    ctx->pc = 0x4A628Cu;
    // 0x4a628c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a6290: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A6290u;
    {
        const bool branch_taken_0x4a6290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6290u;
        // 0x4a6294: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6290) {
            ctx->pc = 0x4A629Cu;
            goto label_4a629c;
        }
    }
    ctx->pc = 0x4A6298u;
label_4a6298:
    // 0x4a6298: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x4a6298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_4a629c:
    // 0x4a629c: 0xc12a4ce  jal         func_4A9338
    ctx->pc = 0x4A629Cu;
    SET_GPR_U32(ctx, 31, 0x4A62A4u);
    ctx->pc = 0x4A62A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A629Cu;
    // 0x4a62a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x4A629Cu, 0x4A62A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A62A4u;
label_4a62a4:
    // 0x4a62a4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4a62a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x4a62a8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4a62a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x4a62ac: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4a62acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x4a62b0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x4a62b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x4a62b4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x4a62b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x4a62b8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4a62b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x4a62bc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x4a62bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x4a62c0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x4a62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4a62c4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x4a62c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x4a62c8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x4a62c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x4a62cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a62ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a62d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a62d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a62d4: 0xc12993a  jal         func_4A64E8
    ctx->pc = 0x4A62D4u;
    SET_GPR_U32(ctx, 31, 0x4A62DCu);
    ctx->pc = 0x4A62D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A62D4u;
    // 0x4a62d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A64E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A64E8u, 0x4A62D4u, 0x4A62DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A62DCu;
label_4a62dc:
    // 0x4a62dc: 0x8f83c190  lw          $v1, -0x3E70($gp)
    ctx->pc = 0x4a62dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951312)));
    // 0x4a62e0: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x4a62e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x4a62e4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x4a62e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x4a62e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a62e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a62ec: 0x71880a  movz        $s1, $v1, $s1
    ctx->pc = 0x4a62ecu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x4a62f0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x4a62f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x4a62f4: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x4a62f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
    // 0x4a62f8: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x4a62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x4a62fc: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x4a62fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x4a6300: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x4a6300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x4a6304: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x4a6304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x4a6308: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x4a6308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x4a630c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x4a630cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x4a6310: 0xae250020  sw          $a1, 0x20($s1)
    ctx->pc = 0x4a6310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 5));
    // 0x4a6314: 0x0  nop
    ctx->pc = 0x4a6314u;
    // NOP
label_4a6318:
    // 0x4a6318: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a6318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a631c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a631cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a6320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a6320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6324: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6324u;
        // 0x4a6328: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A632Cu;
    // 0x4a632c: 0x0  nop
    ctx->pc = 0x4a632cu;
    // NOP
    ctx->pc = 0x4a6330u;
}
