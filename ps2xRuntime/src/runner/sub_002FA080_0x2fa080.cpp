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

// Function: sub_002FA080
// Address: 0x2fa080 - 0x2fa600
void sub_002FA080_0x2fa080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA080_0x2fa080");
#endif

    ctx->pc = 0x2fa080u;

    // 0x2fa080: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x2fa080u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2fa084: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x2fa084u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2fa088: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x2fa088u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fa08c: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2fa08cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2fa090: 0x4583c  dsll32      $t3, $a0, 0
    ctx->pc = 0x2fa090u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fa094: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x2fa094u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x2fa098: 0x150000e1  bnez        $t0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2FA098u;
    {
        const bool branch_taken_0x2fa098 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA098u;
        // 0x2fa09c: 0x148102b  sltu        $v0, $t2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa098) {
            ctx->pc = 0x2FA420u;
            goto label_2fa420;
        }
    }
    ctx->pc = 0x2FA0A0u;
    // 0x2fa0a0: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x2fa0a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa0a4: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2FA0A4u;
    {
        const bool branch_taken_0x2fa0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0A4u;
        // 0x2fa0a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0a4) {
            ctx->pc = 0x2FA1E0u;
            goto label_2fa1e0;
        }
    }
    ctx->pc = 0x2FA0ACu;
    // 0x2fa0ac: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2fa0acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa0b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA0B0u;
    {
        const bool branch_taken_0x2fa0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0B0u;
        // 0x2fa0b4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0b0) {
            ctx->pc = 0x2FA0C8u;
            goto label_2fa0c8;
        }
    }
    ctx->pc = 0x2FA0B8u;
    // 0x2fa0b8: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x2fa0b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2fa0bc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2fa0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fa0c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA0C0u;
    {
        const bool branch_taken_0x2fa0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0C0u;
        // 0x2fa0c4: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0c0) {
            ctx->pc = 0x2FA0DCu;
            goto label_2fa0dc;
        }
    }
    ctx->pc = 0x2FA0C8u;
label_2fa0c8:
    // 0x2fa0c8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2fa0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2fa0cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa0d0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2fa0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fa0d4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2fa0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa0d8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2fa0d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2fa0dc:
    // 0x2fa0dc: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x2fa0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2fa0e0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2fa0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2fa0e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2fa0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2fa0e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fa0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fa0ec: 0x9042a160  lbu         $v0, -0x5EA0($v0)
    ctx->pc = 0x2fa0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943072)));
    // 0x2fa0f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fa0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fa0f4: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x2fa0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fa0f8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA0F8u;
    {
        const bool branch_taken_0x2fa0f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0F8u;
        // 0x2fa0fc: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0f8) {
            ctx->pc = 0x2FA114u;
            goto label_2fa114;
        }
    }
    ctx->pc = 0x2FA100u;
    // 0x2fa100: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x2fa100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x2fa104: 0x4b1006  srlv        $v0, $t3, $v0
    ctx->pc = 0x2fa104u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
    // 0x2fa108: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x2fa108u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x2fa10c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2fa10cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2fa110: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x2fa110u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
label_2fa114:
    // 0x2fa114: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x2fa114u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2fa118: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x2fa118u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2fa11c: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x2fa11cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x2fa120: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x2fa120u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x2fa124: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA124u;
    {
        const bool branch_taken_0x2fa124 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa124) {
            ctx->pc = 0x2FA128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA124u;
            // 0x2fa128: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA12Cu;
            goto label_2fa12c;
        }
    }
    ctx->pc = 0x2FA12Cu;
