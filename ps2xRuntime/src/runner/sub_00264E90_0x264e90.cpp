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

// Function: sub_00264E90
// Address: 0x264e90 - 0x264f50
void sub_00264E90_0x264e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264E90_0x264e90");
#endif

    switch (ctx->pc) {
        case 0x264ec0u: goto label_264ec0;
        case 0x264ef0u: goto label_264ef0;
        case 0x264f00u: goto label_264f00;
        default: break;
    }

    ctx->pc = 0x264e90u;

    // 0x264e90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x264e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x264e94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x264e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x264e98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x264e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x264e9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x264e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x264ea0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x264ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x264ea4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x264ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x264ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x264eac: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x264eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x264eb0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x264eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264eb4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x264eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x264eb8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x264EB8u;
    SET_GPR_U32(ctx, 31, 0x264EC0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x264EB8u, 0x264EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264EC0u;
label_264ec0:
    // 0x264ec0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ec4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x264EC4u;
    {
        const bool branch_taken_0x264ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x264ec4) {
            ctx->pc = 0x264F28u;
            goto label_264f28;
        }
    }
    ctx->pc = 0x264ECCu;
    // 0x264ecc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x264eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264ed0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x264ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x264ed4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x264ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ed8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x264ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x264edc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x264edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264ee0: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x264ee0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x264ee4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x264ee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ee8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x264EE8u;
    {
        const bool branch_taken_0x264ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264ee8) {
            ctx->pc = 0x264F1Cu;
            goto label_264f1c;
        }
    }
    ctx->pc = 0x264EF0u;
label_264ef0:
    // 0x264ef0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x264ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264ef4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x264ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ef8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x264EF8u;
    SET_GPR_U32(ctx, 31, 0x264F00u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x264EF8u, 0x264F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F00u;
label_264f00:
    // 0x264f00: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x264f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x264f04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264F04u;
    {
        const bool branch_taken_0x264f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264f04) {
            ctx->pc = 0x264F14u;
            goto label_264f14;
        }
    }
    ctx->pc = 0x264F0Cu;
    // 0x264f0c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x264f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x264f10: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x264f10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_264f14:
    // 0x264f14: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x264f14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x264f18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x264f18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_264f1c:
    // 0x264f1c: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x264F1Cu;
    {
        const bool branch_taken_0x264f1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x264f1c) {
            ctx->pc = 0x264EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264ef0;
        }
    }
    ctx->pc = 0x264F24u;
    // 0x264f24: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x264f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264f28:
    // 0x264f28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x264f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x264f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264f30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x264f30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264f34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x264f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264f38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x264f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264f40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264f44: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x264f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x264f48: 0x3e00008  jr          $ra
    ctx->pc = 0x264F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264F50u;
}
