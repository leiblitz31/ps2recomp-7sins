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

// Function: sub_002EA0B0
// Address: 0x2ea0b0 - 0x2ea230
void sub_002EA0B0_0x2ea0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA0B0_0x2ea0b0");
#endif

    switch (ctx->pc) {
        case 0x2ea170u: goto label_2ea170;
        case 0x2ea190u: goto label_2ea190;
        case 0x2ea200u: goto label_2ea200;
        default: break;
    }

    ctx->pc = 0x2ea0b0u;

    // 0x2ea0b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ea0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ea0b4: 0x8c880228  lw          $t0, 0x228($a0)
    ctx->pc = 0x2ea0b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x2ea0b8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2ea0b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ea0bc: 0x9c850220  lwu         $a1, 0x220($a0)
    ctx->pc = 0x2ea0bcu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x2ea0c0: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x2ea0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2ea0c4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EA0C4u;
    {
        const bool branch_taken_0x2ea0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0C4u;
        // 0x2ea0c8: 0x9c890224  lwu         $t1, 0x224($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0c4) {
            ctx->pc = 0x2EA11Cu;
            goto label_2ea11c;
        }
    }
    ctx->pc = 0x2EA0CCu;
    // 0x2ea0cc: 0x9c870234  lwu         $a3, 0x234($a0)
    ctx->pc = 0x2ea0ccu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x2ea0d0: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x2ea0d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2ea0d4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2ea0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2ea0d8: 0x8c8a0018  lw          $t2, 0x18($a0)
    ctx->pc = 0x2ea0d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ea0dc: 0x70023389  pcpyld      $a2, $zero, $v0
    ctx->pc = 0x2ea0dcu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2ea0e0: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x2ea0e0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x2ea0e4: 0x81138  dsll        $v0, $t0, 4
    ctx->pc = 0x2ea0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 4);
    // 0x2ea0e8: 0x748b8  dsll        $t1, $a3, 2
    ctx->pc = 0x2ea0e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << 2);
    // 0x2ea0ec: 0x6529000f  daddiu      $t1, $t1, 0xF
    ctx->pc = 0x2ea0ecu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)15);
    // 0x2ea0f0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2ea0f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2ea0f4: 0x1263024  and         $a2, $t1, $a2
    ctx->pc = 0x2ea0f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x2ea0f8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2ea0f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ea0fc: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2ea0fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2ea100: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x2ea100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2ea104: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x2ea104u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ea108: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x2ea108u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x2ea10c: 0x122102d  daddu       $v0, $t1, $v0
    ctx->pc = 0x2ea10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2ea110: 0x2683c  dsll32      $t5, $v0, 0
    ctx->pc = 0x2ea110u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea114: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EA114u;
    {
        const bool branch_taken_0x2ea114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA114u;
        // 0x2ea118: 0xd683f  dsra32      $t5, $t5, 0 (Delay Slot)
        SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea114) {
            ctx->pc = 0x2EA13Cu;
            goto label_2ea13c;
        }
    }
    ctx->pc = 0x2EA11Cu;
label_2ea11c:
    // 0x2ea11c: 0x9503c  dsll32      $t2, $t1, 0
    ctx->pc = 0x2ea11cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2ea120: 0x81138  dsll        $v0, $t0, 4
    ctx->pc = 0x2ea120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 4);
    // 0x2ea124: 0x8c890018  lw          $t1, 0x18($a0)
    ctx->pc = 0x2ea124u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ea128: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x2ea128u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x2ea12c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ea12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea130: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ea130u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ea134: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2ea134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2ea138: 0x1226821  addu        $t5, $t1, $v0
    ctx->pc = 0x2ea138u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_2ea13c:
    // 0x2ea13c: 0x8c890230  lw          $t1, 0x230($a0)
    ctx->pc = 0x2ea13cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x2ea140: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA140u;
    {
        const bool branch_taken_0x2ea140 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea140) {
            ctx->pc = 0x2EA14Cu;
            goto label_2ea14c;
        }
    }
    ctx->pc = 0x2EA148u;
    // 0x2ea148: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x2ea148u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
label_2ea14c:
    // 0x2ea14c: 0x1520001b  bnez        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EA14Cu;
    {
        const bool branch_taken_0x2ea14c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA14Cu;
        // 0x2ea150: 0x8da20000  lw          $v0, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea14c) {
            ctx->pc = 0x2EA1BCu;
            goto label_2ea1bc;
        }
    }
    ctx->pc = 0x2EA154u;
    // 0x2ea154: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x2ea154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ea158: 0x15090006  bne         $t0, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA158u;
    {
        const bool branch_taken_0x2ea158 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x2EA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA158u;
        // 0x2ea15c: 0x8483c  dsll32      $t1, $t0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea158) {
            ctx->pc = 0x2EA174u;
            goto label_2ea174;
        }
    }
    ctx->pc = 0x2EA160u;
    // 0x2ea160: 0x25adfff0  addiu       $t5, $t5, -0x10
    ctx->pc = 0x2ea160u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967280));
    // 0x2ea164: 0x6508ffff  daddiu      $t0, $t0, -0x1
    ctx->pc = 0x2ea164u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4294967295);
    // 0x2ea168: 0x79a90000  lq          $t1, 0x0($t5)
    ctx->pc = 0x2ea168u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2ea16c: 0x7c890200  sq          $t1, 0x200($a0)
    ctx->pc = 0x2ea16cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 9));
