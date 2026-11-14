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

// Function: sub_0044F1E0
// Address: 0x44f1e0 - 0x44f280
void sub_0044F1E0_0x44f1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F1E0_0x44f1e0");
#endif

    switch (ctx->pc) {
        case 0x44f1e0u: goto label_44f1e0;
        case 0x44f1e4u: goto label_44f1e4;
        case 0x44f1e8u: goto label_44f1e8;
        case 0x44f1ecu: goto label_44f1ec;
        case 0x44f1f0u: goto label_44f1f0;
        case 0x44f1f4u: goto label_44f1f4;
        case 0x44f1f8u: goto label_44f1f8;
        case 0x44f1fcu: goto label_44f1fc;
        case 0x44f200u: goto label_44f200;
        case 0x44f204u: goto label_44f204;
        case 0x44f208u: goto label_44f208;
        case 0x44f20cu: goto label_44f20c;
        case 0x44f210u: goto label_44f210;
        case 0x44f214u: goto label_44f214;
        case 0x44f218u: goto label_44f218;
        case 0x44f21cu: goto label_44f21c;
        case 0x44f220u: goto label_44f220;
        case 0x44f224u: goto label_44f224;
        case 0x44f228u: goto label_44f228;
        case 0x44f22cu: goto label_44f22c;
        case 0x44f230u: goto label_44f230;
        case 0x44f234u: goto label_44f234;
        case 0x44f238u: goto label_44f238;
        case 0x44f23cu: goto label_44f23c;
        case 0x44f240u: goto label_44f240;
        case 0x44f244u: goto label_44f244;
        case 0x44f248u: goto label_44f248;
        case 0x44f24cu: goto label_44f24c;
        case 0x44f250u: goto label_44f250;
        case 0x44f254u: goto label_44f254;
        case 0x44f258u: goto label_44f258;
        case 0x44f25cu: goto label_44f25c;
        case 0x44f260u: goto label_44f260;
        case 0x44f264u: goto label_44f264;
        case 0x44f268u: goto label_44f268;
        case 0x44f26cu: goto label_44f26c;
        case 0x44f270u: goto label_44f270;
        case 0x44f274u: goto label_44f274;
        case 0x44f278u: goto label_44f278;
        case 0x44f27cu: goto label_44f27c;
        default: break;
    }

    ctx->pc = 0x44f1e0u;

label_44f1e0:
    // 0x44f1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44f1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44f1e4:
    // 0x44f1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44f1e8:
    // 0x44f1e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44f1ec:
    // 0x44f1ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f1f0:
    // 0x44f1f0: 0xc113b08  jal         func_44EC20
label_44f1f4:
    if (ctx->pc == 0x44F1F4u) {
        ctx->pc = 0x44F1F8u;
        goto label_44f1f8;
    }
    ctx->pc = 0x44F1F0u;
    SET_GPR_U32(ctx, 31, 0x44F1F8u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44F1F0u, 0x44F1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F1F8u;
label_44f1f8:
    // 0x44f1f8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44f1fc:
    // 0x44f1fc: 0x24636ac0  addiu       $v1, $v1, 0x6AC0
    ctx->pc = 0x44f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27328));
label_44f200:
    // 0x44f200: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f204:
    // 0x44f204: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44f204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44f208:
    // 0x44f208: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f20c:
    // 0x44f20c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44f20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44f210:
    // 0x44f210: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44f210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44f214:
    // 0x44f214: 0x320f809  jalr        $t9
label_44f218:
    if (ctx->pc == 0x44F218u) {
        ctx->pc = 0x44F21Cu;
        goto label_44f21c;
    }
    ctx->pc = 0x44F214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44F21Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F214u, 0x44F21Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44F21Cu;
label_44f21c:
    // 0x44f21c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f220:
    // 0x44f220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44f224:
    // 0x44f224: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44f224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44f228:
    // 0x44f228: 0x3e00008  jr          $ra
label_44f22c:
    if (ctx->pc == 0x44F22Cu) {
        ctx->pc = 0x44F230u;
        goto label_44f230;
    }
    ctx->pc = 0x44F228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F230u;
label_44f230:
    // 0x44f230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44f230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44f234:
    // 0x44f234: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44f234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44f238:
    // 0x44f238: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f23c:
    // 0x44f23c: 0xa0600044  sb          $zero, 0x44($v1)
    ctx->pc = 0x44f23cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 68), (uint8_t)GPR_U32(ctx, 0));
label_44f240:
    // 0x44f240: 0x263c  dsll32      $a0, $zero, 24
    ctx->pc = 0x44f240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 24));
label_44f244:
    // 0x44f244: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x44f244u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_44f248:
    // 0x44f248: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f24c:
    // 0x44f24c: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x44f24cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_44f250:
    // 0x44f250: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f254:
    // 0x44f254: 0xa0600064  sb          $zero, 0x64($v1)
    ctx->pc = 0x44f254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 100), (uint8_t)GPR_U32(ctx, 0));
label_44f258:
    // 0x44f258: 0x263c  dsll32      $a0, $zero, 24
    ctx->pc = 0x44f258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 24));
label_44f25c:
    // 0x44f25c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x44f25cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_44f260:
    // 0x44f260: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f264:
    // 0x44f264: 0xa0640024  sb          $a0, 0x24($v1)
    ctx->pc = 0x44f264u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 4));
label_44f268:
    // 0x44f268: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x44f268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44f26c:
    // 0x44f26c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f270:
    // 0x44f270: 0xa0640084  sb          $a0, 0x84($v1)
    ctx->pc = 0x44f270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 132), (uint8_t)GPR_U32(ctx, 4));
label_44f274:
    // 0x44f274: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44f274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44f278:
    // 0x44f278: 0x3e00008  jr          $ra
label_44f27c:
    if (ctx->pc == 0x44F27Cu) {
        ctx->pc = 0x44F280u;
        goto label_fallthrough_0x44f278;
    }
    ctx->pc = 0x44F278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x44f278:
    ctx->pc = 0x44F280u;
}
