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

// Function: sub_0013A220
// Address: 0x13a220 - 0x13a2e0
void sub_0013A220_0x13a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A220_0x13a220");
#endif

    switch (ctx->pc) {
        case 0x13a220u: goto label_13a220;
        case 0x13a224u: goto label_13a224;
        case 0x13a228u: goto label_13a228;
        case 0x13a22cu: goto label_13a22c;
        case 0x13a230u: goto label_13a230;
        case 0x13a234u: goto label_13a234;
        case 0x13a238u: goto label_13a238;
        case 0x13a23cu: goto label_13a23c;
        case 0x13a240u: goto label_13a240;
        case 0x13a244u: goto label_13a244;
        case 0x13a248u: goto label_13a248;
        case 0x13a24cu: goto label_13a24c;
        case 0x13a250u: goto label_13a250;
        case 0x13a254u: goto label_13a254;
        case 0x13a258u: goto label_13a258;
        case 0x13a25cu: goto label_13a25c;
        case 0x13a260u: goto label_13a260;
        case 0x13a264u: goto label_13a264;
        case 0x13a268u: goto label_13a268;
        case 0x13a26cu: goto label_13a26c;
        case 0x13a270u: goto label_13a270;
        case 0x13a274u: goto label_13a274;
        case 0x13a278u: goto label_13a278;
        case 0x13a27cu: goto label_13a27c;
        case 0x13a280u: goto label_13a280;
        case 0x13a284u: goto label_13a284;
        case 0x13a288u: goto label_13a288;
        case 0x13a28cu: goto label_13a28c;
        case 0x13a290u: goto label_13a290;
        case 0x13a294u: goto label_13a294;
        case 0x13a298u: goto label_13a298;
        case 0x13a29cu: goto label_13a29c;
        case 0x13a2a0u: goto label_13a2a0;
        case 0x13a2a4u: goto label_13a2a4;
        case 0x13a2a8u: goto label_13a2a8;
        case 0x13a2acu: goto label_13a2ac;
        case 0x13a2b0u: goto label_13a2b0;
        case 0x13a2b4u: goto label_13a2b4;
        case 0x13a2b8u: goto label_13a2b8;
        case 0x13a2bcu: goto label_13a2bc;
        case 0x13a2c0u: goto label_13a2c0;
        case 0x13a2c4u: goto label_13a2c4;
        case 0x13a2c8u: goto label_13a2c8;
        case 0x13a2ccu: goto label_13a2cc;
        case 0x13a2d0u: goto label_13a2d0;
        case 0x13a2d4u: goto label_13a2d4;
        case 0x13a2d8u: goto label_13a2d8;
        case 0x13a2dcu: goto label_13a2dc;
        default: break;
    }

    ctx->pc = 0x13a220u;

label_13a220:
    // 0x13a220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13a224:
    // 0x13a224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13a228:
    // 0x13a228: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13a228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_13a22c:
    // 0x13a22c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13a230:
    // 0x13a230: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13a230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13a234:
    // 0x13a234: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13a234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13a238:
    // 0x13a238: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x13a238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_13a23c:
    // 0x13a23c: 0x320f809  jalr        $t9
label_13a240:
    if (ctx->pc == 0x13A240u) {
        ctx->pc = 0x13A244u;
        goto label_13a244;
    }
    ctx->pc = 0x13A23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13A244u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A23Cu, 0x13A244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A244u;
label_13a244:
    // 0x13a244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13a248:
    // 0x13a248: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13a248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13a24c:
    // 0x13a24c: 0x3e00008  jr          $ra
label_13a250:
    if (ctx->pc == 0x13A250u) {
        ctx->pc = 0x13A254u;
        goto label_13a254;
    }
    ctx->pc = 0x13A24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A254u;
label_13a254:
    // 0x13a254: 0x0  nop
    ctx->pc = 0x13a254u;
    // NOP
label_13a258:
    // 0x13a258: 0x0  nop
    ctx->pc = 0x13a258u;
    // NOP
label_13a25c:
    // 0x13a25c: 0x0  nop
    ctx->pc = 0x13a25cu;
    // NOP
label_13a260:
    // 0x13a260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13a264:
    // 0x13a264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13a264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13a268:
    // 0x13a268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13a26c:
    // 0x13a26c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_13a270:
    // 0x13a270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a274:
    // 0x13a274: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13a274u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13a278:
    // 0x13a278: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13a27c:
    // 0x13a27c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x13a27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13a280:
    // 0x13a280: 0x27858c70  addiu       $a1, $gp, -0x7390
    ctx->pc = 0x13a280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
label_13a284:
    // 0x13a284: 0xc041ba4  jal         func_106E90
label_13a288:
    if (ctx->pc == 0x13A288u) {
        ctx->pc = 0x13A28Cu;
        goto label_13a28c;
    }
    ctx->pc = 0x13A284u;
    SET_GPR_U32(ctx, 31, 0x13A28Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x13A284u, 0x13A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A28Cu;
label_13a28c:
    // 0x13a28c: 0xa380ba6c  sb          $zero, -0x4594($gp)
    ctx->pc = 0x13a28cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949484), (uint8_t)GPR_U32(ctx, 0));
label_13a290:
    // 0x13a290: 0xaf80ba70  sw          $zero, -0x4590($gp)
    ctx->pc = 0x13a290u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949488), GPR_U32(ctx, 0));
label_13a294:
    // 0x13a294: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13a298:
    // 0x13a298: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x13a298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
label_13a29c:
    // 0x13a29c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13a2a0:
    // 0x13a2a0: 0xc08ec5c  jal         func_23B170
label_13a2a4:
    if (ctx->pc == 0x13A2A4u) {
        ctx->pc = 0x13A2A8u;
        goto label_13a2a8;
    }
    ctx->pc = 0x13A2A0u;
    SET_GPR_U32(ctx, 31, 0x13A2A8u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x13A2A0u, 0x13A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A2A8u;
label_13a2a8:
    // 0x13a2a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13a2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13a2ac:
    // 0x13a2ac: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13a2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13a2b0:
    // 0x13a2b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13a2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13a2b4:
    // 0x13a2b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13a2b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13a2b8:
    // 0x13a2b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13a2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13a2bc:
    // 0x13a2bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13a2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13a2c0:
    // 0x13a2c0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13a2c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13a2c4:
    // 0x13a2c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13a2c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a2c8:
    // 0x13a2c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13a2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13a2cc:
    // 0x13a2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13a2d0:
    // 0x13a2d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13a2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13a2d4:
    // 0x13a2d4: 0x3e00008  jr          $ra
label_13a2d8:
    if (ctx->pc == 0x13A2D8u) {
        ctx->pc = 0x13A2DCu;
        goto label_13a2dc;
    }
    ctx->pc = 0x13A2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A2DCu;
label_13a2dc:
    // 0x13a2dc: 0x0  nop
    ctx->pc = 0x13a2dcu;
    // NOP
    ctx->pc = 0x13a2e0u;
}