label_2ea170:
    // 0x2ea170: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x2ea170u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
label_2ea174:
    // 0x2ea174: 0x8082b  sltu        $at, $zero, $t0
    ctx->pc = 0x2ea174u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2ea178: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2ea178u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2ea17c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2ea17cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea180: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x2ea180u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2ea184: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EA184u;
    {
        const bool branch_taken_0x2ea184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA184u;
        // 0x2ea188: 0x1a96823  subu        $t5, $t5, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea184) {
            ctx->pc = 0x2EA1CCu;
            goto label_2ea1cc;
        }
    }
    ctx->pc = 0x2EA18Cu;
    // 0x2ea18c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2ea18cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ea190:
    // 0x2ea190: 0x79aa0000  lq          $t2, 0x0($t5)
    ctx->pc = 0x2ea190u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2ea194: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2ea194u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2ea198: 0xc483c  dsll32      $t1, $t4, 0
    ctx->pc = 0x2ea198u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) << (32 + 0));
    // 0x2ea19c: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2ea19cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2ea1a0: 0x128482b  sltu        $t1, $t1, $t0
    ctx->pc = 0x2ea1a0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2ea1a4: 0x7d6a0120  sq          $t2, 0x120($t3)
    ctx->pc = 0x2ea1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 288), GPR_VEC(ctx, 10));
    // 0x2ea1a8: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x2ea1a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x2ea1ac: 0x1520fff8  bnez        $t1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EA1ACu;
    {
        const bool branch_taken_0x2ea1ac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1ACu;
        // 0x2ea1b0: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1ac) {
            ctx->pc = 0x2EA190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea190;
        }
    }
    ctx->pc = 0x2EA1B4u;
    // 0x2ea1b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA1B4u;
    {
        const bool branch_taken_0x2ea1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1B4u;
        // 0x2ea1b8: 0x5403c  dsll32      $t0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1b4) {
            ctx->pc = 0x2EA1D0u;
            goto label_2ea1d0;
        }
    }
    ctx->pc = 0x2EA1BCu;
label_2ea1bc:
    // 0x2ea1bc: 0x25adfff0  addiu       $t5, $t5, -0x10
    ctx->pc = 0x2ea1bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967280));
    // 0x2ea1c0: 0x79a90000  lq          $t1, 0x0($t5)
    ctx->pc = 0x2ea1c0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2ea1c4: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x2EA1C4u;
    {
        const bool branch_taken_0x2ea1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1C4u;
        // 0x2ea1c8: 0x7c890200  sq          $t1, 0x200($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1c4) {
            ctx->pc = 0x2EA170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea170;
        }
    }
    ctx->pc = 0x2EA1CCu;
label_2ea1cc:
    // 0x2ea1cc: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x2ea1ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
label_2ea1d0:
    // 0x2ea1d0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x2ea1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ea1d4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2ea1d4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2ea1d8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x2ea1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2ea1dc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EA1DCu;
    {
        const bool branch_taken_0x2ea1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1DCu;
        // 0x2ea1e0: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1dc) {
            ctx->pc = 0x2EA228u;
            goto label_2ea228;
        }
    }
    ctx->pc = 0x2EA1E4u;
    // 0x2ea1e4: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x2ea1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ea1e8: 0x7082b  sltu        $at, $zero, $a3
    ctx->pc = 0x2ea1e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2ea1ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ea1ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ea1f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ea1f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea1f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ea1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ea1f8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2EA1F8u;
    {
        const bool branch_taken_0x2ea1f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1F8u;
        // 0x2ea1fc: 0xc33023  subu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1f8) {
            ctx->pc = 0x2EA228u;
            goto label_2ea228;
        }
    }
    ctx->pc = 0x2EA200u;
label_2ea200:
    // 0x2ea200: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2ea200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ea204: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ea204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ea208: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x2ea208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2ea20c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ea20cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ea210: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x2ea210u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2ea214: 0xac850288  sw          $a1, 0x288($a0)
    ctx->pc = 0x2ea214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 648), GPR_U32(ctx, 5));
    // 0x2ea218: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2ea218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2ea21c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EA21Cu;
    {
        const bool branch_taken_0x2ea21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA21Cu;
        // 0x2ea220: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea21c) {
            ctx->pc = 0x2EA200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea200;
        }
    }
    ctx->pc = 0x2EA224u;
    // 0x2ea224: 0x0  nop
    ctx->pc = 0x2ea224u;
    // NOP
label_2ea228:
    // 0x2ea228: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA230u;
}
