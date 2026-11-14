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

// Function: sub_001E2290
// Address: 0x1e2290 - 0x1e2350
void sub_001E2290_0x1e2290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2290_0x1e2290");
#endif

    ctx->pc = 0x1e2290u;

    // 0x1e2290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2298: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e2298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e229c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e229cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e22a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e22a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e22a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e22a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e22a8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1e22a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e22ac: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x1e22acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e22b0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1e22b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e22b4: 0x101943  sra         $v1, $s0, 5
    ctx->pc = 0x1e22b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 5));
    // 0x1e22b8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E22B8u;
    {
        const bool branch_taken_0x1e22b8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1e22b8) {
            ctx->pc = 0x1E22C8u;
            goto label_1e22c8;
        }
    }
    ctx->pc = 0x1E22C0u;
    // 0x1e22c0: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x1e22c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x1e22c4: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1e22c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1e22c8:
    // 0x1e22c8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1e22c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e22cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e22ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e22d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e22d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1e22d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e22d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e22d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e22dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e22dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1e22e0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1e22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e22e4: 0x3203001f  andi        $v1, $s0, 0x1F
    ctx->pc = 0x1e22e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1e22e8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E22E8u;
    {
        const bool branch_taken_0x1e22e8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1e22e8) {
            ctx->pc = 0x1E22FCu;
            goto label_1e22fc;
        }
    }
    ctx->pc = 0x1E22F0u;
    // 0x1e22f0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E22F0u;
    {
        const bool branch_taken_0x1e22f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e22f0) {
            ctx->pc = 0x1E22FCu;
            goto label_1e22fc;
        }
    }
    ctx->pc = 0x1E22F8u;
    // 0x1e22f8: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x1e22f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_1e22fc:
    // 0x1e22fc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1e22fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2300: 0x601000b  bgez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E2300u;
    {
        const bool branch_taken_0x1e2300 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1e2300) {
            ctx->pc = 0x1E2330u;
            goto label_1e2330;
        }
    }
    ctx->pc = 0x1E2308u;
    // 0x1e2308: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1e2308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1e230c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e230cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2310: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1e2310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1e2314: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e2314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2318: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e2318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e231c: 0x2464fffc  addiu       $a0, $v1, -0x4
    ctx->pc = 0x1e231cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1e2320: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e2320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2324: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e2324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1e2328: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2328u;
    {
        const bool branch_taken_0x1e2328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2328) {
            ctx->pc = 0x1E2338u;
            goto label_1e2338;
        }
    }
    ctx->pc = 0x1E2330u;
label_1e2330:
    // 0x1e2330: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e2330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2334: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x1e2334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
label_1e2338:
    // 0x1e2338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e233c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e233cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e2340: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2348u;
    // 0x1e2348: 0x0  nop
    ctx->pc = 0x1e2348u;
    // NOP
    // 0x1e234c: 0x0  nop
    ctx->pc = 0x1e234cu;
    // NOP
    ctx->pc = 0x1e2350u;
}
