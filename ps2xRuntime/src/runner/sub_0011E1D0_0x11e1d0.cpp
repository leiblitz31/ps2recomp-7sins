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

// Function: sub_0011E1D0
// Address: 0x11e1d0 - 0x11e280
void sub_0011E1D0_0x11e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E1D0_0x11e1d0");
#endif

    switch (ctx->pc) {
        case 0x11e20cu: goto label_11e20c;
        case 0x11e218u: goto label_11e218;
        default: break;
    }

    ctx->pc = 0x11e1d0u;

    // 0x11e1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11e1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11e1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11e1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11e1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11e1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11e1dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x11e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x11e1e0: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x11e1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x11e1e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e1e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e1ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E1ECu;
    {
        const bool branch_taken_0x11e1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e1ec) {
            ctx->pc = 0x11E200u;
            goto label_11e200;
        }
    }
    ctx->pc = 0x11E1F4u;
    // 0x11e1f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e1f8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x11E1F8u;
    {
        const bool branch_taken_0x11e1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e1f8) {
            ctx->pc = 0x11E268u;
            goto label_11e268;
        }
    }
    ctx->pc = 0x11E200u;
label_11e200:
    // 0x11e200: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11e200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e204: 0xc042514  jal         func_109450
    ctx->pc = 0x11E204u;
    SET_GPR_U32(ctx, 31, 0x11E20Cu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x11E204u, 0x11E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E20Cu;
label_11e20c:
    // 0x11e20c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e210: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11E210u;
    {
        const bool branch_taken_0x11e210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e210) {
            ctx->pc = 0x11E21Cu;
            goto label_11e21c;
        }
    }
    ctx->pc = 0x11E218u;
label_11e218:
    // 0x11e218: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_11e21c:
    // 0x11e21c: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x11E21Cu;
    {
        const bool branch_taken_0x11e21c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x11e21c) {
            ctx->pc = 0x11E250u;
            goto label_11e250;
        }
    }
    ctx->pc = 0x11E224u;
    // 0x11e224: 0x83a20030  lb          $v0, 0x30($sp)
    ctx->pc = 0x11e224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e228: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x11e228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x11e22c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x11e22cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x11e230: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11e230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e234: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e238: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11e238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11e23c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x11e23cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e240: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x11e240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x11e244: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x11e244u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x11e248: 0x1462fff3  bne         $v1, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11E248u;
    {
        const bool branch_taken_0x11e248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e248) {
            ctx->pc = 0x11E218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e218;
        }
    }
    ctx->pc = 0x11E250u;
label_11e250:
    // 0x11e250: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E250u;
    {
        const bool branch_taken_0x11e250 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x11e250) {
            ctx->pc = 0x11E264u;
            goto label_11e264;
        }
    }
    ctx->pc = 0x11E258u;
    // 0x11e258: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11e258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e25c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11E25Cu;
    {
        const bool branch_taken_0x11e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e25c) {
            ctx->pc = 0x11E268u;
            goto label_11e268;
        }
    }
    ctx->pc = 0x11E264u;
label_11e264:
    // 0x11e264: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11e264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e268:
    // 0x11e268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11e268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e26c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11e26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e270: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x11e270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11e274: 0x3e00008  jr          $ra
    ctx->pc = 0x11E274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E27Cu;
    // 0x11e27c: 0x0  nop
    ctx->pc = 0x11e27cu;
    // NOP
    ctx->pc = 0x11e280u;
}
