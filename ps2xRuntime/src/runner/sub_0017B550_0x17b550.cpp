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

// Function: sub_0017B550
// Address: 0x17b550 - 0x17b640
void sub_0017B550_0x17b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B550_0x17b550");
#endif

    switch (ctx->pc) {
        case 0x17b56cu: goto label_17b56c;
        case 0x17b58cu: goto label_17b58c;
        case 0x17b59cu: goto label_17b59c;
        case 0x17b5acu: goto label_17b5ac;
        case 0x17b5c8u: goto label_17b5c8;
        case 0x17b604u: goto label_17b604;
        default: break;
    }

    ctx->pc = 0x17b550u;

    // 0x17b550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b558: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17b558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17b55c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b560: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17b560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b564: 0xc0557e8  jal         func_155FA0
    ctx->pc = 0x17B564u;
    SET_GPR_U32(ctx, 31, 0x17B56Cu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x17B564u, 0x17B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B56Cu;
label_17b56c:
    // 0x17b56c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x17b570: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x17b570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x17b574: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b578: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17b578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17b57c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b580: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17b580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17b584: 0xc056254  jal         func_158950
    ctx->pc = 0x17B584u;
    SET_GPR_U32(ctx, 31, 0x17B58Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x17B584u, 0x17B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B58Cu;
label_17b58c:
    // 0x17b58c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b590: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17b590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17b594: 0xc056254  jal         func_158950
    ctx->pc = 0x17B594u;
    SET_GPR_U32(ctx, 31, 0x17B59Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x17B594u, 0x17B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B59Cu;
label_17b59c:
    // 0x17b59c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5a0: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x17b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x17b5a4: 0xc05ef10  jal         func_17BC40
    ctx->pc = 0x17B5A4u;
    SET_GPR_U32(ctx, 31, 0x17B5ACu);
    ctx->pc = 0x17BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC40u, 0x17B5A4u, 0x17B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B5ACu;
label_17b5ac:
    // 0x17b5ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b5b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5b4: 0xa0430074  sb          $v1, 0x74($v0)
    ctx->pc = 0x17b5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 116), (uint8_t)GPR_U32(ctx, 3));
    // 0x17b5b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5bc: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x17b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x17b5c0: 0xc05eeb8  jal         func_17BAE0
    ctx->pc = 0x17B5C0u;
    SET_GPR_U32(ctx, 31, 0x17B5C8u);
    ctx->pc = 0x17BAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BAE0u, 0x17B5C0u, 0x17B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B5C8u;
label_17b5c8:
    // 0x17b5c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b5cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5d0: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x17b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    // 0x17b5d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5d8: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x17b5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
    // 0x17b5dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5e0: 0xac400098  sw          $zero, 0x98($v0)
    ctx->pc = 0x17b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 0));
    // 0x17b5e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5e8: 0xa04000ac  sb          $zero, 0xAC($v0)
    ctx->pc = 0x17b5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 172), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b5ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5f0: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x17b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x17b5f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5f8: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x17b5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x17b5fc: 0xc056f90  jal         func_15BE40
    ctx->pc = 0x17B5FCu;
    SET_GPR_U32(ctx, 31, 0x17B604u);
    ctx->pc = 0x15BE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BE40u, 0x17B5FCu, 0x17B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B604u;
label_17b604:
    // 0x17b604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b60c: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x17b60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x17b610: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b614: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x17b614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x17b618: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b61c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b620: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x17b620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x17b624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b628: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x17b628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x17b62c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b634: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17b634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17b638: 0x3e00008  jr          $ra
    ctx->pc = 0x17B638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B640u;
}
