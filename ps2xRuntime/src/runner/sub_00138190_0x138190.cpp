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

// Function: sub_00138190
// Address: 0x138190 - 0x138260
void sub_00138190_0x138190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138190_0x138190");
#endif

    switch (ctx->pc) {
        case 0x1381f4u: goto label_1381f4;
        case 0x138208u: goto label_138208;
        case 0x138218u: goto label_138218;
        case 0x138230u: goto label_138230;
        case 0x138240u: goto label_138240;
        default: break;
    }

    ctx->pc = 0x138190u;

    // 0x138190: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x138190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x138194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138198: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x138198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13819c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13819cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1381a0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1381a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1381a4: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x1381a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x1381a8: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1381a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x1381ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1381acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1381b0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1381b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1381b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1381b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1381b8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1381b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1381bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1381bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1381c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1381c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1381c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1381c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1381c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1381c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1381cc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1381ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1381d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1381d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1381d4: 0x27a2001c  addiu       $v0, $sp, 0x1C
    ctx->pc = 0x1381d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1381d8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1381d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1381dc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1381dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1381e0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1381e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1381e4: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1381e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1381e8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1381e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1381ec: 0xc04e13c  jal         func_1384F0
    ctx->pc = 0x1381ECu;
    SET_GPR_U32(ctx, 31, 0x1381F4u);
    ctx->pc = 0x1384F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1384F0u, 0x1381ECu, 0x1381F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1381F4u;
label_1381f4:
    // 0x1381f4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1381f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1381f8: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1381f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1381fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1381fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138200: 0xc04e0fc  jal         func_1383F0
    ctx->pc = 0x138200u;
    SET_GPR_U32(ctx, 31, 0x138208u);
    ctx->pc = 0x1383F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1383F0u, 0x138200u, 0x138208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138208u;
label_138208:
    // 0x138208: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x138208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x13820c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x13820cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138210: 0xc04e0f4  jal         func_1383D0
    ctx->pc = 0x138210u;
    SET_GPR_U32(ctx, 31, 0x138218u);
    ctx->pc = 0x1383D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1383D0u, 0x138210u, 0x138218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138218u;
label_138218:
    // 0x138218: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x138218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13821c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x13821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x138220: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x138220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138228: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x138228u;
    SET_GPR_U32(ctx, 31, 0x138230u);
    ctx->pc = 0x138360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138360u, 0x138228u, 0x138230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138230u;
label_138230:
    // 0x138230: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x138230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138234: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x138234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138238: 0xc04e098  jal         func_138260
    ctx->pc = 0x138238u;
    SET_GPR_U32(ctx, 31, 0x138240u);
    ctx->pc = 0x138260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138260u, 0x138238u, 0x138240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138240u;
label_138240:
    // 0x138240: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x138240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138248: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x138248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13824c: 0x3e00008  jr          $ra
    ctx->pc = 0x13824Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13824Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138254u;
    // 0x138254: 0x0  nop
    ctx->pc = 0x138254u;
    // NOP
    // 0x138258: 0x0  nop
    ctx->pc = 0x138258u;
    // NOP
    // 0x13825c: 0x0  nop
    ctx->pc = 0x13825cu;
    // NOP
    ctx->pc = 0x138260u;
}
