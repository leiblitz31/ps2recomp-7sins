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

// Function: sub_00278920
// Address: 0x278920 - 0x278980
void sub_00278920_0x278920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278920_0x278920");
#endif

    switch (ctx->pc) {
        case 0x278954u: goto label_278954;
        default: break;
    }

    ctx->pc = 0x278920u;

    // 0x278920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x278920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x278924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x278924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x278928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27892c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27892cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x278930: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x278930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x278934: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x278934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278938: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x278938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x27893c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278940: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x278940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x278944: 0x24a587a0  addiu       $a1, $a1, -0x7860
    ctx->pc = 0x278944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936480));
    // 0x278948: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x278948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27894c: 0xc0e3396  jal         func_38CE58
    ctx->pc = 0x27894Cu;
    SET_GPR_U32(ctx, 31, 0x278954u);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x27894Cu, 0x278954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278954u;
label_278954:
    // 0x278954: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x278954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278958: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x278958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27895c: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x27895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x278960: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x278960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278964: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x278964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x278968: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x278968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27896c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27896cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278974: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x278974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x278978: 0x3e00008  jr          $ra
    ctx->pc = 0x278978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278980u;
}
