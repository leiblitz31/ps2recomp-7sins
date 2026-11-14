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

// Function: sub_00486330
// Address: 0x486330 - 0x4863a0
void sub_00486330_0x486330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486330_0x486330");
#endif

    ctx->pc = 0x486330u;

    // 0x486330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x486330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x486334: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x486334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x486338: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x486338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48633c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48633cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486340: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x486340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x486344: 0x90420072  lbu         $v0, 0x72($v0)
    ctx->pc = 0x486344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 114)));
    // 0x486348: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x486348u;
    {
        const bool branch_taken_0x486348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x486348) {
            ctx->pc = 0x486360u;
            goto label_486360;
        }
    }
    ctx->pc = 0x486350u;
    // 0x486350: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x486350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x486354: 0x8c50007c  lw          $s0, 0x7C($v0)
    ctx->pc = 0x486354u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x486358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x486358u;
    {
        const bool branch_taken_0x486358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486358) {
            ctx->pc = 0x486368u;
            goto label_486368;
        }
    }
    ctx->pc = 0x486360u;
label_486360:
    // 0x486360: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x486360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x486364: 0x8c500078  lw          $s0, 0x78($v0)
    ctx->pc = 0x486364u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_486368:
    // 0x486368: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x486368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48636c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48636Cu;
    {
        const bool branch_taken_0x48636c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48636c) {
            ctx->pc = 0x486384u;
            goto label_486384;
        }
    }
    ctx->pc = 0x486374u;
    // 0x486374: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x486374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x486378: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x486378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48637c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48637Cu;
    {
        const bool branch_taken_0x48637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48637c) {
            ctx->pc = 0x486388u;
            goto label_486388;
        }
    }
    ctx->pc = 0x486384u;
label_486384:
    // 0x486384: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x486384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_486388:
    // 0x486388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48638c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48638cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x486390: 0x3e00008  jr          $ra
    ctx->pc = 0x486390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x486398u;
    // 0x486398: 0x0  nop
    ctx->pc = 0x486398u;
    // NOP
    // 0x48639c: 0x0  nop
    ctx->pc = 0x48639cu;
    // NOP
    ctx->pc = 0x4863a0u;
}