label_2fa12c:
    // 0x2fa12c: 0x1012  mflo        $v0
    ctx->pc = 0x2fa12cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa130: 0x1810  mfhi        $v1
    ctx->pc = 0x2fa130u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fa134: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2fa134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa138: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2fa138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fa13c: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x2fa13cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2fa140: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2fa140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fa144: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2fa144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2fa148: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2FA148u;
    {
        const bool branch_taken_0x2fa148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa148) {
            ctx->pc = 0x2FA14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA148u;
            // 0x2fa14c: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA17Cu;
            goto label_2fa17c;
        }
    }
    ctx->pc = 0x2FA150u;
    // 0x2fa150: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2fa150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2fa154: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2fa154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa158: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA158u;
    {
        const bool branch_taken_0x2fa158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA158u;
        // 0x2fa15c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa158) {
            ctx->pc = 0x2FA178u;
            goto label_2fa178;
        }
    }
    ctx->pc = 0x2FA160u;
    // 0x2fa160: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2fa160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2fa164: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA164u;
    {
        const bool branch_taken_0x2fa164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa164) {
            ctx->pc = 0x2FA168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA164u;
            // 0x2fa168: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA17Cu;
            goto label_2fa17c;
        }
    }
    ctx->pc = 0x2FA16Cu;
    // 0x2fa16c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2fa16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2fa170: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2fa170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2fa174: 0x0  nop
    ctx->pc = 0x2fa174u;
    // NOP
label_2fa178:
    // 0x2fa178: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2fa178u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2fa17c:
    // 0x2fa17c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA17Cu;
    {
        const bool branch_taken_0x2fa17c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa17c) {
            ctx->pc = 0x2FA180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA17Cu;
            // 0x2fa180: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA184u;
            goto label_2fa184;
        }
    }
    ctx->pc = 0x2FA184u;
label_2fa184:
    // 0x2fa184: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x2fa184u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2fa188: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x2fa188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2fa18c: 0x1012  mflo        $v0
    ctx->pc = 0x2fa18cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa190: 0x1810  mfhi        $v1
    ctx->pc = 0x2fa190u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fa194: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2fa194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa198: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2fa198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fa19c: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x2fa19cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2fa1a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2fa1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fa1a4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2fa1a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2fa1a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FA1A8u;
    {
        const bool branch_taken_0x2fa1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1A8u;
        // 0x2fa1ac: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1a8) {
            ctx->pc = 0x2FA1D4u;
            goto label_2fa1d4;
        }
    }
    ctx->pc = 0x2FA1B0u;
    // 0x2fa1b0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2fa1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2fa1b4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2fa1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa1b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA1B8u;
    {
        const bool branch_taken_0x2fa1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1B8u;
        // 0x2fa1bc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1b8) {
            ctx->pc = 0x2FA1D0u;
            goto label_2fa1d0;
        }
    }
    ctx->pc = 0x2FA1C0u;
    // 0x2fa1c0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2fa1c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2fa1c4: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x2fa1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2fa1c8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2fa1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2fa1cc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2fa1ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_2fa1d0:
    // 0x2fa1d0: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x2fa1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2fa1d4:
    // 0x2fa1d4: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x2FA1D4u;
    {
        const bool branch_taken_0x2fa1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1D4u;
        // 0x2fa1d8: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1d4) {
            ctx->pc = 0x2FA5C8u;
            goto label_2fa5c8;
        }
    }
    ctx->pc = 0x2FA1DCu;
    // 0x2fa1dc: 0x0  nop
    ctx->pc = 0x2fa1dcu;
    // NOP
label_2fa1e0:
    // 0x2fa1e0: 0x15200009  bnez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA1E0u;
    {
        const bool branch_taken_0x2fa1e0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1E0u;
        // 0x2fa1e4: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1e0) {
            ctx->pc = 0x2FA208u;
            goto label_2fa208;
        }
    }
    ctx->pc = 0x2FA1E8u;
    // 0x2fa1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa1ec: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA1ECu;
    {
        const bool branch_taken_0x2fa1ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa1ec) {
            ctx->pc = 0x2FA1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA1ECu;
            // 0x2fa1f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA1F4u;
            goto label_2fa1f4;
        }
    }
    ctx->pc = 0x2FA1F4u;
