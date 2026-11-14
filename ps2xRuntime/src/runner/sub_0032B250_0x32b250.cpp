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

// Function: sub_0032B250
// Address: 0x32b250 - 0x32b318
void sub_0032B250_0x32b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B250_0x32b250");
#endif

    switch (ctx->pc) {
        case 0x32b270u: goto label_32b270;
        case 0x32b28cu: goto label_32b28c;
        case 0x32b294u: goto label_32b294;
        case 0x32b2acu: goto label_32b2ac;
        case 0x32b2b4u: goto label_32b2b4;
        case 0x32b2c8u: goto label_32b2c8;
        case 0x32b2d8u: goto label_32b2d8;
        case 0x32b2e8u: goto label_32b2e8;
        case 0x32b2f4u: goto label_32b2f4;
        default: break;
    }

    ctx->pc = 0x32b250u;

    // 0x32b250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32b254: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32b254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32b258: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32b258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32b25c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32b25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32b260: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x32b260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x32b264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32b268: 0xc1116a2  jal         func_445A88
    ctx->pc = 0x32B268u;
    SET_GPR_U32(ctx, 31, 0x32B270u);
    ctx->pc = 0x32B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B268u;
    // 0x32b26c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445A88u, 0x32B268u, 0x32B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B270u;
label_32b270:
    // 0x32b270: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32b270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32b274: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32b274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32b278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b27c: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x32b27cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    // 0x32b280: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32b284: 0xc112074  jal         func_4481D0
    ctx->pc = 0x32B284u;
    SET_GPR_U32(ctx, 31, 0x32B28Cu);
    ctx->pc = 0x32B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B284u;
    // 0x32b288: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4481D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4481D0u, 0x32B284u, 0x32B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B28Cu;
label_32b28c:
    // 0x32b28c: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x32B28Cu;
    SET_GPR_U32(ctx, 31, 0x32B294u);
    ctx->pc = 0x32B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B28Cu;
    // 0x32b290: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x32B28Cu, 0x32B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B294u;
label_32b294:
    // 0x32b294: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32b294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b29c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32b29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b2a4: 0xc1120d8  jal         func_448360
    ctx->pc = 0x32B2A4u;
    SET_GPR_U32(ctx, 31, 0x32B2ACu);
    ctx->pc = 0x32B2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B2A4u;
    // 0x32b2a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448360u, 0x32B2A4u, 0x32B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B2ACu;
label_32b2ac:
    // 0x32b2ac: 0xc111dea  jal         func_4477A8
    ctx->pc = 0x32B2ACu;
    SET_GPR_U32(ctx, 31, 0x32B2B4u);
    ctx->pc = 0x32B2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B2ACu;
    // 0x32b2b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4477A8u, 0x32B2ACu, 0x32B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B2B4u;
label_32b2b4:
    // 0x32b2b4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x32b2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32b2b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32b2b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b2bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b2c0: 0xc1125d8  jal         func_449760
    ctx->pc = 0x32B2C0u;
    SET_GPR_U32(ctx, 31, 0x32B2C8u);
    ctx->pc = 0x32B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B2C0u;
    // 0x32b2c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449760u, 0x32B2C0u, 0x32B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B2C8u;
label_32b2c8:
    // 0x32b2c8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x32b2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32b2cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b2d0: 0xc0e8560  jal         func_3A1580
    ctx->pc = 0x32B2D0u;
    SET_GPR_U32(ctx, 31, 0x32B2D8u);
    ctx->pc = 0x32B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B2D0u;
    // 0x32b2d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1580u, 0x32B2D0u, 0x32B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B2D8u;
label_32b2d8:
    // 0x32b2d8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x32b2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32b2dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b2e0: 0xc0e8560  jal         func_3A1580
    ctx->pc = 0x32B2E0u;
    SET_GPR_U32(ctx, 31, 0x32B2E8u);
    ctx->pc = 0x32B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B2E0u;
    // 0x32b2e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1580u, 0x32B2E0u, 0x32B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B2E8u;
label_32b2e8:
    // 0x32b2e8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x32b2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32b2ec: 0xc0e8576  jal         func_3A15D8
    ctx->pc = 0x32B2ECu;
    SET_GPR_U32(ctx, 31, 0x32B2F4u);
    ctx->pc = 0x32B2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B2ECu;
    // 0x32b2f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15D8u, 0x32B2ECu, 0x32B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B2F4u;
label_32b2f4:
    // 0x32b2f4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x32b2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b2f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32b2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32b2fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32b2fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32b300: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32b300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b304: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x32b304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b30c: 0x3e00008  jr          $ra
    ctx->pc = 0x32B30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B30Cu;
        // 0x32b310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B314u;
    // 0x32b314: 0x0  nop
    ctx->pc = 0x32b314u;
    // NOP
    ctx->pc = 0x32b318u;
}
