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

// Function: sub_00264F80
// Address: 0x264f80 - 0x265070
void sub_00264F80_0x264f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264F80_0x264f80");
#endif

    switch (ctx->pc) {
        case 0x264fa4u: goto label_264fa4;
        case 0x264fb0u: goto label_264fb0;
        case 0x264fc0u: goto label_264fc0;
        case 0x264fe8u: goto label_264fe8;
        case 0x265000u: goto label_265000;
        case 0x26500cu: goto label_26500c;
        case 0x26501cu: goto label_26501c;
        case 0x265044u: goto label_265044;
        default: break;
    }

    ctx->pc = 0x264f80u;

    // 0x264f80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x264f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x264f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x264f8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x264f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x264f90: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x264f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x264f94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x264f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264f98: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x264f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x264f9c: 0xc098954  jal         func_262550
    ctx->pc = 0x264F9Cu;
    SET_GPR_U32(ctx, 31, 0x264FA4u);
    ctx->pc = 0x262550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262550u, 0x264F9Cu, 0x264FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FA4u;
label_264fa4:
    // 0x264fa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264fa8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x264FA8u;
    {
        const bool branch_taken_0x264fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264fa8) {
            ctx->pc = 0x264FD8u;
            goto label_264fd8;
        }
    }
    ctx->pc = 0x264FB0u;
label_264fb0:
    // 0x264fb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x264fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x264fb4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x264fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264fb8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x264FB8u;
    SET_GPR_U32(ctx, 31, 0x264FC0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x264FB8u, 0x264FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FC0u;
label_264fc0:
    // 0x264fc0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264FC0u;
    {
        const bool branch_taken_0x264fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264fc0) {
            ctx->pc = 0x264FD4u;
            goto label_264fd4;
        }
    }
    ctx->pc = 0x264FC8u;
    // 0x264fc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x264fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x264fcc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x264FCCu;
    {
        const bool branch_taken_0x264fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264fcc) {
            ctx->pc = 0x265050u;
            goto label_265050;
        }
    }
    ctx->pc = 0x264FD4u;
label_264fd4:
    // 0x264fd4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x264fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_264fd8:
    // 0x264fd8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x264fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264fdc: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x264fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x264fe0: 0xc09894c  jal         func_262530
    ctx->pc = 0x264FE0u;
    SET_GPR_U32(ctx, 31, 0x264FE8u);
    ctx->pc = 0x262530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262530u, 0x264FE0u, 0x264FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FE8u;
label_264fe8:
    // 0x264fe8: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x264FE8u;
    {
        const bool branch_taken_0x264fe8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x264fe8) {
            ctx->pc = 0x264FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264fb0;
        }
    }
    ctx->pc = 0x264FF0u;
    // 0x264ff0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x264ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264ff4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x264ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x264ff8: 0xc098954  jal         func_262550
    ctx->pc = 0x264FF8u;
    SET_GPR_U32(ctx, 31, 0x265000u);
    ctx->pc = 0x262550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262550u, 0x264FF8u, 0x265000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265000u;
label_265000:
    // 0x265000: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265004: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x265004u;
    {
        const bool branch_taken_0x265004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265004) {
            ctx->pc = 0x265034u;
            goto label_265034;
        }
    }
    ctx->pc = 0x26500Cu;
label_26500c:
    // 0x26500c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26500cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x265010: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x265010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265014: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x265014u;
    SET_GPR_U32(ctx, 31, 0x26501Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x265014u, 0x26501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26501Cu;
label_26501c:
    // 0x26501c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26501Cu;
    {
        const bool branch_taken_0x26501c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26501c) {
            ctx->pc = 0x265030u;
            goto label_265030;
        }
    }
    ctx->pc = 0x265024u;
    // 0x265024: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x265024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x265028: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x265028u;
    {
        const bool branch_taken_0x265028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265028) {
            ctx->pc = 0x265050u;
            goto label_265050;
        }
    }
    ctx->pc = 0x265030u;
label_265030:
    // 0x265030: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x265030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_265034:
    // 0x265034: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x265034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265038: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x265038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x26503c: 0xc09894c  jal         func_262530
    ctx->pc = 0x26503Cu;
    SET_GPR_U32(ctx, 31, 0x265044u);
    ctx->pc = 0x262530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262530u, 0x26503Cu, 0x265044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265044u;
label_265044:
    // 0x265044: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x265044u;
    {
        const bool branch_taken_0x265044 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x265044) {
            ctx->pc = 0x26500Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26500c;
        }
    }
    ctx->pc = 0x26504Cu;
    // 0x26504c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26504cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265050:
    // 0x265050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x265050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265058: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x265058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26505c: 0x3e00008  jr          $ra
    ctx->pc = 0x26505Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26505Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265064u;
    // 0x265064: 0x0  nop
    ctx->pc = 0x265064u;
    // NOP
    // 0x265068: 0x0  nop
    ctx->pc = 0x265068u;
    // NOP
    // 0x26506c: 0x0  nop
    ctx->pc = 0x26506cu;
    // NOP
    ctx->pc = 0x265070u;
}