label_2fa1f4:
    // 0x2fa1f4: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x2fa1f4u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2fa1f8: 0x1012  mflo        $v0
    ctx->pc = 0x2fa1f8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa1fc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2fa1fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa200: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa204: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2fa204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_2fa208:
    // 0x2fa208: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA208u;
    {
        const bool branch_taken_0x2fa208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA208u;
        // 0x2fa20c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa208) {
            ctx->pc = 0x2FA220u;
            goto label_2fa220;
        }
    }
    ctx->pc = 0x2FA210u;
    // 0x2fa210: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x2fa210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2fa214: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2fa214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fa218: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA218u;
    {
        const bool branch_taken_0x2fa218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA218u;
        // 0x2fa21c: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa218) {
            ctx->pc = 0x2FA234u;
            goto label_2fa234;
        }
    }
    ctx->pc = 0x2FA220u;
label_2fa220:
    // 0x2fa220: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2fa220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2fa224: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa228: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2fa228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fa22c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2fa22cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa230: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2fa230u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2fa234:
    // 0x2fa234: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x2fa234u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2fa238: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2fa238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2fa23c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2fa23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2fa240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fa240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fa244: 0x9042a160  lbu         $v0, -0x5EA0($v0)
    ctx->pc = 0x2fa244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943072)));
    // 0x2fa248: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fa248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fa24c: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x2fa24cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fa250: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA250u;
    {
        const bool branch_taken_0x2fa250 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA250u;
        // 0x2fa254: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa250) {
            ctx->pc = 0x2FA270u;
            goto label_2fa270;
        }
    }
    ctx->pc = 0x2FA258u;
    // 0x2fa258: 0x1495023  subu        $t2, $t2, $t1
    ctx->pc = 0x2fa258u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2fa25c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2fa25cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa260: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x2fa260u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2fa264: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2FA264u;
    {
        const bool branch_taken_0x2fa264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA264u;
        // 0x2fa268: 0x312cffff  andi        $t4, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa264) {
            ctx->pc = 0x2FA358u;
            goto label_2fa358;
        }
    }
    ctx->pc = 0x2FA26Cu;
    // 0x2fa26c: 0x0  nop
    ctx->pc = 0x2fa26cu;
    // NOP
label_2fa270:
    // 0x2fa270: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x2fa270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x2fa274: 0xeb1006  srlv        $v0, $t3, $a3
    ctx->pc = 0x2fa274u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x2fa278: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x2fa278u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x2fa27c: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x2fa27cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x2fa280: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2fa280u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2fa284: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x2fa284u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x2fa288: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x2fa288u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2fa28c: 0x88001b  divu        $zero, $a0, $t0
    ctx->pc = 0x2fa28cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2fa290: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2fa290u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2fa294: 0x312cffff  andi        $t4, $t1, 0xFFFF
    ctx->pc = 0x2fa294u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2fa298: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2fa298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa29c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA29Cu;
    {
        const bool branch_taken_0x2fa29c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa29c) {
            ctx->pc = 0x2FA2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA29Cu;
            // 0x2fa2a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA2A4u;
            goto label_2fa2a4;
        }
    }
    ctx->pc = 0x2FA2A4u;
label_2fa2a4:
    // 0x2fa2a4: 0x1012  mflo        $v0
    ctx->pc = 0x2fa2a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa2a8: 0x1810  mfhi        $v1
    ctx->pc = 0x2fa2a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fa2ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2fa2acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa2b0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2fa2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fa2b4: 0xec2818  mult        $a1, $a3, $t4
    ctx->pc = 0x2fa2b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2fa2b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2fa2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fa2bc: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2fa2bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2fa2c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FA2C0u;
    {
        const bool branch_taken_0x2fa2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2C0u;
        // 0x2fa2c4: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2c0) {
            ctx->pc = 0x2FA2F0u;
            goto label_2fa2f0;
        }
    }
    ctx->pc = 0x2FA2C8u;
    // 0x2fa2c8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2fa2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2fa2cc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2fa2ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa2d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA2D0u;
    {
        const bool branch_taken_0x2fa2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2D0u;
        // 0x2fa2d4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2d0) {
            ctx->pc = 0x2FA2F0u;
            goto label_2fa2f0;
        }
    }
    ctx->pc = 0x2FA2D8u;
    // 0x2fa2d8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2fa2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2fa2dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA2DCu;
    {
        const bool branch_taken_0x2fa2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa2dc) {
            ctx->pc = 0x2FA2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA2DCu;
            // 0x2fa2e0: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA2F4u;
            goto label_2fa2f4;
        }
    }
    ctx->pc = 0x2FA2E4u;
    // 0x2fa2e4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2fa2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2fa2e8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2fa2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2fa2ec: 0x0  nop
    ctx->pc = 0x2fa2ecu;
    // NOP
