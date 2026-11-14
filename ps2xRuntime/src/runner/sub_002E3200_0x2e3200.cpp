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

// Function: sub_002E3200
// Address: 0x2e3200 - 0x2e3300
void sub_002E3200_0x2e3200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3200_0x2e3200");
#endif

    switch (ctx->pc) {
        case 0x2e3238u: goto label_2e3238;
        case 0x2e3244u: goto label_2e3244;
        case 0x2e3258u: goto label_2e3258;
        case 0x2e3268u: goto label_2e3268;
        case 0x2e3280u: goto label_2e3280;
        case 0x2e3294u: goto label_2e3294;
        case 0x2e32acu: goto label_2e32ac;
        case 0x2e32dcu: goto label_2e32dc;
        default: break;
    }

    ctx->pc = 0x2e3200u;

    // 0x2e3200: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e3200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e3204: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e3204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e3208: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e3208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e320c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e3210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3214: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e3218: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2e3218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2e321c: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2e321cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2e3220: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x2e3220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x2e3224: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e3224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3228: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2e3228u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e322c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3230: 0xc0b7d18  jal         func_2DF460
    ctx->pc = 0x2E3230u;
    SET_GPR_U32(ctx, 31, 0x2E3238u);
    ctx->pc = 0x2DF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF460u, 0x2E3230u, 0x2E3238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3238u;
label_2e3238:
    // 0x2e3238: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e3238u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e323c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2E323Cu;
    {
        const bool branch_taken_0x2e323c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e323c) {
            ctx->pc = 0x2E32B4u;
            goto label_2e32b4;
        }
    }
    ctx->pc = 0x2E3244u;
label_2e3244:
    // 0x2e3244: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2e3244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3248: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2e3248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2e324c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2e324cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3250: 0xc0b81d8  jal         func_2E0760
    ctx->pc = 0x2E3250u;
    SET_GPR_U32(ctx, 31, 0x2E3258u);
    ctx->pc = 0x2E0760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0760u, 0x2E3250u, 0x2E3258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3258u;
label_2e3258:
    // 0x2e3258: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e3258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e325c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e325cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3260: 0xc0b81c8  jal         func_2E0720
    ctx->pc = 0x2E3260u;
    SET_GPR_U32(ctx, 31, 0x2E3268u);
    ctx->pc = 0x2E0720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0720u, 0x2E3260u, 0x2E3268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3268u;
label_2e3268:
    // 0x2e3268: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e3268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e326c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2e326cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e3270: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2e3270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3274: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2e3274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3278: 0xc0b7b20  jal         func_2DEC80
    ctx->pc = 0x2E3278u;
    SET_GPR_U32(ctx, 31, 0x2E3280u);
    ctx->pc = 0x2DEC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEC80u, 0x2E3278u, 0x2E3280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3280u;
label_2e3280:
    // 0x2e3280: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3280u;
    {
        const bool branch_taken_0x2e3280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3280) {
            ctx->pc = 0x2E32A0u;
            goto label_2e32a0;
        }
    }
    ctx->pc = 0x2E3288u;
    // 0x2e3288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e328c: 0xc0b81c0  jal         func_2E0700
    ctx->pc = 0x2E328Cu;
    SET_GPR_U32(ctx, 31, 0x2E3294u);
    ctx->pc = 0x2E0700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0700u, 0x2E328Cu, 0x2E3294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3294u;
label_2e3294:
    // 0x2e3294: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2e3294u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3298: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3298u;
    {
        const bool branch_taken_0x2e3298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3298) {
            ctx->pc = 0x2E32B0u;
            goto label_2e32b0;
        }
    }
    ctx->pc = 0x2E32A0u;
label_2e32a0:
    // 0x2e32a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e32a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32a4: 0xc0b81b8  jal         func_2E06E0
    ctx->pc = 0x2E32A4u;
    SET_GPR_U32(ctx, 31, 0x2E32ACu);
    ctx->pc = 0x2E06E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E06E0u, 0x2E32A4u, 0x2E32ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E32ACu;
label_2e32ac:
    // 0x2e32ac: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2e32acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e32b0:
    // 0x2e32b0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2e32b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e32b4:
    // 0x2e32b4: 0x1600ffe3  bnez        $s0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2E32B4u;
    {
        const bool branch_taken_0x2e32b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e32b4) {
            ctx->pc = 0x2E3244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3244;
        }
    }
    ctx->pc = 0x2E32BCu;
    // 0x2e32bc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e32bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e32c0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e32c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e32c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e32c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e32c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32cc: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x2e32ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e32d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e32d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32d4: 0xc0b8cc0  jal         func_2E3300
    ctx->pc = 0x2E32D4u;
    SET_GPR_U32(ctx, 31, 0x2E32DCu);
    ctx->pc = 0x2E3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3300u, 0x2E32D4u, 0x2E32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E32DCu;
label_2e32dc:
    // 0x2e32dc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e32e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e32e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e32e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e32e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e32e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e32e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e32ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e32ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e32f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e32f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e32f4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2e32f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e32f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E32F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E32F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3300u;
}
