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

// Function: sub_0023D1B0
// Address: 0x23d1b0 - 0x23d270
void sub_0023D1B0_0x23d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D1B0_0x23d1b0");
#endif

    switch (ctx->pc) {
        case 0x23d1e0u: goto label_23d1e0;
        case 0x23d210u: goto label_23d210;
        case 0x23d220u: goto label_23d220;
        default: break;
    }

    ctx->pc = 0x23d1b0u;

    // 0x23d1b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23d1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23d1b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23d1b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23d1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23d1bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23d1c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23d1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23d1c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23d1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23d1c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23d1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23d1cc: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x23d1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x23d1d0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x23d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23d1d4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x23d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x23d1d8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x23D1D8u;
    SET_GPR_U32(ctx, 31, 0x23D1E0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x23D1D8u, 0x23D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1E0u;
label_23d1e0:
    // 0x23d1e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23d1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1e4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23D1E4u;
    {
        const bool branch_taken_0x23d1e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d1e4) {
            ctx->pc = 0x23D248u;
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D1ECu;
    // 0x23d1ec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x23d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23d1f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23d1f4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x23d1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1f8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x23d1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x23d1fc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x23d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23d200: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x23d200u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23d204: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x23d204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d208: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23D208u;
    {
        const bool branch_taken_0x23d208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d208) {
            ctx->pc = 0x23D23Cu;
            goto label_23d23c;
        }
    }
    ctx->pc = 0x23D210u;
label_23d210:
    // 0x23d210: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d214: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23d214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d218: 0xc0400e0  jal         func_100380
    ctx->pc = 0x23D218u;
    SET_GPR_U32(ctx, 31, 0x23D220u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x23D218u, 0x23D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D220u;
label_23d220:
    // 0x23d220: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x23d220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x23d224: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D224u;
    {
        const bool branch_taken_0x23d224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d224) {
            ctx->pc = 0x23D234u;
            goto label_23d234;
        }
    }
    ctx->pc = 0x23D22Cu;
    // 0x23d22c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x23d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x23d230: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x23d230u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_23d234:
    // 0x23d234: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x23d234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x23d238: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23d238u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23d23c:
    // 0x23d23c: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x23D23Cu;
    {
        const bool branch_taken_0x23d23c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x23d23c) {
            ctx->pc = 0x23D210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d210;
        }
    }
    ctx->pc = 0x23D244u;
    // 0x23d244: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x23d244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d248:
    // 0x23d248: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23d248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d24c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23d24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d250: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23d250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d254: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23d254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d258: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23d258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d25c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23d25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23d260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d264: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x23d264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x23d268: 0x3e00008  jr          $ra
    ctx->pc = 0x23D268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D270u;
}