label_2fa2f0:
    // 0x2fa2f0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2fa2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2fa2f4:
    // 0x2fa2f4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA2F4u;
    {
        const bool branch_taken_0x2fa2f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa2f4) {
            ctx->pc = 0x2FA2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA2F4u;
            // 0x2fa2f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA2FCu;
            goto label_2fa2fc;
        }
    }
    ctx->pc = 0x2FA2FCu;
label_2fa2fc:
    // 0x2fa2fc: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x2fa2fcu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2fa300: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2fa300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2fa304: 0x1012  mflo        $v0
    ctx->pc = 0x2fa304u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa308: 0x1810  mfhi        $v1
    ctx->pc = 0x2fa308u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fa30c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2fa30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa310: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2fa310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fa314: 0xcd2818  mult        $a1, $a2, $t5
    ctx->pc = 0x2fa314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2fa318: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2fa318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fa31c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2fa31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2fa320: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FA320u;
    {
        const bool branch_taken_0x2fa320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA320u;
        // 0x2fa324: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa320) {
            ctx->pc = 0x2FA350u;
            goto label_2fa350;
        }
    }
    ctx->pc = 0x2FA328u;
    // 0x2fa328: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2fa328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2fa32c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2fa32cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa330: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA330u;
    {
        const bool branch_taken_0x2fa330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA330u;
        // 0x2fa334: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa330) {
            ctx->pc = 0x2FA34Cu;
            goto label_2fa34c;
        }
    }
    ctx->pc = 0x2FA338u;
    // 0x2fa338: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2fa338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2fa33c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA33Cu;
    {
        const bool branch_taken_0x2fa33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA33Cu;
        // 0x2fa340: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa33c) {
            ctx->pc = 0x2FA350u;
            goto label_2fa350;
        }
    }
    ctx->pc = 0x2FA344u;
    // 0x2fa344: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2fa344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2fa348: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2fa348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2fa34c:
    // 0x2fa34c: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x2fa34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2fa350:
    // 0x2fa350: 0x655023  subu        $t2, $v1, $a1
    ctx->pc = 0x2fa350u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fa354: 0x466825  or          $t5, $v0, $a2
    ctx->pc = 0x2fa354u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2fa358:
    // 0x2fa358: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2fa358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa35c: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x2fa35cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa360: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x2fa360u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x2fa364: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x2fa364u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x2fa368: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA368u;
    {
        const bool branch_taken_0x2fa368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa368) {
            ctx->pc = 0x2FA36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA368u;
            // 0x2fa36c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA370u;
            goto label_2fa370;
        }
    }
    ctx->pc = 0x2FA370u;
label_2fa370:
    // 0x2fa370: 0x1012  mflo        $v0
    ctx->pc = 0x2fa370u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa374: 0x1810  mfhi        $v1
    ctx->pc = 0x2fa374u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fa378: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2fa378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa37c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2fa37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fa380: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x2fa380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2fa384: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2fa384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fa388: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2fa388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2fa38c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FA38Cu;
    {
        const bool branch_taken_0x2fa38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa38c) {
            ctx->pc = 0x2FA390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA38Cu;
            // 0x2fa390: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA3BCu;
            goto label_2fa3bc;
        }
    }
    ctx->pc = 0x2FA394u;
    // 0x2fa394: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2fa394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2fa398: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2fa398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa39c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA39Cu;
    {
        const bool branch_taken_0x2fa39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA39Cu;
        // 0x2fa3a0: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa39c) {
            ctx->pc = 0x2FA3B8u;
            goto label_2fa3b8;
        }
    }
    ctx->pc = 0x2FA3A4u;
    // 0x2fa3a4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2fa3a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2fa3a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA3A8u;
    {
        const bool branch_taken_0x2fa3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa3a8) {
            ctx->pc = 0x2FA3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA3A8u;
            // 0x2fa3ac: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA3BCu;
            goto label_2fa3bc;
        }
    }
    ctx->pc = 0x2FA3B0u;
    // 0x2fa3b0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2fa3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2fa3b4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2fa3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2fa3b8:
    // 0x2fa3b8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2fa3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2fa3bc:
    // 0x2fa3bc: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA3BCu;
    {
        const bool branch_taken_0x2fa3bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa3bc) {
            ctx->pc = 0x2FA3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA3BCu;
            // 0x2fa3c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA3C4u;
            goto label_2fa3c4;
        }
    }
    ctx->pc = 0x2FA3C4u;
