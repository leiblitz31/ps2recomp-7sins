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

// Function: sub_0014F1F0
// Address: 0x14f1f0 - 0x14f2b0
void sub_0014F1F0_0x14f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F1F0_0x14f1f0");
#endif

    ctx->pc = 0x14f1f0u;

    // 0x14f1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14f1f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14f1f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x14f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14f1fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f200: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14f200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f204: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f208: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14f208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14f20c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f210: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14f210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14f214: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f218: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x14f218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x14f21c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f220: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x14f220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14f224: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14f224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f228: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x14f228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x14f22c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f230: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x14f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14f234: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f238: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x14f238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x14f23c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f240: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x14f240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14f244: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f248: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x14f248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x14f24c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f250: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x14f250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14f254: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14f254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f258: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x14f258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x14f25c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f260: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x14f260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x14f264: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f268: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x14f268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x14f26c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f270: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x14f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x14f274: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f278: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x14f278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x14f27c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f280: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x14f280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x14f284: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f288: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x14f288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x14f28c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f290: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x14f290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x14f294: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14f294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f298: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x14f298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x14f29c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f2a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14f2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x14F2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F2ACu;
    // 0x14f2ac: 0x0  nop
    ctx->pc = 0x14f2acu;
    // NOP
    ctx->pc = 0x14f2b0u;
}
