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

// Function: sub_00357840
// Address: 0x357840 - 0x3578e0
void sub_00357840_0x357840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357840_0x357840");
#endif

    switch (ctx->pc) {
        case 0x3578c0u: goto label_3578c0;
        default: break;
    }

    ctx->pc = 0x357840u;

    // 0x357840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357844: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x357844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x357848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35784c: 0x240c0024  addiu       $t4, $zero, 0x24
    ctx->pc = 0x35784cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x357850: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x357850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x357854: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x357854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x357858: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x357858u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35785c: 0x24426990  addiu       $v0, $v0, 0x6990
    ctx->pc = 0x35785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27024));
    // 0x357860: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x357860u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x357864: 0x3c07efff  lui         $a3, 0xEFFF
    ctx->pc = 0x357864u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61439 << 16));
    // 0x357868: 0x8d4b0004  lw          $t3, 0x4($t2)
    ctx->pc = 0x357868u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x35786c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x35786cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x357870: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x357870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x357874: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x357874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x357878: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x357878u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35787c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x35787cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357880: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x357880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x357884: 0x8e08009c  lw          $t0, 0x9C($s0)
    ctx->pc = 0x357884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x357888: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x357888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x35788c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x35788cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x357890: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x357890u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x357894: 0x8d0300e4  lw          $v1, 0xE4($t0)
    ctx->pc = 0x357894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 228)));
    // 0x357898: 0x6c1818  mult        $v1, $v1, $t4
    ctx->pc = 0x357898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35789c: 0x1031021  addu        $v0, $t0, $v1
    ctx->pc = 0x35789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3578a0: 0xac4b0140  sw          $t3, 0x140($v0)
    ctx->pc = 0x3578a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 11));
    // 0x3578a4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3578a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3578a8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3578a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3578ac: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3578acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3578b0: 0xad220154  sw          $v0, 0x154($t1)
    ctx->pc = 0x3578b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 340), GPR_U32(ctx, 2));
    // 0x3578b4: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x3578b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3578b8: 0xc0dbd36  jal         func_36F4D8
    ctx->pc = 0x3578B8u;
    SET_GPR_U32(ctx, 31, 0x3578C0u);
    ctx->pc = 0x3578BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3578B8u;
    // 0x3578bc: 0xad030160  sw          $v1, 0x160($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 352), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F4D8u, 0x3578B8u, 0x3578C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3578C0u;
label_3578c0:
    // 0x3578c0: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x3578c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x3578c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3578c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3578c8: 0x246365d8  addiu       $v1, $v1, 0x65D8
    ctx->pc = 0x3578c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26072));
    // 0x3578cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3578ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3578d0: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3578d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x3578d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3578d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3578d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3578D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3578DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578D8u;
        // 0x3578dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3578D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3578E0u;
}
