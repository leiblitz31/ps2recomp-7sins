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

// Function: sub_00221950
// Address: 0x221950 - 0x2219c0
void sub_00221950_0x221950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221950_0x221950");
#endif

    switch (ctx->pc) {
        case 0x22196cu: goto label_22196c;
        default: break;
    }

    ctx->pc = 0x221950u;

    // 0x221950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x221950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x221954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x221958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x221958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22195c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22195cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x221960: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x221960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x221964: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x221964u;
    {
        const bool branch_taken_0x221964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221964) {
            ctx->pc = 0x221994u;
            goto label_221994;
        }
    }
    ctx->pc = 0x22196Cu;
label_22196c:
    // 0x22196c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22196cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221970: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x221970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221974: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221978: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x221978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22197c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221980: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x221980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x221984: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x221984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x221988: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22198c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x22198cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x221990: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x221990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_221994:
    // 0x221994: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x221994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221998: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x221998u;
    {
        const bool branch_taken_0x221998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221998) {
            ctx->pc = 0x22196Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22196c;
        }
    }
    ctx->pc = 0x2219A0u;
    // 0x2219a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2219a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2219a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2219a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2219a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2219a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2219ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2219ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2219ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2219B4u;
    // 0x2219b4: 0x0  nop
    ctx->pc = 0x2219b4u;
    // NOP
    // 0x2219b8: 0x0  nop
    ctx->pc = 0x2219b8u;
    // NOP
    // 0x2219bc: 0x0  nop
    ctx->pc = 0x2219bcu;
    // NOP
    ctx->pc = 0x2219c0u;
}