label_2fa3c4:
    // 0x2fa3c4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x2fa3c4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2fa3c8: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x2fa3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2fa3cc: 0x1012  mflo        $v0
    ctx->pc = 0x2fa3ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa3d0: 0x1810  mfhi        $v1
    ctx->pc = 0x2fa3d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fa3d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2fa3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa3d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2fa3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fa3dc: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x2fa3dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2fa3e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2fa3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fa3e4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2fa3e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2fa3e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FA3E8u;
    {
        const bool branch_taken_0x2fa3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA3E8u;
        // 0x2fa3ec: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa3e8) {
            ctx->pc = 0x2FA414u;
            goto label_2fa414;
        }
    }
    ctx->pc = 0x2FA3F0u;
    // 0x2fa3f0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2fa3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2fa3f4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2fa3f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa3f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA3F8u;
    {
        const bool branch_taken_0x2fa3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA3F8u;
        // 0x2fa3fc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa3f8) {
            ctx->pc = 0x2FA410u;
            goto label_2fa410;
        }
    }
    ctx->pc = 0x2FA400u;
    // 0x2fa400: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2fa400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2fa404: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x2fa404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2fa408: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2fa408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2fa40c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2fa40cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_2fa410:
    // 0x2fa410: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x2fa410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2fa414:
    // 0x2fa414: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2FA414u;
    {
        const bool branch_taken_0x2fa414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA414u;
        // 0x2fa418: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa414) {
            ctx->pc = 0x2FA5CCu;
            goto label_2fa5cc;
        }
    }
    ctx->pc = 0x2FA41Cu;
    // 0x2fa41c: 0x0  nop
    ctx->pc = 0x2fa41cu;
    // NOP
label_2fa420:
    // 0x2fa420: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA420u;
    {
        const bool branch_taken_0x2fa420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa420) {
            ctx->pc = 0x2FA424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA420u;
            // 0x2fa424: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA430u;
            goto label_2fa430;
        }
    }
    ctx->pc = 0x2FA428u;
    // 0x2fa428: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2FA428u;
    {
        const bool branch_taken_0x2fa428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA428u;
        // 0x2fa42c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa428) {
            ctx->pc = 0x2FA5C8u;
            goto label_2fa5c8;
        }
    }
    ctx->pc = 0x2FA430u;
label_2fa430:
    // 0x2fa430: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2fa430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fa434: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA434u;
    {
        const bool branch_taken_0x2fa434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA434u;
        // 0x2fa438: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa434) {
            ctx->pc = 0x2FA450u;
            goto label_2fa450;
        }
    }
    ctx->pc = 0x2FA43Cu;
    // 0x2fa43c: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2fa43cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2fa440: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2fa440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fa444: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA444u;
    {
        const bool branch_taken_0x2fa444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA444u;
        // 0x2fa448: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa444) {
            ctx->pc = 0x2FA464u;
            goto label_2fa464;
        }
    }
    ctx->pc = 0x2FA44Cu;
    // 0x2fa44c: 0x0  nop
    ctx->pc = 0x2fa44cu;
    // NOP
