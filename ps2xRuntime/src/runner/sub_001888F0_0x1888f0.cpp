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

// Function: sub_001888F0
// Address: 0x1888f0 - 0x188980
void sub_001888F0_0x1888f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001888F0_0x1888f0");
#endif

    switch (ctx->pc) {
        case 0x188950u: goto label_188950;
        case 0x188970u: goto label_188970;
        default: break;
    }

    ctx->pc = 0x1888f0u;

    // 0x1888f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1888f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1888f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1888f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1888f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1888f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1888fc: 0x8f83bae4  lw          $v1, -0x451C($gp)
    ctx->pc = 0x1888fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x188900: 0x1c60001b  bgtz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x188900u;
    {
        const bool branch_taken_0x188900 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x188900) {
            ctx->pc = 0x188970u;
            goto label_188970;
        }
    }
    ctx->pc = 0x188908u;
    // 0x188908: 0x8f84bae4  lw          $a0, -0x451C($gp)
    ctx->pc = 0x188908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x18890c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188910: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x188910u;
    {
        const bool branch_taken_0x188910 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188910) {
            ctx->pc = 0x18892Cu;
            goto label_18892c;
        }
    }
    ctx->pc = 0x188918u;
    // 0x188918: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x188918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18891c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x18891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x188920: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x188920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x188924: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x188924u;
    {
        const bool branch_taken_0x188924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188924) {
            ctx->pc = 0x188970u;
            goto label_188970;
        }
    }
    ctx->pc = 0x18892Cu;
label_18892c:
    // 0x18892c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18892cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x188930: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x188930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x188934: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x188934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x188938: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x188938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x18893c: 0x24a55280  addiu       $a1, $a1, 0x5280
    ctx->pc = 0x18893cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21120));
    // 0x188940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x188940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188944: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x188944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188948: 0xc08f558  jal         func_23D560
    ctx->pc = 0x188948u;
    SET_GPR_U32(ctx, 31, 0x188950u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x188948u, 0x188950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188950u;
label_188950:
    // 0x188950: 0x8f82bae4  lw          $v0, -0x451C($gp)
    ctx->pc = 0x188950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x188954: 0xaf829190  sw          $v0, -0x6E70($gp)
    ctx->pc = 0x188954u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939024), GPR_U32(ctx, 2));
    // 0x188958: 0x8f82bae4  lw          $v0, -0x451C($gp)
    ctx->pc = 0x188958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x18895c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x188960: 0xaf82bae4  sw          $v0, -0x451C($gp)
    ctx->pc = 0x188960u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949604), GPR_U32(ctx, 2));
    // 0x188964: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x188964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188968: 0xc062314  jal         func_188C50
    ctx->pc = 0x188968u;
    SET_GPR_U32(ctx, 31, 0x188970u);
    ctx->pc = 0x188C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188C50u, 0x188968u, 0x188970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188970u;
label_188970:
    // 0x188970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188974: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x188974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x188978: 0x3e00008  jr          $ra
    ctx->pc = 0x188978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188980u;
}
