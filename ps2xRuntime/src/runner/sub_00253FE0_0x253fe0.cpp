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

// Function: sub_00253FE0
// Address: 0x253fe0 - 0x254050
void sub_00253FE0_0x253fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253FE0_0x253fe0");
#endif

    ctx->pc = 0x253fe0u;

    // 0x253fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253fe4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x253fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x253fe8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x253fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253fec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253ff0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x253FF0u;
    {
        const bool branch_taken_0x253ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x253ff0) {
            ctx->pc = 0x254030u;
            goto label_254030;
        }
    }
    ctx->pc = 0x253FF8u;
    // 0x253ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253ffc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253FFCu;
    {
        const bool branch_taken_0x253ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x253ffc) {
            ctx->pc = 0x254024u;
            goto label_254024;
        }
    }
    ctx->pc = 0x254004u;
    // 0x254004: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x254004u;
    {
        const bool branch_taken_0x254004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x254004) {
            ctx->pc = 0x254014u;
            goto label_254014;
        }
    }
    ctx->pc = 0x25400Cu;
    // 0x25400c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25400Cu;
    {
        const bool branch_taken_0x25400c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25400c) {
            ctx->pc = 0x254040u;
            goto label_254040;
        }
    }
    ctx->pc = 0x254014u;
label_254014:
    // 0x254014: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x254014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x254018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x254018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25401c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25401Cu;
    {
        const bool branch_taken_0x25401c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25401c) {
            ctx->pc = 0x254044u;
            goto label_254044;
        }
    }
    ctx->pc = 0x254024u;
label_254024:
    // 0x254024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x254024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254028: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x254028u;
    {
        const bool branch_taken_0x254028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254028) {
            ctx->pc = 0x254044u;
            goto label_254044;
        }
    }
    ctx->pc = 0x254030u;
label_254030:
    // 0x254030: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x254030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x254034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x254034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254038: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254038u;
    {
        const bool branch_taken_0x254038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254038) {
            ctx->pc = 0x254044u;
            goto label_254044;
        }
    }
    ctx->pc = 0x254040u;
label_254040:
    // 0x254040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x254040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_254044:
    // 0x254044: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x254044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x254048: 0x3e00008  jr          $ra
    ctx->pc = 0x254048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254050u;
}
