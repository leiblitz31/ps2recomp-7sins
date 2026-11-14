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

// Function: sub_00481E70
// Address: 0x481e70 - 0x481ec0
void sub_00481E70_0x481e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481E70_0x481e70");
#endif

    switch (ctx->pc) {
        case 0x481eacu: goto label_481eac;
        default: break;
    }

    ctx->pc = 0x481e70u;

    // 0x481e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481e78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x481e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x481e7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x481e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x481e80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481e84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x481E84u;
    {
        const bool branch_taken_0x481e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481e84) {
            ctx->pc = 0x481EACu;
            goto label_481eac;
        }
    }
    ctx->pc = 0x481E8Cu;
    // 0x481e8c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x481e8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481e90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x481e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x481e94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x481e94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x481e98: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x481E98u;
    {
        const bool branch_taken_0x481e98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x481e98) {
            ctx->pc = 0x481EACu;
            goto label_481eac;
        }
    }
    ctx->pc = 0x481EA0u;
    // 0x481ea0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481ea4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x481EA4u;
    SET_GPR_U32(ctx, 31, 0x481EACu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x481EA4u, 0x481EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481EACu;
label_481eac:
    // 0x481eac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481eb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x481eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x481eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x481EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481EC0u;
}
