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

// Function: sub_001358D0
// Address: 0x1358d0 - 0x135940
void sub_001358D0_0x1358d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001358D0_0x1358d0");
#endif

    ctx->pc = 0x1358d0u;

    // 0x1358d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1358d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1358d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1358d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1358d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1358d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1358dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1358dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1358e0: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1358E0u;
    {
        const bool branch_taken_0x1358e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1358e0) {
            ctx->pc = 0x135924u;
            goto label_135924;
        }
    }
    ctx->pc = 0x1358E8u;
    // 0x1358e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1358e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1358ec: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1358ECu;
    {
        const bool branch_taken_0x1358ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1358ec) {
            ctx->pc = 0x135914u;
            goto label_135914;
        }
    }
    ctx->pc = 0x1358F4u;
    // 0x1358f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1358F4u;
    {
        const bool branch_taken_0x1358f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1358f4) {
            ctx->pc = 0x135904u;
            goto label_135904;
        }
    }
    ctx->pc = 0x1358FCu;
    // 0x1358fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1358FCu;
    {
        const bool branch_taken_0x1358fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1358fc) {
            ctx->pc = 0x135924u;
            goto label_135924;
        }
    }
    ctx->pc = 0x135904u;
label_135904:
    // 0x135904: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x135904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x135908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13590c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13590Cu;
    {
        const bool branch_taken_0x13590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13590c) {
            ctx->pc = 0x135928u;
            goto label_135928;
        }
    }
    ctx->pc = 0x135914u;
label_135914:
    // 0x135914: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x135914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x135918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13591c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13591Cu;
    {
        const bool branch_taken_0x13591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13591c) {
            ctx->pc = 0x135928u;
            goto label_135928;
        }
    }
    ctx->pc = 0x135924u;
label_135924:
    // 0x135924: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x135924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_135928:
    // 0x135928: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x135928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13592c: 0x3e00008  jr          $ra
    ctx->pc = 0x13592Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13592Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135934u;
    // 0x135934: 0x0  nop
    ctx->pc = 0x135934u;
    // NOP
    // 0x135938: 0x0  nop
    ctx->pc = 0x135938u;
    // NOP
    // 0x13593c: 0x0  nop
    ctx->pc = 0x13593cu;
    // NOP
    ctx->pc = 0x135940u;
}
