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

// Function: sub_00356430
// Address: 0x356430 - 0x3564d8
void sub_00356430_0x356430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356430_0x356430");
#endif

    switch (ctx->pc) {
        case 0x3564b8u: goto label_3564b8;
        default: break;
    }

    ctx->pc = 0x356430u;

    // 0x356430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356434: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x356434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x356438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35643c: 0x240b0024  addiu       $t3, $zero, 0x24
    ctx->pc = 0x35643cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x356440: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x356440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x356444: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x356444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x356448: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x356448u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35644c: 0x244264d8  addiu       $v0, $v0, 0x64D8
    ctx->pc = 0x35644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25816));
    // 0x356450: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x356450u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x356454: 0x3c07efff  lui         $a3, 0xEFFF
    ctx->pc = 0x356454u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61439 << 16));
    // 0x356458: 0x8d2c000c  lw          $t4, 0xC($t1)
    ctx->pc = 0x356458u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x35645c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x35645cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x356460: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x356460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x356464: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x356464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x356468: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x356468u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35646c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x35646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356470: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x356470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x356474: 0x8e08009c  lw          $t0, 0x9C($s0)
    ctx->pc = 0x356474u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x356478: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x356478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x35647c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x35647cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x356480: 0x8d0300e4  lw          $v1, 0xE4($t0)
    ctx->pc = 0x356480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 228)));
    // 0x356484: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x356484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x356488: 0x1031021  addu        $v0, $t0, $v1
    ctx->pc = 0x356488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x35648c: 0xac4c0140  sw          $t4, 0x140($v0)
    ctx->pc = 0x35648cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 12));
    // 0x356490: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x356490u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356494: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x356494u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356498: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x356498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35649c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x35649cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3564a0: 0xad420150  sw          $v0, 0x150($t2)
    ctx->pc = 0x3564a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 336), GPR_U32(ctx, 2));
    // 0x3564a4: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x3564a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3564a8: 0xad63014c  sw          $v1, 0x14C($t3)
    ctx->pc = 0x3564a8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 332), GPR_U32(ctx, 3));
    // 0x3564ac: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x3564acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3564b0: 0xc0dbd36  jal         func_36F4D8
    ctx->pc = 0x3564B0u;
    SET_GPR_U32(ctx, 31, 0x3564B8u);
    ctx->pc = 0x3564B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3564B0u;
    // 0x3564b4: 0xad02015c  sw          $v0, 0x15C($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 348), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F4D8u, 0x3564B0u, 0x3564B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564B8u;
label_3564b8:
    // 0x3564b8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x3564b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x3564bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3564bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3564c0: 0x24634c48  addiu       $v1, $v1, 0x4C48
    ctx->pc = 0x3564c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19528));
    // 0x3564c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3564c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3564c8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3564c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x3564cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3564ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3564d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3564D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3564D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3564D0u;
        // 0x3564d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3564D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3564D8u;
}
