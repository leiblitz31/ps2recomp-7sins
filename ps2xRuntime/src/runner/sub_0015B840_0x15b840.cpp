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

// Function: sub_0015B840
// Address: 0x15b840 - 0x15b950
void sub_0015B840_0x15b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B840_0x15b840");
#endif

    switch (ctx->pc) {
        case 0x15b85cu: goto label_15b85c;
        case 0x15b87cu: goto label_15b87c;
        case 0x15b88cu: goto label_15b88c;
        case 0x15b89cu: goto label_15b89c;
        case 0x15b8acu: goto label_15b8ac;
        case 0x15b8c4u: goto label_15b8c4;
        case 0x15b904u: goto label_15b904;
        case 0x15b930u: goto label_15b930;
        default: break;
    }

    ctx->pc = 0x15b840u;

    // 0x15b840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15b844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15b848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15b84c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b850: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x15b850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15b854: 0xc0557e8  jal         func_155FA0
    ctx->pc = 0x15B854u;
    SET_GPR_U32(ctx, 31, 0x15B85Cu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x15B854u, 0x15B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B85Cu;
label_15b85c:
    // 0x15b85c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x15b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x15b860: 0x24633a70  addiu       $v1, $v1, 0x3A70
    ctx->pc = 0x15b860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14960));
    // 0x15b864: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b868: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15b868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15b86c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b870: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x15b870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x15b874: 0xc056254  jal         func_158950
    ctx->pc = 0x15B874u;
    SET_GPR_U32(ctx, 31, 0x15B87Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x15B874u, 0x15B87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B87Cu;
label_15b87c:
    // 0x15b87c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b880: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15b880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x15b884: 0xc056254  jal         func_158950
    ctx->pc = 0x15B884u;
    SET_GPR_U32(ctx, 31, 0x15B88Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x15B884u, 0x15B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B88Cu;
label_15b88c:
    // 0x15b88c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b890: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15b890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15b894: 0xc056254  jal         func_158950
    ctx->pc = 0x15B894u;
    SET_GPR_U32(ctx, 31, 0x15B89Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x15B894u, 0x15B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B89Cu;
label_15b89c:
    // 0x15b89c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b8a0: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15b8a4: 0xc056fe8  jal         func_15BFA0
    ctx->pc = 0x15B8A4u;
    SET_GPR_U32(ctx, 31, 0x15B8ACu);
    ctx->pc = 0x15BFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFA0u, 0x15B8A4u, 0x15B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B8ACu;
label_15b8ac:
    // 0x15b8ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b8b0: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x15b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x15b8b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b8b8: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x15b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x15b8bc: 0xc0452e0  jal         func_114B80
    ctx->pc = 0x15B8BCu;
    SET_GPR_U32(ctx, 31, 0x15B8C4u);
    ctx->pc = 0x114B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B80u, 0x15B8BCu, 0x15B8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B8C4u;
label_15b8c4:
    // 0x15b8c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b8c8: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x15b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
    // 0x15b8cc: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x15b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x15b8d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b8d4: 0xac430094  sw          $v1, 0x94($v0)
    ctx->pc = 0x15b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 3));
    // 0x15b8d8: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x15b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x15b8dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b8e0: 0xac430098  sw          $v1, 0x98($v0)
    ctx->pc = 0x15b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 3));
    // 0x15b8e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b8e8: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x15b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x15b8ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b8f0: 0xa04000a0  sb          $zero, 0xA0($v0)
    ctx->pc = 0x15b8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b8f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b8f8: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x15b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x15b8fc: 0xc056254  jal         func_158950
    ctx->pc = 0x15B8FCu;
    SET_GPR_U32(ctx, 31, 0x15B904u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x15B8FCu, 0x15B904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B904u;
label_15b904:
    // 0x15b904: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15b904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b908: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b90c: 0xac4300c4  sw          $v1, 0xC4($v0)
    ctx->pc = 0x15b90cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 3));
    // 0x15b910: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b914: 0xac4000c8  sw          $zero, 0xC8($v0)
    ctx->pc = 0x15b914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 0));
    // 0x15b918: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b91c: 0xa04000cc  sb          $zero, 0xCC($v0)
    ctx->pc = 0x15b91cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 204), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b920: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b924: 0x244400ec  addiu       $a0, $v0, 0xEC
    ctx->pc = 0x15b924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 236));
    // 0x15b928: 0xc056f90  jal         func_15BE40
    ctx->pc = 0x15B928u;
    SET_GPR_U32(ctx, 31, 0x15B930u);
    ctx->pc = 0x15BE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BE40u, 0x15B928u, 0x15B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B930u;
label_15b930:
    // 0x15b930: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b934: 0xaf82baac  sw          $v0, -0x4554($gp)
    ctx->pc = 0x15b934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949548), GPR_U32(ctx, 2));
    // 0x15b938: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b93c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b940: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15b940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15b944: 0x3e00008  jr          $ra
    ctx->pc = 0x15B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B94Cu;
    // 0x15b94c: 0x0  nop
    ctx->pc = 0x15b94cu;
    // NOP
    ctx->pc = 0x15b950u;
}