label_2fa450:
    // 0x2fa450: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2fa450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2fa454: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa458: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2fa458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fa45c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2fa45cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fa460: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2fa460u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2fa464:
    // 0x2fa464: 0x881806  srlv        $v1, $t0, $a0
    ctx->pc = 0x2fa464u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2fa468: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2fa468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2fa46c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2fa46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2fa470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fa470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fa474: 0x9042a160  lbu         $v0, -0x5EA0($v0)
    ctx->pc = 0x2fa474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943072)));
    // 0x2fa478: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fa478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fa47c: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x2fa47cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fa480: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA480u;
    {
        const bool branch_taken_0x2fa480 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA480u;
        // 0x2fa484: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa480) {
            ctx->pc = 0x2FA4A8u;
            goto label_2fa4a8;
        }
    }
    ctx->pc = 0x2FA488u;
    // 0x2fa488: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x2fa488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2fa48c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2FA48Cu;
    {
        const bool branch_taken_0x2fa48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA48Cu;
        // 0x2fa490: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa48c) {
            ctx->pc = 0x2FA5C8u;
            goto label_2fa5c8;
        }
    }
    ctx->pc = 0x2FA494u;
    // 0x2fa494: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x2fa494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa498: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2FA498u;
    {
        const bool branch_taken_0x2fa498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA498u;
        // 0x2fa49c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa498) {
            ctx->pc = 0x2FA5C8u;
            goto label_2fa5c8;
        }
    }
    ctx->pc = 0x2FA4A0u;
    // 0x2fa4a0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2FA4A0u;
    {
        const bool branch_taken_0x2fa4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA4A0u;
        // 0x2fa4a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa4a0) {
            ctx->pc = 0x2FA5C8u;
            goto label_2fa5c8;
        }
    }
    ctx->pc = 0x2FA4A8u;
label_2fa4a8:
    // 0x2fa4a8: 0xc82004  sllv        $a0, $t0, $a2
    ctx->pc = 0x2fa4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2fa4ac: 0xeb2806  srlv        $a1, $t3, $a3
    ctx->pc = 0x2fa4acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x2fa4b0: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x2fa4b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x2fa4b4: 0xe91006  srlv        $v0, $t1, $a3
    ctx->pc = 0x2fa4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x2fa4b8: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x2fa4b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x2fa4bc: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x2fa4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x2fa4c0: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x2fa4c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2fa4c4: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x2fa4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x2fa4c8: 0x655025  or          $t2, $v1, $a1
    ctx->pc = 0x2fa4c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2fa4cc: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x2fa4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2fa4d0: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x2fa4d0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2fa4d4: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2fa4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2fa4d8: 0x310cffff  andi        $t4, $t0, 0xFFFF
    ctx->pc = 0x2fa4d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2fa4dc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA4DCu;
    {
        const bool branch_taken_0x2fa4dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa4dc) {
            ctx->pc = 0x2FA4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA4DCu;
            // 0x2fa4e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA4E4u;
            goto label_2fa4e4;
        }
    }
    ctx->pc = 0x2FA4E4u;
label_2fa4e4:
    // 0x2fa4e4: 0x1012  mflo        $v0
    ctx->pc = 0x2fa4e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa4e8: 0x1810  mfhi        $v1
    ctx->pc = 0x2fa4e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fa4ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2fa4ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa4f0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2fa4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fa4f4: 0xec3018  mult        $a2, $a3, $t4
    ctx->pc = 0x2fa4f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2fa4f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2fa4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fa4fc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2fa4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2fa500: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2FA500u;
    {
        const bool branch_taken_0x2fa500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa500) {
            ctx->pc = 0x2FA504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA500u;
            // 0x2fa504: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA534u;
            goto label_2fa534;
        }
    }
    ctx->pc = 0x2FA508u;
    // 0x2fa508: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2fa508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2fa50c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2fa50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fa510: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA510u;
    {
        const bool branch_taken_0x2fa510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA510u;
        // 0x2fa514: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa510) {
            ctx->pc = 0x2FA530u;
            goto label_2fa530;
        }
    }
    ctx->pc = 0x2FA518u;
    // 0x2fa518: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2fa518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2fa51c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA51Cu;
    {
        const bool branch_taken_0x2fa51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa51c) {
            ctx->pc = 0x2FA520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA51Cu;
            // 0x2fa520: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA534u;
            goto label_2fa534;
        }
    }
    ctx->pc = 0x2FA524u;
    // 0x2fa524: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2fa524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2fa528: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2fa528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2fa52c: 0x0  nop
    ctx->pc = 0x2fa52cu;
    // NOP
