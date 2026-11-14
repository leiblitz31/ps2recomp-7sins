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

// Function: sub_003BCDC8
// Address: 0x3bcdc8 - 0x3bce70
void sub_003BCDC8_0x3bcdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCDC8_0x3bcdc8");
#endif

    switch (ctx->pc) {
        case 0x3bcdc8u: goto label_3bcdc8;
        case 0x3bcdccu: goto label_3bcdcc;
        case 0x3bcdd0u: goto label_3bcdd0;
        case 0x3bcdd4u: goto label_3bcdd4;
        case 0x3bcdd8u: goto label_3bcdd8;
        case 0x3bcddcu: goto label_3bcddc;
        case 0x3bcde0u: goto label_3bcde0;
        case 0x3bcde4u: goto label_3bcde4;
        case 0x3bcde8u: goto label_3bcde8;
        case 0x3bcdecu: goto label_3bcdec;
        case 0x3bcdf0u: goto label_3bcdf0;
        case 0x3bcdf4u: goto label_3bcdf4;
        case 0x3bcdf8u: goto label_3bcdf8;
        case 0x3bcdfcu: goto label_3bcdfc;
        case 0x3bce00u: goto label_3bce00;
        case 0x3bce04u: goto label_3bce04;
        case 0x3bce08u: goto label_3bce08;
        case 0x3bce0cu: goto label_3bce0c;
        case 0x3bce10u: goto label_3bce10;
        case 0x3bce14u: goto label_3bce14;
        case 0x3bce18u: goto label_3bce18;
        case 0x3bce1cu: goto label_3bce1c;
        case 0x3bce20u: goto label_3bce20;
        case 0x3bce24u: goto label_3bce24;
        case 0x3bce28u: goto label_3bce28;
        case 0x3bce2cu: goto label_3bce2c;
        case 0x3bce30u: goto label_3bce30;
        case 0x3bce34u: goto label_3bce34;
        case 0x3bce38u: goto label_3bce38;
        case 0x3bce3cu: goto label_3bce3c;
        case 0x3bce40u: goto label_3bce40;
        case 0x3bce44u: goto label_3bce44;
        case 0x3bce48u: goto label_3bce48;
        case 0x3bce4cu: goto label_3bce4c;
        case 0x3bce50u: goto label_3bce50;
        case 0x3bce54u: goto label_3bce54;
        case 0x3bce58u: goto label_3bce58;
        case 0x3bce5cu: goto label_3bce5c;
        case 0x3bce60u: goto label_3bce60;
        case 0x3bce64u: goto label_3bce64;
        case 0x3bce68u: goto label_3bce68;
        case 0x3bce6cu: goto label_3bce6c;
        default: break;
    }

    ctx->pc = 0x3bcdc8u;

label_3bcdc8:
    // 0x3bcdc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bcdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3bcdcc:
    // 0x3bcdcc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3bcdccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3bcdd0:
    // 0x3bcdd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3bcdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3bcdd4:
    // 0x3bcdd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bcdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3bcdd8:
    // 0x3bcdd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bcdd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bcddc:
    // 0x3bcddc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bcddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bcde0:
    // 0x3bcde0: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3bcde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3bcde4:
    // 0x3bcde4: 0x2302018  mult        $a0, $s1, $s0
    ctx->pc = 0x3bcde4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3bcde8:
    // 0x3bcde8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3bcde8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3bcdec:
    // 0x3bcdec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bcdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bcdf0:
    // 0x3bcdf0: 0x34a5001b  ori         $a1, $a1, 0x1B
    ctx->pc = 0x3bcdf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27);
label_3bcdf4:
    // 0x3bcdf4: 0x40f809  jalr        $v0
label_3bcdf8:
    if (ctx->pc == 0x3BCDF8u) {
        ctx->pc = 0x3BCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCDF4u;
        // 0x3bcdf8: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCDFCu;
        goto label_3bcdfc;
    }
    ctx->pc = 0x3BCDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BCDFCu);
        ctx->pc = 0x3BCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCDF4u;
        // 0x3bcdf8: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCDF4u, 0x3BCDFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BCDFCu;
label_3bcdfc:
    // 0x3bcdfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3bcdfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bce00:
    // 0x3bce00: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3bce00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3bce04:
    // 0x3bce04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bce04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bce08:
    // 0x3bce08: 0xac71002c  sw          $s1, 0x2C($v1)
    ctx->pc = 0x3bce08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 17));
label_3bce0c:
    // 0x3bce0c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3bce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bce10:
    // 0x3bce10: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x3bce10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
label_3bce14:
    // 0x3bce14: 0xac700024  sw          $s0, 0x24($v1)
    ctx->pc = 0x3bce14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 16));
label_3bce18:
    // 0x3bce18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3bce18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bce1c:
    // 0x3bce1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bce1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bce20:
    // 0x3bce20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bce20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bce24:
    // 0x3bce24: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x3bce24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_3bce28:
    // 0x3bce28: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x3bce28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_3bce2c:
    // 0x3bce2c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3bce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3bce30:
    // 0x3bce30: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3bce30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_3bce34:
    // 0x3bce34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3bce34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3bce38:
    // 0x3bce38: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3bce38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_3bce3c:
    // 0x3bce3c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x3bce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_3bce40:
    // 0x3bce40: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x3bce40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_3bce44:
    // 0x3bce44: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x3bce44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_3bce48:
    // 0x3bce48: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x3bce48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_3bce4c:
    // 0x3bce4c: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x3bce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_3bce50:
    // 0x3bce50: 0xac630038  sw          $v1, 0x38($v1)
    ctx->pc = 0x3bce50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 3));
label_3bce54:
    // 0x3bce54: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x3bce54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
label_3bce58:
    // 0x3bce58: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x3bce58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
label_3bce5c:
    // 0x3bce5c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x3bce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_3bce60:
    // 0x3bce60: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x3bce60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
label_3bce64:
    // 0x3bce64: 0x3e00008  jr          $ra
label_3bce68:
    if (ctx->pc == 0x3BCE68u) {
        ctx->pc = 0x3BCE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCE64u;
        // 0x3bce68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCE6Cu;
        goto label_3bce6c;
    }
    ctx->pc = 0x3BCE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCE64u;
        // 0x3bce68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCE6Cu;
label_3bce6c:
    // 0x3bce6c: 0x0  nop
    ctx->pc = 0x3bce6cu;
    // NOP
    ctx->pc = 0x3bce70u;
}