label_2fa530:
    // 0x2fa530: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2fa530u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2fa534:
    // 0x2fa534: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA534u;
    {
        const bool branch_taken_0x2fa534 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa534) {
            ctx->pc = 0x2FA538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA534u;
            // 0x2fa538: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA53Cu;
            goto label_2fa53c;
        }
    }
    ctx->pc = 0x2FA53Cu;
label_2fa53c:
    // 0x2fa53c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2fa53cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2fa540: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2fa540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2fa544: 0x1012  mflo        $v0
    ctx->pc = 0x2fa544u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa548: 0x1810  mfhi        $v1
    ctx->pc = 0x2fa548u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fa54c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fa54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa550: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2fa550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fa554: 0xac3018  mult        $a2, $a1, $t4
    ctx->pc = 0x2fa554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2fa558: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2fa558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fa55c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2fa55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2fa560: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FA560u;
    {
        const bool branch_taken_0x2fa560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA560u;
        // 0x2fa564: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa560) {
            ctx->pc = 0x2FA590u;
            goto label_2fa590;
        }
    }
    ctx->pc = 0x2FA568u;
    // 0x2fa568: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2fa568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2fa56c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2fa56cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fa570: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA570u;
    {
        const bool branch_taken_0x2fa570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA570u;
        // 0x2fa574: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa570) {
            ctx->pc = 0x2FA58Cu;
            goto label_2fa58c;
        }
    }
    ctx->pc = 0x2FA578u;
    // 0x2fa578: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2fa578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2fa57c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA57Cu;
    {
        const bool branch_taken_0x2fa57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA57Cu;
        // 0x2fa580: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa57c) {
            ctx->pc = 0x2FA590u;
            goto label_2fa590;
        }
    }
    ctx->pc = 0x2FA584u;
    // 0x2fa584: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2fa584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2fa588: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2fa588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2fa58c:
    // 0x2fa58c: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x2fa58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2fa590:
    // 0x2fa590: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2fa590u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2fa594: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x2fa594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2fa598: 0xc90019  multu       $a2, $t1
    ctx->pc = 0x2fa598u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 6) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2fa59c: 0x3810  mfhi        $a3
    ctx->pc = 0x2fa59cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2fa5a0: 0x2012  mflo        $a0
    ctx->pc = 0x2fa5a0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2fa5a4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2fa5a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2fa5a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA5A8u;
    {
        const bool branch_taken_0x2fa5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa5a8) {
            ctx->pc = 0x2FA5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA5A8u;
            // 0x2fa5ac: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA5C8u;
            goto label_2fa5c8;
        }
    }
    ctx->pc = 0x2FA5B0u;
    // 0x2fa5b0: 0x14e30006  bne         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA5B0u;
    {
        const bool branch_taken_0x2fa5b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA5B0u;
        // 0x2fa5b4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa5b0) {
            ctx->pc = 0x2FA5CCu;
            goto label_2fa5cc;
        }
    }
    ctx->pc = 0x2FA5B8u;
    // 0x2fa5b8: 0x164102b  sltu        $v0, $t3, $a0
    ctx->pc = 0x2fa5b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2fa5bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA5BCu;
    {
        const bool branch_taken_0x2fa5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa5bc) {
            ctx->pc = 0x2FA5CCu;
            goto label_2fa5cc;
        }
    }
    ctx->pc = 0x2FA5C4u;
    // 0x2fa5c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2fa5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2fa5c8:
    // 0x2fa5c8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2fa5c8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa5cc:
    // 0x2fa5cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fa5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa5d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fa5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fa5d4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2fa5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fa5d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa5dc: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x2fa5dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x2fa5e0: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x2fa5e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x2fa5e4: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x2fa5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2fa5e8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2fa5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2fa5ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa5f0: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x2fa5f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x2fa5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA5F4u;
        // 0x2fa5f8: 0x1c21025  or          $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA5FCu;
    // 0x2fa5fc: 0x0  nop
    ctx->pc = 0x2fa5fcu;
    // NOP
    ctx->pc = 0x2fa600u;
}
