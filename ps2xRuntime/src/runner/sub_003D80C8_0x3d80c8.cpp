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

// Function: sub_003D80C8
// Address: 0x3d80c8 - 0x3d94a8
void sub_003D80C8_0x3d80c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D80C8_0x3d80c8");
#endif

    switch (ctx->pc) {
        case 0x3d8110u: goto label_3d8110;
        case 0x3d8170u: goto label_3d8170;
        case 0x3d8240u: goto label_3d8240;
        case 0x3d8358u: goto label_3d8358;
        case 0x3d8428u: goto label_3d8428;
        case 0x3d843cu: goto label_3d843c;
        case 0x3d8530u: goto label_3d8530;
        case 0x3d8534u: goto label_3d8534;
        case 0x3d85a4u: goto label_3d85a4;
        case 0x3d85d8u: goto label_3d85d8;
        case 0x3d868cu: goto label_3d868c;
        case 0x3d86c0u: goto label_3d86c0;
        case 0x3d873cu: goto label_3d873c;
        case 0x3d8784u: goto label_3d8784;
        case 0x3d87b8u: goto label_3d87b8;
        case 0x3d88a0u: goto label_3d88a0;
        case 0x3d893cu: goto label_3d893c;
        case 0x3d8a78u: goto label_3d8a78;
        case 0x3d8bccu: goto label_3d8bcc;
        case 0x3d8c00u: goto label_3d8c00;
        case 0x3d8c80u: goto label_3d8c80;
        case 0x3d8cd4u: goto label_3d8cd4;
        case 0x3d8d08u: goto label_3d8d08;
        case 0x3d8e00u: goto label_3d8e00;
        case 0x3d8ec0u: goto label_3d8ec0;
        case 0x3d9038u: goto label_3d9038;
        case 0x3d90fcu: goto label_3d90fc;
        case 0x3d9130u: goto label_3d9130;
        case 0x3d9230u: goto label_3d9230;
        case 0x3d9264u: goto label_3d9264;
        case 0x3d931cu: goto label_3d931c;
        case 0x3d93ccu: goto label_3d93cc;
        case 0x3d9400u: goto label_3d9400;
        default: break;
    }

    ctx->pc = 0x3d80c8u;

label_3d80c8:
    // 0x3d80c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d80c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3d80cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d80ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3d80d0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3d80d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3d80d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d80d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d80d8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3d80d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3d80dc: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x3d80dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x3d80e0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3d80e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x3d80e4: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x3d80e4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x3d80e8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3d80e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3d80ec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3d80ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3d80f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3d80f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3d80f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d80f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d80f8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3d80f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3d80fc: 0x8e93002c  lw          $s3, 0x2C($s4)
    ctx->pc = 0x3d80fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x3d8100: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x3d8100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x3d8104: 0x2677fefa  addiu       $s7, $s3, -0x106
    ctx->pc = 0x3d8104u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967034));
    // 0x3d8108: 0x2b03e  dsrl32      $s6, $v0, 0
    ctx->pc = 0x3d8108u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d810c: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x3d810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_3d8110:
    // 0x3d8110: 0x8e840084  lw          $a0, 0x84($s4)
    ctx->pc = 0x3d8110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x3d8114: 0x8e83007c  lw          $v1, 0x7C($s4)
    ctx->pc = 0x3d8114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x3d8118: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3d8118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d811c: 0x439023  subu        $s2, $v0, $v1
    ctx->pc = 0x3d811cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d8120: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D8120u;
    {
        const bool branch_taken_0x3d8120 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8120u;
        // 0x3d8124: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8120) {
            ctx->pc = 0x3D8140u;
            goto label_3d8140;
        }
    }
    ctx->pc = 0x3D8128u;
    // 0x3d8128: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D8128u;
    {
        const bool branch_taken_0x3d8128 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8128) {
            ctx->pc = 0x3D8140u;
            goto label_3d8140;
        }
    }
    ctx->pc = 0x3D8130u;
    // 0x3d8130: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8130u;
    {
        const bool branch_taken_0x3d8130 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8130) {
            ctx->pc = 0x3D8140u;
            goto label_3d8140;
        }
    }
    ctx->pc = 0x3D8138u;
    // 0x3d8138: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x3D8138u;
    {
        const bool branch_taken_0x3d8138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8138u;
        // 0x3d813c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8138) {
            ctx->pc = 0x3D83C8u;
            goto label_3d83c8;
        }
    }
    ctx->pc = 0x3D8140u;
label_3d8140:
    // 0x3d8140: 0x56550003  bnel        $s2, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8140u;
    {
        const bool branch_taken_0x3d8140 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x3d8140) {
            ctx->pc = 0x3D8144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8140u;
            // 0x3d8144: 0x8e82002c  lw          $v0, 0x2C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8150u;
            goto label_3d8150;
        }
    }
    ctx->pc = 0x3D8148u;
    // 0x3d8148: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3D8148u;
    {
        const bool branch_taken_0x3d8148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8148u;
        // 0x3d814c: 0x2412fffe  addiu       $s2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8148) {
            ctx->pc = 0x3D83C8u;
            goto label_3d83c8;
        }
    }
    ctx->pc = 0x3D8150u;
label_3d8150:
    // 0x3d8150: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x3d8150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x3d8154: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3d8154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d8158: 0x5440009c  bnel        $v0, $zero, . + 4 + (0x9C << 2)
    ctx->pc = 0x3D8158u;
    {
        const bool branch_taken_0x3d8158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8158) {
            ctx->pc = 0x3D815Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8158u;
            // 0x3d815c: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D83CCu;
            goto label_3d83cc;
        }
    }
    ctx->pc = 0x3D8160u;
    // 0x3d8160: 0x8e840038  lw          $a0, 0x38($s4)
    ctx->pc = 0x3d8160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x3d8164: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d8164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8168: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3D8168u;
    SET_GPR_U32(ctx, 31, 0x3D8170u);
    ctx->pc = 0x3D816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8168u;
    // 0x3d816c: 0x932821  addu        $a1, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D8168u, 0x3D8170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8170u;
label_3d8170:
    // 0x3d8170: 0x8e890054  lw          $t1, 0x54($s4)
    ctx->pc = 0x3d8170u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x3d8174: 0x2535021  addu        $t2, $s2, $s3
    ctx->pc = 0x3d8174u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3d8178: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x3d8178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x3d817c: 0x8e85007c  lw          $a1, 0x7C($s4)
    ctx->pc = 0x3d817cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x3d8180: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x3d8180u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x3d8184: 0xde840068  ld          $a0, 0x68($s4)
    ctx->pc = 0x3d8184u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x3d8188: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x3d8188u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d818c: 0x8e86004c  lw          $a2, 0x4C($s4)
    ctx->pc = 0x3d818cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x3d8190: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x3d8190u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3d8194: 0x96202f  dsubu       $a0, $a0, $s6
    ctx->pc = 0x3d8194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 22));
    // 0x3d8198: 0x91023  negu        $v0, $t1
    ctx->pc = 0x3d8198u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x3d819c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3d819cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3d81a0: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x3d81a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3d81a4: 0xae830080  sw          $v1, 0x80($s4)
    ctx->pc = 0x3d81a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 3));
    // 0x3d81a8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3d81a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d81ac: 0xae85007c  sw          $a1, 0x7C($s4)
    ctx->pc = 0x3d81acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 5));
    // 0x3d81b0: 0x11000021  beqz        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3D81B0u;
    {
        const bool branch_taken_0x3d81b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81B0u;
        // 0x3d81b4: 0xfe840068  sd          $a0, 0x68($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d81b0) {
            ctx->pc = 0x3D8238u;
            goto label_3d8238;
        }
    }
    ctx->pc = 0x3D81B8u;
    // 0x3d81b8: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x3d81b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d81bc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D81BCu;
    {
        const bool branch_taken_0x3d81bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81BCu;
        // 0x3d81c0: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d81bc) {
            ctx->pc = 0x3D8210u;
            goto label_3d8210;
        }
    }
    ctx->pc = 0x3D81C4u;
    // 0x3d81c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3D81C4u;
    {
        const bool branch_taken_0x3d81c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81C4u;
        // 0x3d81c8: 0x24c2fffe  addiu       $v0, $a2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d81c4) {
            ctx->pc = 0x3D81F0u;
            goto label_3d81f0;
        }
    }
    ctx->pc = 0x3D81CCu;
    // 0x3d81cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3d81ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d81d0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3d81d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d81d4: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x3d81d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d81d8: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3d81d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d81dc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D81DCu;
    {
        const bool branch_taken_0x3d81dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d81dc) {
            ctx->pc = 0x3D81E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D81DCu;
            // 0x3d81e0: 0xa4c00000  sh          $zero, 0x0($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D81ECu;
            goto label_3d81ec;
        }
    }
    ctx->pc = 0x3D81E4u;
    // 0x3d81e4: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x3d81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d81e8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3d81e8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_3d81ec:
    // 0x3d81ec: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3d81ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3d81f0:
    // 0x3d81f0: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3d81f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x3d81f4: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x3d81f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3d81f8: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3d81f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d81fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D81FCu;
    {
        const bool branch_taken_0x3d81fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d81fc) {
            ctx->pc = 0x3D8200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D81FCu;
            // 0x3d8200: 0xa4e00000  sh          $zero, 0x0($a3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D820Cu;
            goto label_3d820c;
        }
    }
    ctx->pc = 0x3D8204u;
    // 0x3d8204: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x3d8204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d8208: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x3d8208u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_3d820c:
    // 0x3d820c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3d820cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3d8210:
    // 0x3d8210: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3d8210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x3d8214: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x3d8214u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3d8218: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3d8218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d821c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D821Cu;
    {
        const bool branch_taken_0x3d821c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d821c) {
            ctx->pc = 0x3D8220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D821Cu;
            // 0x3d8220: 0xa4e00000  sh          $zero, 0x0($a3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D822Cu;
            goto label_3d822c;
        }
    }
    ctx->pc = 0x3D8224u;
    // 0x3d8224: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x3d8224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d8228: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x3d8228u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_3d822c:
    // 0x3d822c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3d822cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3d8230: 0x5120001f  beql        $t1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3D8230u;
    {
        const bool branch_taken_0x3d8230 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8230) {
            ctx->pc = 0x3D8234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8230u;
            // 0x3d8234: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D82B0u;
            goto label_3d82b0;
        }
    }
    ctx->pc = 0x3D8238u;
label_3d8238:
    // 0x3d8238: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3d8238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d823c: 0x94c3fffe  lhu         $v1, -0x2($a2)
    ctx->pc = 0x3d823cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967294)));
label_3d8240:
    // 0x3d8240: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3d8240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d8244: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8244u;
    {
        const bool branch_taken_0x3d8244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8244) {
            ctx->pc = 0x3D8248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8244u;
            // 0x3d8248: 0xa4c0fffe  sh          $zero, -0x2($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 4294967294), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8254u;
            goto label_3d8254;
        }
    }
    ctx->pc = 0x3D824Cu;
    // 0x3d824c: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x3d824cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d8250: 0xa4c2fffe  sh          $v0, -0x2($a2)
    ctx->pc = 0x3d8250u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967294), (uint16_t)GPR_U32(ctx, 2));
label_3d8254:
    // 0x3d8254: 0x94c3fffc  lhu         $v1, -0x4($a2)
    ctx->pc = 0x3d8254u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967292)));
    // 0x3d8258: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3d8258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d825c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D825Cu;
    {
        const bool branch_taken_0x3d825c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d825c) {
            ctx->pc = 0x3D8260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D825Cu;
            // 0x3d8260: 0xa4c0fffc  sh          $zero, -0x4($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 4294967292), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D826Cu;
            goto label_3d826c;
        }
    }
    ctx->pc = 0x3D8264u;
    // 0x3d8264: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x3d8264u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d8268: 0xa4c2fffc  sh          $v0, -0x4($a2)
    ctx->pc = 0x3d8268u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967292), (uint16_t)GPR_U32(ctx, 2));
label_3d826c:
    // 0x3d826c: 0x94c3fffa  lhu         $v1, -0x6($a2)
    ctx->pc = 0x3d826cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967290)));
    // 0x3d8270: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3d8270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d8274: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8274u;
    {
        const bool branch_taken_0x3d8274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8274) {
            ctx->pc = 0x3D8278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8274u;
            // 0x3d8278: 0xa4c0fffa  sh          $zero, -0x6($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 4294967290), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8284u;
            goto label_3d8284;
        }
    }
    ctx->pc = 0x3D827Cu;
    // 0x3d827c: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x3d827cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d8280: 0xa4c2fffa  sh          $v0, -0x6($a2)
    ctx->pc = 0x3d8280u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967290), (uint16_t)GPR_U32(ctx, 2));
label_3d8284:
    // 0x3d8284: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3d8284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3d8288: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x3d8288u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d828c: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3d828cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d8290: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8290u;
    {
        const bool branch_taken_0x3d8290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8290) {
            ctx->pc = 0x3D8294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8290u;
            // 0x3d8294: 0xa4c00000  sh          $zero, 0x0($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D82A0u;
            goto label_3d82a0;
        }
    }
    ctx->pc = 0x3D8298u;
    // 0x3d8298: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x3d8298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d829c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3d829cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_3d82a0:
    // 0x3d82a0: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x3d82a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x3d82a4: 0x5520ffe6  bnel        $t1, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3D82A4u;
    {
        const bool branch_taken_0x3d82a4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d82a4) {
            ctx->pc = 0x3D82A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D82A4u;
            // 0x3d82a8: 0x94c3fffe  lhu         $v1, -0x2($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967294)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8240;
        }
    }
    ctx->pc = 0x3D82ACu;
    // 0x3d82ac: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3d82acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d82b0:
    // 0x3d82b0: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x3d82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x3d82b4: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x3d82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x3d82b8: 0x92023  negu        $a0, $t1
    ctx->pc = 0x3d82b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x3d82bc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x3d82bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d82c0: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x3d82c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3d82c4: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3D82C4u;
    {
        const bool branch_taken_0x3d82c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82C4u;
        // 0x3d82c8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d82c4) {
            ctx->pc = 0x3D834Cu;
            goto label_3d834c;
        }
    }
    ctx->pc = 0x3D82CCu;
    // 0x3d82cc: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3d82ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d82d0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D82D0u;
    {
        const bool branch_taken_0x3d82d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82D0u;
        // 0x3d82d4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d82d0) {
            ctx->pc = 0x3D8324u;
            goto label_3d8324;
        }
    }
    ctx->pc = 0x3D82D8u;
    // 0x3d82d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3D82D8u;
    {
        const bool branch_taken_0x3d82d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82D8u;
        // 0x3d82dc: 0x24c2fffe  addiu       $v0, $a2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d82d8) {
            ctx->pc = 0x3D8304u;
            goto label_3d8304;
        }
    }
    ctx->pc = 0x3D82E0u;
    // 0x3d82e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d82e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d82e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3d82e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d82e8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x3d82e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d82ec: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3d82ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d82f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D82F0u;
    {
        const bool branch_taken_0x3d82f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d82f0) {
            ctx->pc = 0x3D82F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D82F0u;
            // 0x3d82f4: 0xa4c00000  sh          $zero, 0x0($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8300u;
            goto label_3d8300;
        }
    }
    ctx->pc = 0x3D82F8u;
    // 0x3d82f8: 0x691023  subu        $v0, $v1, $t1
    ctx->pc = 0x3d82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3d82fc: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3d82fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_3d8300:
    // 0x3d8300: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3d8300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3d8304:
    // 0x3d8304: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x3d8304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3d8308: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3d8308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d830c: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3d830cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d8310: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8310u;
    {
        const bool branch_taken_0x3d8310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8310) {
            ctx->pc = 0x3D8314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8310u;
            // 0x3d8314: 0xa4a00000  sh          $zero, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8320u;
            goto label_3d8320;
        }
    }
    ctx->pc = 0x3D8318u;
    // 0x3d8318: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x3d8318u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d831c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x3d831cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_3d8320:
    // 0x3d8320: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3d8320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3d8324:
    // 0x3d8324: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x3d8324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3d8328: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3d8328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d832c: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3d832cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d8330: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8330u;
    {
        const bool branch_taken_0x3d8330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8330) {
            ctx->pc = 0x3D8334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8330u;
            // 0x3d8334: 0xa4a00000  sh          $zero, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8340u;
            goto label_3d8340;
        }
    }
    ctx->pc = 0x3D8338u;
    // 0x3d8338: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x3d8338u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d833c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x3d833cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_3d8340:
    // 0x3d8340: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3d8340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3d8344: 0x11200020  beqz        $t1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3D8344u;
    {
        const bool branch_taken_0x3d8344 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8344u;
        // 0x3d8348: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8344) {
            ctx->pc = 0x3D83C8u;
            goto label_3d83c8;
        }
    }
    ctx->pc = 0x3D834Cu;
label_3d834c:
    // 0x3d834c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3d834cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8350: 0x94c3fffe  lhu         $v1, -0x2($a2)
    ctx->pc = 0x3d8350u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967294)));
    // 0x3d8354: 0x0  nop
    ctx->pc = 0x3d8354u;
    // NOP
label_3d8358:
    // 0x3d8358: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3d8358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d835c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D835Cu;
    {
        const bool branch_taken_0x3d835c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d835c) {
            ctx->pc = 0x3D8360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D835Cu;
            // 0x3d8360: 0xa4c0fffe  sh          $zero, -0x2($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 4294967294), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D836Cu;
            goto label_3d836c;
        }
    }
    ctx->pc = 0x3D8364u;
    // 0x3d8364: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x3d8364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d8368: 0xa4c2fffe  sh          $v0, -0x2($a2)
    ctx->pc = 0x3d8368u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967294), (uint16_t)GPR_U32(ctx, 2));
label_3d836c:
    // 0x3d836c: 0x94c3fffc  lhu         $v1, -0x4($a2)
    ctx->pc = 0x3d836cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967292)));
    // 0x3d8370: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3d8370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d8374: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8374u;
    {
        const bool branch_taken_0x3d8374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8374) {
            ctx->pc = 0x3D8378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8374u;
            // 0x3d8378: 0xa4c0fffc  sh          $zero, -0x4($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 4294967292), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8384u;
            goto label_3d8384;
        }
    }
    ctx->pc = 0x3D837Cu;
    // 0x3d837c: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x3d837cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d8380: 0xa4c2fffc  sh          $v0, -0x4($a2)
    ctx->pc = 0x3d8380u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967292), (uint16_t)GPR_U32(ctx, 2));
label_3d8384:
    // 0x3d8384: 0x94c3fffa  lhu         $v1, -0x6($a2)
    ctx->pc = 0x3d8384u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967290)));
    // 0x3d8388: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3d8388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d838c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D838Cu;
    {
        const bool branch_taken_0x3d838c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d838c) {
            ctx->pc = 0x3D8390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D838Cu;
            // 0x3d8390: 0xa4c0fffa  sh          $zero, -0x6($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 4294967290), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D839Cu;
            goto label_3d839c;
        }
    }
    ctx->pc = 0x3D8394u;
    // 0x3d8394: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x3d8394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d8398: 0xa4c2fffa  sh          $v0, -0x6($a2)
    ctx->pc = 0x3d8398u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967290), (uint16_t)GPR_U32(ctx, 2));
label_3d839c:
    // 0x3d839c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3d839cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3d83a0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x3d83a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d83a4: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3d83a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d83a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D83A8u;
    {
        const bool branch_taken_0x3d83a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d83a8) {
            ctx->pc = 0x3D83ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D83A8u;
            // 0x3d83ac: 0xa4c00000  sh          $zero, 0x0($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D83B8u;
            goto label_3d83b8;
        }
    }
    ctx->pc = 0x3D83B0u;
    // 0x3d83b0: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x3d83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d83b4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3d83b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_3d83b8:
    // 0x3d83b8: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x3d83b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x3d83bc: 0x5520ffe6  bnel        $t1, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3D83BCu;
    {
        const bool branch_taken_0x3d83bc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d83bc) {
            ctx->pc = 0x3D83C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D83BCu;
            // 0x3d83c0: 0x94c3fffe  lhu         $v1, -0x2($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967294)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8358;
        }
    }
    ctx->pc = 0x3D83C4u;
    // 0x3d83c4: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x3d83c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3d83c8:
    // 0x3d83c8: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x3d83c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3d83cc:
    // 0x3d83cc: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3d83ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d83d0: 0x10c0003c  beqz        $a2, . + 4 + (0x3C << 2)
    ctx->pc = 0x3D83D0u;
    {
        const bool branch_taken_0x3d83d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D83D0u;
        // 0x3d83d4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d83d0) {
            ctx->pc = 0x3D84C4u;
            goto label_3d84c4;
        }
    }
    ctx->pc = 0x3D83D8u;
    // 0x3d83d8: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x3d83d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x3d83dc: 0x8e85007c  lw          $a1, 0x7C($s4)
    ctx->pc = 0x3d83dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x3d83e0: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3d83e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3d83e4: 0x8e840084  lw          $a0, 0x84($s4)
    ctx->pc = 0x3d83e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x3d83e8: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x3d83e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x3d83ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d83f0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D83F0u;
    {
        const bool branch_taken_0x3d83f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D83F0u;
        // 0x3d83f4: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d83f0) {
            ctx->pc = 0x3D8400u;
            goto label_3d8400;
        }
    }
    ctx->pc = 0x3D83F8u;
    // 0x3d83f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3D83F8u;
    {
        const bool branch_taken_0x3d83f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D83F8u;
        // 0x3d83fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d83f8) {
            ctx->pc = 0x3D8460u;
            goto label_3d8460;
        }
    }
    ctx->pc = 0x3D8400u;
label_3d8400:
    // 0x3d8400: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x3d8400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3d8404: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3d8404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3d8408: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3d8408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3d840c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x3d840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3d8410: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D8410u;
    {
        const bool branch_taken_0x3d8410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8410) {
            ctx->pc = 0x3D8414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8410u;
            // 0x3d8414: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8430u;
            goto label_3d8430;
        }
    }
    ctx->pc = 0x3D8418u;
    // 0x3d8418: 0xde240038  ld          $a0, 0x38($s1)
    ctx->pc = 0x3d8418u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x3d841c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d841cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8420: 0xc0f5b94  jal         func_3D6E50
    ctx->pc = 0x3D8420u;
    SET_GPR_U32(ctx, 31, 0x3D8428u);
    ctx->pc = 0x3D8424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8420u;
    // 0x3d8424: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6E50u, 0x3D8420u, 0x3D8428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8428u;
label_3d8428:
    // 0x3d8428: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x3d8428u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
    // 0x3d842c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3d842cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d8430:
    // 0x3d8430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d8430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8434: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3D8434u;
    SET_GPR_U32(ctx, 31, 0x3D843Cu);
    ctx->pc = 0x3D8438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8434u;
    // 0x3d8438: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D8434u, 0x3D843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D843Cu;
label_3d843c:
    // 0x3d843c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d843cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d8440: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3d8440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3d8444: 0xde240008  ld          $a0, 0x8($s1)
    ctx->pc = 0x3d8444u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3d8448: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d8448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d844c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d844cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3d8450: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3d8450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8454: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x3d8454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3d8458: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d8458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3d845c: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x3d845cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
label_3d8460:
    // 0x3d8460: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x3d8460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x3d8464: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3d8464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3d8468: 0x2c430003  sltiu       $v1, $v0, 0x3
    ctx->pc = 0x3d8468u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d846c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3D846Cu;
    {
        const bool branch_taken_0x3d846c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D846Cu;
        // 0x3d8470: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d846c) {
            ctx->pc = 0x3D84A4u;
            goto label_3d84a4;
        }
    }
    ctx->pc = 0x3D8474u;
    // 0x3d8474: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x3d8474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x3d8478: 0x8e840038  lw          $a0, 0x38($s4)
    ctx->pc = 0x3d8478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x3d847c: 0x8e850060  lw          $a1, 0x60($s4)
    ctx->pc = 0x3d847cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x3d8480: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d8480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d8484: 0x8e86005c  lw          $a2, 0x5C($s4)
    ctx->pc = 0x3d8484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x3d8488: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3d8488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d848c: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x3d848cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x3d8490: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3d8490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3d8494: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3d8494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3d8498: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3d8498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3d849c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3d849cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3d84a0: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x3d84a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_3d84a4:
    // 0x3d84a4: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x3d84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x3d84a8: 0x2c420106  sltiu       $v0, $v0, 0x106
    ctx->pc = 0x3d84a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)262) ? 1 : 0);
    // 0x3d84ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D84ACu;
    {
        const bool branch_taken_0x3d84ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D84ACu;
        // 0x3d84b0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d84ac) {
            ctx->pc = 0x3D84C8u;
            goto label_3d84c8;
        }
    }
    ctx->pc = 0x3D84B4u;
    // 0x3d84b4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3d84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3d84b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3d84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3d84bc: 0x5460ff14  bnel        $v1, $zero, . + 4 + (-0xEC << 2)
    ctx->pc = 0x3D84BCu;
    {
        const bool branch_taken_0x3d84bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d84bc) {
            ctx->pc = 0x3D84C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D84BCu;
            // 0x3d84c0: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8110;
        }
    }
    ctx->pc = 0x3D84C4u;
label_3d84c4:
    // 0x3d84c4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3d84c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3d84c8:
    // 0x3d84c8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3d84c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d84cc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3d84ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d84d0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3d84d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d84d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d84d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d84d8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3d84d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d84dc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3d84dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d84e0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3d84e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d84e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d84e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d84e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D84E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D84E8u;
        // 0x3d84ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D84E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D84F0u;
    // 0x3d84f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d84f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3d84f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d84f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3d84f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3d84f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3d84fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d84fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8500: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3d8500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3d8504: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3d8504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8508: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d8508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3d850c: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x3d850cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3d8510: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d8510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3d8514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d8514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d8518: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x3d8518u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3d851c: 0x6442fffb  daddiu      $v0, $v0, -0x5
    ctx->pc = 0x3d851cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967291);
    // 0x3d8520: 0x54182b  sltu        $v1, $v0, $s4
    ctx->pc = 0x3d8520u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3d8524: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x3D8524u;
    {
        const bool branch_taken_0x3d8524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8524u;
        // 0x3d8528: 0x43a00b  movn        $s4, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8524) {
            ctx->pc = 0x3D8724u;
            goto label_3d8724;
        }
    }
    ctx->pc = 0x3D852Cu;
    // 0x3d852c: 0x0  nop
    ctx->pc = 0x3d852cu;
    // NOP
label_3d8530:
    // 0x3d8530: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x3d8530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_3d8534:
    // 0x3d8534: 0xde450068  ld          $a1, 0x68($s2)
    ctx->pc = 0x3d8534u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3d8538: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d8538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d853c: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x3d853cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
    // 0x3d8540: 0xb4202d  daddu       $a0, $a1, $s4
    ctx->pc = 0x3d8540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 20));
    // 0x3d8544: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8544u;
    {
        const bool branch_taken_0x3d8544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8544u;
        // 0x3d8548: 0xae43007c  sw          $v1, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8544) {
            ctx->pc = 0x3D8560u;
            goto label_3d8560;
        }
    }
    ctx->pc = 0x3D854Cu;
    // 0x3d854c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3d854cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d8550: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d8550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d8554: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3d8554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d8558: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x3D8558u;
    {
        const bool branch_taken_0x3d8558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8558) {
            ctx->pc = 0x3D855Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8558u;
            // 0x3d855c: 0x8e43007c  lw          $v1, 0x7C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8640u;
            goto label_3d8640;
        }
    }
    ctx->pc = 0x3D8560u;
label_3d8560:
    // 0x3d8560: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3d8560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3d8564: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d8564u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d8568: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3d8568u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d856c: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x3d856cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
    // 0x3d8570: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D8570u;
    {
        const bool branch_taken_0x3d8570 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3D8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8570u;
        // 0x3d8574: 0xae430084  sw          $v1, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8570) {
            ctx->pc = 0x3D8588u;
            goto label_3d8588;
        }
    }
    ctx->pc = 0x3D8578u;
    // 0x3d8578: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x3d8578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x3d857c: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x3d857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3d8580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D8580u;
    {
        const bool branch_taken_0x3d8580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8580u;
        // 0x3d8584: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8580) {
            ctx->pc = 0x3D858Cu;
            goto label_3d858c;
        }
    }
    ctx->pc = 0x3D8588u;
label_3d8588:
    // 0x3d8588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d8588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d858c:
    // 0x3d858c: 0x9e42007c  lwu         $v0, 0x7C($s2)
    ctx->pc = 0x3d858cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x3d8590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d8590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8594: 0xde460068  ld          $a2, 0x68($s2)
    ctx->pc = 0x3d8594u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3d8598: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d8598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d859c: 0xc0f6cdc  jal         func_3DB370
    ctx->pc = 0x3D859Cu;
    SET_GPR_U32(ctx, 31, 0x3D85A4u);
    ctx->pc = 0x3D85A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D859Cu;
    // 0x3d85a0: 0x46302f  dsubu       $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB370u, 0x3D859Cu, 0x3D85A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D85A4u;
label_3d85a4:
    // 0x3d85a4: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3d85a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d85a8: 0x9e44007c  lwu         $a0, 0x7C($s2)
    ctx->pc = 0x3d85a8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x3d85ac: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3d85acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3d85b0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3d85b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3d85b4: 0x8cb0001c  lw          $s0, 0x1C($a1)
    ctx->pc = 0x3d85b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3d85b8: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x3d85b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3d85bc: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3d85bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x3d85c0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D85C0u;
    {
        const bool branch_taken_0x3d85c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D85C0u;
        // 0x3d85c4: 0xfe440068  sd          $a0, 0x68($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d85c0) {
            ctx->pc = 0x3D862Cu;
            goto label_3d862c;
        }
    }
    ctx->pc = 0x3D85C8u;
    // 0x3d85c8: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x3d85c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3d85cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d85ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d85d0: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3D85D0u;
    SET_GPR_U32(ctx, 31, 0x3D85D8u);
    ctx->pc = 0x3D85D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D85D0u;
    // 0x3d85d4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D85D0u, 0x3D85D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D85D8u;
label_3d85d8:
    // 0x3d85d8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3d85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3d85dc: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x3d85dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3d85e0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3d85e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3d85e4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3d85e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3d85e8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d85e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3d85ec: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x3d85ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3d85f0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3d85f4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3d85f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x3d85f8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3d85f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x3d85fc: 0xde240018  ld          $a0, 0x18($s1)
    ctx->pc = 0x3d85fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3d8600: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3d8600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d8604: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3d8604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3d8608: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x3d8608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3d860c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3d8610: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x3d8610u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x3d8614: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d8614u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3d8618: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x3d8618u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x3d861c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D861Cu;
    {
        const bool branch_taken_0x3d861c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D861Cu;
        // 0x3d8620: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d861c) {
            ctx->pc = 0x3D862Cu;
            goto label_3d862c;
        }
    }
    ctx->pc = 0x3D8624u;
    // 0x3d8624: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d8624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d8628: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x3d8628u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_3d862c:
    // 0x3d862c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3d862cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d8630: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3d8630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3d8634: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x3D8634u;
    {
        const bool branch_taken_0x3d8634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8634u;
        // 0x3d8638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8634) {
            ctx->pc = 0x3D8830u;
            goto label_3d8830;
        }
    }
    ctx->pc = 0x3D863Cu;
    // 0x3d863c: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x3d863cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_3d8640:
    // 0x3d8640: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x3d8640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3d8644: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3d8644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x3d8648: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3d8648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d864c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3d864cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d8650: 0x2442fefa  addiu       $v0, $v0, -0x106
    ctx->pc = 0x3d8650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967034));
    // 0x3d8654: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3d8654u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d8658: 0x54600033  bnel        $v1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x3D8658u;
    {
        const bool branch_taken_0x3d8658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8658) {
            ctx->pc = 0x3D865Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8658u;
            // 0x3d865c: 0x8e420084  lw          $v0, 0x84($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8728u;
            goto label_3d8728;
        }
    }
    ctx->pc = 0x3D8660u;
    // 0x3d8660: 0xde480068  ld          $t0, 0x68($s2)
    ctx->pc = 0x3d8660u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3d8664: 0x5020003  bltzl       $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8664u;
    {
        const bool branch_taken_0x3d8664 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x3d8664) {
            ctx->pc = 0x3D8668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8664u;
            // 0x3d8668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8674u;
            goto label_3d8674;
        }
    }
    ctx->pc = 0x3D866Cu;
    // 0x3d866c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x3d866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x3d8670: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3d8670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3d8674:
    // 0x3d8674: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3d8674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3d8678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d8678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d867c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3d867cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3d8680: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d8680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8684: 0xc0f6cdc  jal         func_3DB370
    ctx->pc = 0x3D8684u;
    SET_GPR_U32(ctx, 31, 0x3D868Cu);
    ctx->pc = 0x3D8688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8684u;
    // 0x3d8688: 0xc8302f  dsubu       $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB370u, 0x3D8684u, 0x3D868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D868Cu;
label_3d868c:
    // 0x3d868c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3d868cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d8690: 0x9e44007c  lwu         $a0, 0x7C($s2)
    ctx->pc = 0x3d8690u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x3d8694: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3d8694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3d8698: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3d8698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3d869c: 0x8cb0001c  lw          $s0, 0x1C($a1)
    ctx->pc = 0x3d869cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3d86a0: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x3d86a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3d86a4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3d86a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x3d86a8: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D86A8u;
    {
        const bool branch_taken_0x3d86a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D86A8u;
        // 0x3d86ac: 0xfe440068  sd          $a0, 0x68($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d86a8) {
            ctx->pc = 0x3D8714u;
            goto label_3d8714;
        }
    }
    ctx->pc = 0x3D86B0u;
    // 0x3d86b0: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x3d86b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3d86b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d86b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d86b8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3D86B8u;
    SET_GPR_U32(ctx, 31, 0x3D86C0u);
    ctx->pc = 0x3D86BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D86B8u;
    // 0x3d86bc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D86B8u, 0x3D86C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D86C0u;
label_3d86c0:
    // 0x3d86c0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3d86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3d86c4: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x3d86c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3d86c8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3d86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3d86cc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3d86ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3d86d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d86d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3d86d4: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x3d86d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3d86d8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3d86dc: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3d86dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x3d86e0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3d86e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x3d86e4: 0xde240018  ld          $a0, 0x18($s1)
    ctx->pc = 0x3d86e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3d86e8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3d86e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d86ec: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3d86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3d86f0: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x3d86f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3d86f4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d86f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3d86f8: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x3d86f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x3d86fc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3d8700: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x3d8700u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x3d8704: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8704u;
    {
        const bool branch_taken_0x3d8704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8704u;
        // 0x3d8708: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8704) {
            ctx->pc = 0x3D8714u;
            goto label_3d8714;
        }
    }
    ctx->pc = 0x3D870Cu;
    // 0x3d870c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d8710: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x3d8710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_3d8714:
    // 0x3d8714: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3d8714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d8718: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3d8718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3d871c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3D871Cu;
    {
        const bool branch_taken_0x3d871c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D871Cu;
        // 0x3d8720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d871c) {
            ctx->pc = 0x3D8830u;
            goto label_3d8830;
        }
    }
    ctx->pc = 0x3D8724u;
label_3d8724:
    // 0x3d8724: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x3d8724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_3d8728:
    // 0x3d8728: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3d8728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d872c: 0x5040ff80  beql        $v0, $zero, . + 4 + (-0x80 << 2)
    ctx->pc = 0x3D872Cu;
    {
        const bool branch_taken_0x3d872c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d872c) {
            ctx->pc = 0x3D8730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D872Cu;
            // 0x3d8730: 0x8e43007c  lw          $v1, 0x7C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8530;
        }
    }
    ctx->pc = 0x3D8734u;
    // 0x3d8734: 0xc0f6032  jal         func_3D80C8
    ctx->pc = 0x3D8734u;
    SET_GPR_U32(ctx, 31, 0x3D873Cu);
    ctx->pc = 0x3D8738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8734u;
    // 0x3d8738: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D80C8u;
    goto label_3d80c8;
    ctx->pc = 0x3D873Cu;
label_3d873c:
    // 0x3d873c: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x3d873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x3d8740: 0x5440ff7c  bnel        $v0, $zero, . + 4 + (-0x84 << 2)
    ctx->pc = 0x3D8740u;
    {
        const bool branch_taken_0x3d8740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8740) {
            ctx->pc = 0x3D8744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8740u;
            // 0x3d8744: 0x8e43007c  lw          $v1, 0x7C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8534;
        }
    }
    ctx->pc = 0x3D8748u;
    // 0x3d8748: 0x12600039  beqz        $s3, . + 4 + (0x39 << 2)
    ctx->pc = 0x3D8748u;
    {
        const bool branch_taken_0x3d8748 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8748u;
        // 0x3d874c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8748) {
            ctx->pc = 0x3D8830u;
            goto label_3d8830;
        }
    }
    ctx->pc = 0x3D8750u;
    // 0x3d8750: 0xde480068  ld          $t0, 0x68($s2)
    ctx->pc = 0x3d8750u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3d8754: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8754u;
    {
        const bool branch_taken_0x3d8754 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x3D8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8754u;
        // 0x3d8758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8754) {
            ctx->pc = 0x3D8768u;
            goto label_3d8768;
        }
    }
    ctx->pc = 0x3D875Cu;
    // 0x3d875c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x3d875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x3d8760: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x3d8760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3d8764: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3d8764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d8768:
    // 0x3d8768: 0x9e46007c  lwu         $a2, 0x7C($s2)
    ctx->pc = 0x3d8768u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x3d876c: 0x3a670004  xori        $a3, $s3, 0x4
    ctx->pc = 0x3d876cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)4);
    // 0x3d8770: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3d8770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d8774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8778: 0xc8302f  dsubu       $a2, $a2, $t0
    ctx->pc = 0x3d8778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 8));
    // 0x3d877c: 0xc0f6cdc  jal         func_3DB370
    ctx->pc = 0x3D877Cu;
    SET_GPR_U32(ctx, 31, 0x3D8784u);
    ctx->pc = 0x3D8780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D877Cu;
    // 0x3d8780: 0x2ce70001  sltiu       $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB370u, 0x3D877Cu, 0x3D8784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8784u;
label_3d8784:
    // 0x3d8784: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3d8784u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d8788: 0x9e44007c  lwu         $a0, 0x7C($s2)
    ctx->pc = 0x3d8788u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x3d878c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3d878cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3d8790: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3d8790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3d8794: 0x8cb0001c  lw          $s0, 0x1C($a1)
    ctx->pc = 0x3d8794u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3d8798: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x3d8798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3d879c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3d879cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x3d87a0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D87A0u;
    {
        const bool branch_taken_0x3d87a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D87A0u;
        // 0x3d87a4: 0xfe440068  sd          $a0, 0x68($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d87a0) {
            ctx->pc = 0x3D880Cu;
            goto label_3d880c;
        }
    }
    ctx->pc = 0x3D87A8u;
    // 0x3d87a8: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x3d87a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3d87ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d87acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d87b0: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3D87B0u;
    SET_GPR_U32(ctx, 31, 0x3D87B8u);
    ctx->pc = 0x3D87B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D87B0u;
    // 0x3d87b4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D87B0u, 0x3D87B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D87B8u;
label_3d87b8:
    // 0x3d87b8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3d87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3d87bc: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x3d87bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3d87c0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3d87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3d87c4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3d87c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3d87c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d87c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3d87cc: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x3d87ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3d87d0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3d87d4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3d87d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x3d87d8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3d87d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x3d87dc: 0xde240018  ld          $a0, 0x18($s1)
    ctx->pc = 0x3d87dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3d87e0: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3d87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d87e4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3d87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3d87e8: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x3d87e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3d87ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3d87f0: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x3d87f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x3d87f4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3d87f8: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x3d87f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x3d87fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D87FCu;
    {
        const bool branch_taken_0x3d87fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D87FCu;
        // 0x3d8800: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d87fc) {
            ctx->pc = 0x3D880Cu;
            goto label_3d880c;
        }
    }
    ctx->pc = 0x3D8804u;
    // 0x3d8804: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d8804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d8808: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x3d8808u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_3d880c:
    // 0x3d880c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3d880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d8810: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3d8810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3d8814: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8814u;
    {
        const bool branch_taken_0x3d8814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8814u;
        // 0x3d8818: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8814) {
            ctx->pc = 0x3D8828u;
            goto label_3d8828;
        }
    }
    ctx->pc = 0x3D881Cu;
    // 0x3d881c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d8820: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8820u;
    {
        const bool branch_taken_0x3d8820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8820u;
        // 0x3d8824: 0x13100b  movn        $v0, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8820) {
            ctx->pc = 0x3D8830u;
            goto label_3d8830;
        }
    }
    ctx->pc = 0x3D8828u;
label_3d8828:
    // 0x3d8828: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d8828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d882c: 0x73100b  movn        $v0, $v1, $s3
    ctx->pc = 0x3d882cu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_3d8830:
    // 0x3d8830: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d8830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d8834: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d8834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d8838: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d8838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d883c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3d883cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d8840: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3d8840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d8844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8848: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8848u;
        // 0x3d884c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8850u;
    // 0x3d8850: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3d8850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3d8854: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3d8854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3d8858: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3d8858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3d885c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d885cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8860: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3d8860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3d8864: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3d8864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3d8868: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d8868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d886c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3d886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3d8870: 0x2474ce98  addiu       $s4, $v1, -0x3168
    ctx->pc = 0x3d8870u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954648));
    // 0x3d8874: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3d8874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3d8878: 0x261500a4  addiu       $s5, $s0, 0xA4
    ctx->pc = 0x3d8878u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    // 0x3d887c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3d887cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3d8880: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3d8880u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8884: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3d8884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3d8888: 0x26170998  addiu       $s7, $s0, 0x998
    ctx->pc = 0x3d8888u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 2456));
    // 0x3d888c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3d888cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3d8890: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x3d8890u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d8894: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3d8894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3d8898: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x3D8898u;
    {
        const bool branch_taken_0x3d8898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8898u;
        // 0x3d889c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8898) {
            ctx->pc = 0x3D8C64u;
            goto label_3d8c64;
        }
    }
    ctx->pc = 0x3D88A0u;
label_3d88a0:
    // 0x3d88a0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3D88A0u;
    {
        const bool branch_taken_0x3d88a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d88a0) {
            ctx->pc = 0x3D8904u;
            goto label_3d8904;
        }
    }
    ctx->pc = 0x3D88A8u;
    // 0x3d88a8: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x3d88a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d88ac: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3d88acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3d88b0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x3d88b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3d88b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3d88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d88b8: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x3d88b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3d88bc: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x3d88bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3d88c0: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x3d88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3d88c4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3d88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3d88c8: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x3d88c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x3d88cc: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x3d88ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3d88d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3d88d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3d88d4: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x3d88d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3d88d8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3d88d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3d88dc: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3d88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3d88e0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3d88e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3d88e4: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x3d88e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x3d88e8: 0x94930000  lhu         $s3, 0x0($a0)
    ctx->pc = 0x3d88e8u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d88ec: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3d88ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3d88f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3d88f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d88f4: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x3d88f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x3d88f8: 0xa4b30000  sh          $s3, 0x0($a1)
    ctx->pc = 0x3d88f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x3d88fc: 0x9602007c  lhu         $v0, 0x7C($s0)
    ctx->pc = 0x3d88fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8900: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3d8900u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_3d8904:
    // 0x3d8904: 0x5260000f  beql        $s3, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3D8904u;
    {
        const bool branch_taken_0x3d8904 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8904) {
            ctx->pc = 0x3D8908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8904u;
            // 0x3d8908: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8944u;
            goto label_3d8944;
        }
    }
    ctx->pc = 0x3D890Cu;
    // 0x3d890c: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x3d890cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8910: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3d8910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3d8914: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x3d8914u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d8918: 0x2442fefa  addiu       $v0, $v0, -0x106
    ctx->pc = 0x3d8918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967034));
    // 0x3d891c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3d891cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d8920: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8920u;
    {
        const bool branch_taken_0x3d8920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8920) {
            ctx->pc = 0x3D8924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8920u;
            // 0x3d8924: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8944u;
            goto label_3d8944;
        }
    }
    ctx->pc = 0x3D8928u;
    // 0x3d8928: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x3d8928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x3d892c: 0x105e0004  beq         $v0, $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D892Cu;
    {
        const bool branch_taken_0x3d892c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x3D8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D892Cu;
        // 0x3d8930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d892c) {
            ctx->pc = 0x3D8940u;
            goto label_3d8940;
        }
    }
    ctx->pc = 0x3D8934u;
    // 0x3d8934: 0xc0f5fa4  jal         func_3D7E90
    ctx->pc = 0x3D8934u;
    SET_GPR_U32(ctx, 31, 0x3D893Cu);
    ctx->pc = 0x3D8938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8934u;
    // 0x3d8938: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7E90u, 0x3D8934u, 0x3D893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D893Cu;
label_3d893c:
    // 0x3d893c: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x3d893cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_3d8940:
    // 0x3d8940: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x3d8940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3d8944:
    // 0x3d8944: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x3d8944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d8948: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x3D8948u;
    {
        const bool branch_taken_0x3d8948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8948u;
        // 0x3d894c: 0x8e0616b0  lw          $a2, 0x16B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8948) {
            ctx->pc = 0x3D8B24u;
            goto label_3d8b24;
        }
    }
    ctx->pc = 0x3D8950u;
    // 0x3d8950: 0x92050070  lbu         $a1, 0x70($s0)
    ctx->pc = 0x3d8950u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3d8954: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x3d8954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x3d8958: 0x96020080  lhu         $v0, 0x80($s0)
    ctx->pc = 0x3d8958u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3d895c: 0x2484d098  addiu       $a0, $a0, -0x2F68
    ctx->pc = 0x3d895cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955160));
    // 0x3d8960: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x3d8960u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8964: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x3d8964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x3d8968: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3d8968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3d896c: 0x8e0716b4  lw          $a3, 0x16B4($s0)
    ctx->pc = 0x3d896cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5812)));
    // 0x3d8970: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3d8970u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d8974: 0xa44021  addu        $t0, $a1, $a0
    ctx->pc = 0x3d8974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3d8978: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x3d8978u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3d897c: 0x8e0416a8  lw          $a0, 0x16A8($s0)
    ctx->pc = 0x3d897cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5800)));
    // 0x3d8980: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3d8980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3d8984: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3d8984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3d8988: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3d8988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3d898c: 0xa4490000  sh          $t1, 0x0($v0)
    ctx->pc = 0x3d898cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x3d8990: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3d8990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3d8994: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x3d8994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d8998: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3d8998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3d899c: 0x24630101  addiu       $v1, $v1, 0x101
    ctx->pc = 0x3d899cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 257));
    // 0x3d89a0: 0xae0616b0  sw          $a2, 0x16B0($s0)
    ctx->pc = 0x3d89a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5808), GPR_U32(ctx, 6));
    // 0x3d89a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d89a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d89a8: 0x2524ffff  addiu       $a0, $t1, -0x1
    ctx->pc = 0x3d89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3d89ac: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3d89acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3d89b0: 0x3089ffff  andi        $t1, $a0, 0xFFFF
    ctx->pc = 0x3d89b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3d89b4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3d89b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d89b8: 0x2d240100  sltiu       $a0, $t1, 0x100
    ctx->pc = 0x3d89b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3d89bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d89c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D89C0u;
    {
        const bool branch_taken_0x3d89c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89C0u;
        // 0x3d89c4: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d89c0) {
            ctx->pc = 0x3D89D4u;
            goto label_3d89d4;
        }
    }
    ctx->pc = 0x3D89C8u;
    // 0x3d89c8: 0x1341021  addu        $v0, $t1, $s4
    ctx->pc = 0x3d89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x3d89cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D89CCu;
    {
        const bool branch_taken_0x3d89cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89CCu;
        // 0x3d89d0: 0x90430000  lbu         $v1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d89cc) {
            ctx->pc = 0x3D89E0u;
            goto label_3d89e0;
        }
    }
    ctx->pc = 0x3D89D4u;
label_3d89d4:
    // 0x3d89d4: 0x911c2  srl         $v0, $t1, 7
    ctx->pc = 0x3d89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 7));
    // 0x3d89d8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3d89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3d89dc: 0x90430100  lbu         $v1, 0x100($v0)
    ctx->pc = 0x3d89dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 256)));
label_3d89e0:
    // 0x3d89e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d89e4: 0x2e33021  addu        $a2, $s7, $v1
    ctx->pc = 0x3d89e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x3d89e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D89E8u;
    {
        const bool branch_taken_0x3d89e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D89ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89E8u;
        // 0x3d89ec: 0x26050998  addiu       $a1, $s0, 0x998 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d89e8) {
            ctx->pc = 0x3D89FCu;
            goto label_3d89fc;
        }
    }
    ctx->pc = 0x3D89F0u;
    // 0x3d89f0: 0x1341021  addu        $v0, $t1, $s4
    ctx->pc = 0x3d89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x3d89f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D89F4u;
    {
        const bool branch_taken_0x3d89f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89F4u;
        // 0x3d89f8: 0x90430000  lbu         $v1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d89f4) {
            ctx->pc = 0x3D8A08u;
            goto label_3d8a08;
        }
    }
    ctx->pc = 0x3D89FCu;
label_3d89fc:
    // 0x3d89fc: 0x911c2  srl         $v0, $t1, 7
    ctx->pc = 0x3d89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 7));
    // 0x3d8a00: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3d8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3d8a04: 0x90430100  lbu         $v1, 0x100($v0)
    ctx->pc = 0x3d8a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 256)));
label_3d8a08:
    // 0x3d8a08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3d8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d8a0c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x3d8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d8a10: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3d8a10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d8a14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d8a18: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3d8a18u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d8a1c: 0x8e0316ac  lw          $v1, 0x16AC($s0)
    ctx->pc = 0x3d8a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5804)));
    // 0x3d8a20: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x3d8a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3d8a24: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x3d8a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3d8a28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d8a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d8a2c: 0x8e0416b0  lw          $a0, 0x16B0($s0)
    ctx->pc = 0x3d8a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5808)));
    // 0x3d8a30: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x3d8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x3d8a34: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3d8a34u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3d8a38: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x3d8a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x3d8a3c: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x3d8a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x3d8a40: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x3d8a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d8a44: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3D8A44u;
    {
        const bool branch_taken_0x3d8a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8A44u;
        // 0x3d8a48: 0x2c8e0001  sltiu       $t6, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8a44) {
            ctx->pc = 0x3D8AE0u;
            goto label_3d8ae0;
        }
    }
    ctx->pc = 0x3D8A4Cu;
    // 0x3d8a4c: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x3d8a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d8a50: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x3D8A50u;
    {
        const bool branch_taken_0x3d8a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8a50) {
            ctx->pc = 0x3D8A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8A50u;
            // 0x3d8a54: 0x8e030070  lw          $v1, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8AE4u;
            goto label_3d8ae4;
        }
    }
    ctx->pc = 0x3D8A58u;
    // 0x3d8a58: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x3d8a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3d8a5c: 0x8e0d0060  lw          $t5, 0x60($s0)
    ctx->pc = 0x3d8a5cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3d8a60: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x3d8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x3d8a64: 0x8e0c0038  lw          $t4, 0x38($s0)
    ctx->pc = 0x3d8a64u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3d8a68: 0x8e0b005c  lw          $t3, 0x5C($s0)
    ctx->pc = 0x3d8a68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3d8a6c: 0x8e0a0034  lw          $t2, 0x34($s0)
    ctx->pc = 0x3d8a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3d8a70: 0x8e090048  lw          $t1, 0x48($s0)
    ctx->pc = 0x3d8a70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3d8a74: 0x8e08004c  lw          $t0, 0x4C($s0)
    ctx->pc = 0x3d8a74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3d8a78:
    // 0x3d8a78: 0x8e07007c  lw          $a3, 0x7C($s0)
    ctx->pc = 0x3d8a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8a7c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3d8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3d8a80: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x3d8a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3d8a84: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x3d8a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3d8a88: 0xae04007c  sw          $a0, 0x7C($s0)
    ctx->pc = 0x3d8a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 4));
    // 0x3d8a8c: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x3d8a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x3d8a90: 0x1a21004  sllv        $v0, $v0, $t5
    ctx->pc = 0x3d8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d8a94: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x3d8a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x3d8a98: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x3d8a98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3d8a9c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3d8a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3d8aa0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x3d8aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3d8aa4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3d8aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3d8aa8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x3d8aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x3d8aac: 0xae060070  sw          $a2, 0x70($s0)
    ctx->pc = 0x3d8aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 6));
    // 0x3d8ab0: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x3d8ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x3d8ab4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3d8ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3d8ab8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3d8ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x3d8abc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d8abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d8ac0: 0x94730000  lhu         $s3, 0x0($v1)
    ctx->pc = 0x3d8ac0u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d8ac4: 0xa4930000  sh          $s3, 0x0($a0)
    ctx->pc = 0x3d8ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x3d8ac8: 0x9602007c  lhu         $v0, 0x7C($s0)
    ctx->pc = 0x3d8ac8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8acc: 0x14c0ffea  bnez        $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3D8ACCu;
    {
        const bool branch_taken_0x3d8acc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8ACCu;
        // 0x3d8ad0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8acc) {
            ctx->pc = 0x3D8A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8a78;
        }
    }
    ctx->pc = 0x3D8AD4u;
    // 0x3d8ad4: 0x24e20002  addiu       $v0, $a3, 0x2
    ctx->pc = 0x3d8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3d8ad8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3D8AD8u;
    {
        const bool branch_taken_0x3d8ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8AD8u;
        // 0x3d8adc: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8ad8) {
            ctx->pc = 0x3D8B98u;
            goto label_3d8b98;
        }
    }
    ctx->pc = 0x3D8AE0u;
label_3d8ae0:
    // 0x3d8ae0: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x3d8ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3d8ae4:
    // 0x3d8ae4: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x3d8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8ae8: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x3d8ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3d8aec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d8af0: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3d8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x3d8af4: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x3d8af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x3d8af8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d8afc: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x3d8afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3d8b00: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3d8b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d8b04: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x3d8b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3d8b08: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3d8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x3d8b0c: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3d8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3d8b10: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3d8b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3d8b14: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3d8b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3d8b18: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3d8b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3d8b1c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3D8B1Cu;
    {
        const bool branch_taken_0x3d8b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B1Cu;
        // 0x3d8b20: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8b1c) {
            ctx->pc = 0x3D8B98u;
            goto label_3d8b98;
        }
    }
    ctx->pc = 0x3D8B24u;
label_3d8b24:
    // 0x3d8b24: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x3d8b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8b28: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x3d8b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3d8b2c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x3d8b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3d8b30: 0x8e0716b4  lw          $a3, 0x16B4($s0)
    ctx->pc = 0x3d8b30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5812)));
    // 0x3d8b34: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x3d8b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3d8b38: 0x8e0216a8  lw          $v0, 0x16A8($s0)
    ctx->pc = 0x3d8b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5800)));
    // 0x3d8b3c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3d8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d8b40: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d8b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d8b44: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3d8b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3d8b48: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x3d8b48u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d8b4c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3d8b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3d8b50: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3d8b50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d8b54: 0xae0816b0  sw          $t0, 0x16B0($s0)
    ctx->pc = 0x3d8b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5808), GPR_U32(ctx, 8));
    // 0x3d8b58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d8b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d8b5c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3d8b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3d8b60: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3d8b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d8b64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d8b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d8b68: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3d8b68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d8b6c: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3d8b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3d8b70: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x3d8b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8b74: 0x8e0216ac  lw          $v0, 0x16AC($s0)
    ctx->pc = 0x3d8b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5804)));
    // 0x3d8b78: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d8b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d8b7c: 0x8e0316b0  lw          $v1, 0x16B0($s0)
    ctx->pc = 0x3d8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5808)));
    // 0x3d8b80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d8b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d8b84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d8b88: 0xae040084  sw          $a0, 0x84($s0)
    ctx->pc = 0x3d8b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 4));
    // 0x3d8b8c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x3d8b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x3d8b90: 0xae05007c  sw          $a1, 0x7C($s0)
    ctx->pc = 0x3d8b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 5));
    // 0x3d8b94: 0x2c6e0001  sltiu       $t6, $v1, 0x1
    ctx->pc = 0x3d8b94u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3d8b98:
    // 0x3d8b98: 0x51c00033  beql        $t6, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x3D8B98u;
    {
        const bool branch_taken_0x3d8b98 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8b98) {
            ctx->pc = 0x3D8B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8B98u;
            // 0x3d8b9c: 0x8e020084  lw          $v0, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8C68u;
            goto label_3d8c68;
        }
    }
    ctx->pc = 0x3D8BA0u;
    // 0x3d8ba0: 0xde080068  ld          $t0, 0x68($s0)
    ctx->pc = 0x3d8ba0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3d8ba4: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8BA4u;
    {
        const bool branch_taken_0x3d8ba4 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x3D8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8BA4u;
        // 0x3d8ba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8ba4) {
            ctx->pc = 0x3D8BB8u;
            goto label_3d8bb8;
        }
    }
    ctx->pc = 0x3D8BACu;
    // 0x3d8bac: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3d8bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3d8bb0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x3d8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3d8bb4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3d8bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d8bb8:
    // 0x3d8bb8: 0x9e06007c  lwu         $a2, 0x7C($s0)
    ctx->pc = 0x3d8bb8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8bc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d8bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8bc4: 0xc0f6cdc  jal         func_3DB370
    ctx->pc = 0x3D8BC4u;
    SET_GPR_U32(ctx, 31, 0x3D8BCCu);
    ctx->pc = 0x3D8BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8BC4u;
    // 0x3d8bc8: 0xc8302f  dsubu       $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB370u, 0x3D8BC4u, 0x3D8BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8BCCu;
label_3d8bcc:
    // 0x3d8bcc: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x3d8bccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d8bd0: 0x9e04007c  lwu         $a0, 0x7C($s0)
    ctx->pc = 0x3d8bd0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8bd4: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x3d8bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3d8bd8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3d8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d8bdc: 0x8cb1001c  lw          $s1, 0x1C($a1)
    ctx->pc = 0x3d8bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3d8be0: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x3d8be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d8be4: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x3d8be4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x3d8be8: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D8BE8u;
    {
        const bool branch_taken_0x3d8be8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8BE8u;
        // 0x3d8bec: 0xfe040068  sd          $a0, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8be8) {
            ctx->pc = 0x3D8C54u;
            goto label_3d8c54;
        }
    }
    ctx->pc = 0x3D8BF0u;
    // 0x3d8bf0: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x3d8bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3d8bf4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d8bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8bf8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3D8BF8u;
    SET_GPR_U32(ctx, 31, 0x3D8C00u);
    ctx->pc = 0x3D8BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8BF8u;
    // 0x3d8bfc: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D8BF8u, 0x3D8C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8C00u;
label_3d8c00:
    // 0x3d8c00: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3d8c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3d8c04: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x3d8c04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3d8c08: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3d8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d8c0c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3d8c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3d8c10: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3d8c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3d8c14: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x3d8c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3d8c18: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3d8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d8c1c: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x3d8c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x3d8c20: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3d8c20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x3d8c24: 0xde440018  ld          $a0, 0x18($s2)
    ctx->pc = 0x3d8c24u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3d8c28: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3d8c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d8c2c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3d8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3d8c30: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x3d8c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3d8c34: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3d8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3d8c38: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x3d8c38u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x3d8c3c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3d8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d8c40: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x3d8c40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x3d8c44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8C44u;
    {
        const bool branch_taken_0x3d8c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C44u;
        // 0x3d8c48: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c44) {
            ctx->pc = 0x3D8C54u;
            goto label_3d8c54;
        }
    }
    ctx->pc = 0x3D8C4Cu;
    // 0x3d8c4c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d8c50: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x3d8c50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_3d8c54:
    // 0x3d8c54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d8c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d8c58: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3d8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3d8c5c: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x3D8C5Cu;
    {
        const bool branch_taken_0x3d8c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C5Cu;
        // 0x3d8c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c5c) {
            ctx->pc = 0x3D8D80u;
            goto label_3d8d80;
        }
    }
    ctx->pc = 0x3D8C64u;
label_3d8c64:
    // 0x3d8c64: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x3d8c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3d8c68:
    // 0x3d8c68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3d8c68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8c6c: 0x2c420106  sltiu       $v0, $v0, 0x106
    ctx->pc = 0x3d8c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)262) ? 1 : 0);
    // 0x3d8c70: 0x1040ff0b  beqz        $v0, . + 4 + (-0xF5 << 2)
    ctx->pc = 0x3D8C70u;
    {
        const bool branch_taken_0x3d8c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C70u;
        // 0x3d8c74: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c70) {
            ctx->pc = 0x3D88A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d88a0;
        }
    }
    ctx->pc = 0x3D8C78u;
    // 0x3d8c78: 0xc0f6032  jal         func_3D80C8
    ctx->pc = 0x3D8C78u;
    SET_GPR_U32(ctx, 31, 0x3D8C80u);
    ctx->pc = 0x3D8C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8C78u;
    // 0x3d8c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D80C8u;
    goto label_3d80c8;
    ctx->pc = 0x3D8C80u;
label_3d8c80:
    // 0x3d8c80: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3d8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3d8c84: 0x2c620106  sltiu       $v0, $v1, 0x106
    ctx->pc = 0x3d8c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)262) ? 1 : 0);
    // 0x3d8c88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8C88u;
    {
        const bool branch_taken_0x3d8c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8c88) {
            ctx->pc = 0x3D8C98u;
            goto label_3d8c98;
        }
    }
    ctx->pc = 0x3D8C90u;
    // 0x3d8c90: 0x12c0003b  beqz        $s6, . + 4 + (0x3B << 2)
    ctx->pc = 0x3D8C90u;
    {
        const bool branch_taken_0x3d8c90 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C90u;
        // 0x3d8c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c90) {
            ctx->pc = 0x3D8D80u;
            goto label_3d8d80;
        }
    }
    ctx->pc = 0x3D8C98u;
label_3d8c98:
    // 0x3d8c98: 0x1460ff01  bnez        $v1, . + 4 + (-0xFF << 2)
    ctx->pc = 0x3D8C98u;
    {
        const bool branch_taken_0x3d8c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C98u;
        // 0x3d8c9c: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c98) {
            ctx->pc = 0x3D88A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d88a0;
        }
    }
    ctx->pc = 0x3D8CA0u;
    // 0x3d8ca0: 0xde080068  ld          $t0, 0x68($s0)
    ctx->pc = 0x3d8ca0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3d8ca4: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8CA4u;
    {
        const bool branch_taken_0x3d8ca4 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x3D8CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8CA4u;
        // 0x3d8ca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8ca4) {
            ctx->pc = 0x3D8CB8u;
            goto label_3d8cb8;
        }
    }
    ctx->pc = 0x3D8CACu;
    // 0x3d8cac: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3d8cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3d8cb0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x3d8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3d8cb4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3d8cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d8cb8:
    // 0x3d8cb8: 0x9e06007c  lwu         $a2, 0x7C($s0)
    ctx->pc = 0x3d8cb8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8cbc: 0x3ac70004  xori        $a3, $s6, 0x4
    ctx->pc = 0x3d8cbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)4);
    // 0x3d8cc0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3d8cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8cc8: 0xc8302f  dsubu       $a2, $a2, $t0
    ctx->pc = 0x3d8cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 8));
    // 0x3d8ccc: 0xc0f6cdc  jal         func_3DB370
    ctx->pc = 0x3D8CCCu;
    SET_GPR_U32(ctx, 31, 0x3D8CD4u);
    ctx->pc = 0x3D8CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8CCCu;
    // 0x3d8cd0: 0x2ce70001  sltiu       $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB370u, 0x3D8CCCu, 0x3D8CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8CD4u;
label_3d8cd4:
    // 0x3d8cd4: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x3d8cd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d8cd8: 0x9e04007c  lwu         $a0, 0x7C($s0)
    ctx->pc = 0x3d8cd8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8cdc: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x3d8cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3d8ce0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3d8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d8ce4: 0x8cb1001c  lw          $s1, 0x1C($a1)
    ctx->pc = 0x3d8ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3d8ce8: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x3d8ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d8cec: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x3d8cecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x3d8cf0: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D8CF0u;
    {
        const bool branch_taken_0x3d8cf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8CF0u;
        // 0x3d8cf4: 0xfe040068  sd          $a0, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8cf0) {
            ctx->pc = 0x3D8D5Cu;
            goto label_3d8d5c;
        }
    }
    ctx->pc = 0x3D8CF8u;
    // 0x3d8cf8: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x3d8cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3d8cfc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d8cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8d00: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3D8D00u;
    SET_GPR_U32(ctx, 31, 0x3D8D08u);
    ctx->pc = 0x3D8D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8D00u;
    // 0x3d8d04: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D8D00u, 0x3D8D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8D08u;
label_3d8d08:
    // 0x3d8d08: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3d8d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3d8d0c: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x3d8d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3d8d10: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3d8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d8d14: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3d8d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3d8d18: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3d8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3d8d1c: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x3d8d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3d8d20: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3d8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d8d24: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x3d8d24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x3d8d28: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3d8d28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x3d8d2c: 0xde440018  ld          $a0, 0x18($s2)
    ctx->pc = 0x3d8d2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3d8d30: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3d8d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d8d34: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3d8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3d8d38: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x3d8d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3d8d3c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3d8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3d8d40: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x3d8d40u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x3d8d44: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3d8d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d8d48: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x3d8d48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x3d8d4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8D4Cu;
    {
        const bool branch_taken_0x3d8d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8D4Cu;
        // 0x3d8d50: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8d4c) {
            ctx->pc = 0x3D8D5Cu;
            goto label_3d8d5c;
        }
    }
    ctx->pc = 0x3D8D54u;
    // 0x3d8d54: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d8d58: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x3d8d58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_3d8d5c:
    // 0x3d8d5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d8d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d8d60: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3d8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3d8d64: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8D64u;
    {
        const bool branch_taken_0x3d8d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8D64u;
        // 0x3d8d68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8d64) {
            ctx->pc = 0x3D8D78u;
            goto label_3d8d78;
        }
    }
    ctx->pc = 0x3D8D6Cu;
    // 0x3d8d6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d8d70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8D70u;
    {
        const bool branch_taken_0x3d8d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8D70u;
        // 0x3d8d74: 0x13100b  movn        $v0, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8d70) {
            ctx->pc = 0x3D8D80u;
            goto label_3d8d80;
        }
    }
    ctx->pc = 0x3D8D78u;
label_3d8d78:
    // 0x3d8d78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d8d7c: 0x73100b  movn        $v0, $v1, $s3
    ctx->pc = 0x3d8d7cu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_3d8d80:
    // 0x3d8d80: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3d8d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3d8d84: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3d8d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d8d88: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3d8d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d8d8c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3d8d8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d8d90: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3d8d90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d8d94: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3d8d94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d8d98: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3d8d98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d8d9c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3d8d9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d8da0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3d8da0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d8da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8da8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8DA8u;
        // 0x3d8dac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8DB0u;
    // 0x3d8db0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3d8db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3d8db4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3d8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3d8db8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3d8db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3d8dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d8dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8dc0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3d8dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3d8dc4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3d8dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3d8dc8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d8dc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8dcc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3d8dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3d8dd0: 0x2474ce98  addiu       $s4, $v1, -0x3168
    ctx->pc = 0x3d8dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954648));
    // 0x3d8dd4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3d8dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3d8dd8: 0x261500a4  addiu       $s5, $s0, 0xA4
    ctx->pc = 0x3d8dd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    // 0x3d8ddc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3d8ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3d8de0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3d8de0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8de4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3d8de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3d8de8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3d8de8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d8dec: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3d8decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3d8df0: 0x261e0998  addiu       $fp, $s0, 0x998
    ctx->pc = 0x3d8df0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 2456));
    // 0x3d8df4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3d8df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3d8df8: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x3D8DF8u;
    {
        const bool branch_taken_0x3d8df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8DF8u;
        // 0x3d8dfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8df8) {
            ctx->pc = 0x3D9300u;
            goto label_3d9300;
        }
    }
    ctx->pc = 0x3D8E00u;
label_3d8e00:
    // 0x3d8e00: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3D8E00u;
    {
        const bool branch_taken_0x3d8e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8e00) {
            ctx->pc = 0x3D8E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8E00u;
            // 0x3d8e04: 0x8e030070  lw          $v1, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8E68u;
            goto label_3d8e68;
        }
    }
    ctx->pc = 0x3D8E08u;
    // 0x3d8e08: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x3d8e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8e0c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3d8e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3d8e10: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x3d8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3d8e14: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3d8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d8e18: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x3d8e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3d8e1c: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x3d8e1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3d8e20: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x3d8e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3d8e24: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3d8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3d8e28: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x3d8e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x3d8e2c: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x3d8e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3d8e30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3d8e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3d8e34: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x3d8e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3d8e38: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3d8e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3d8e3c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3d8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3d8e40: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3d8e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3d8e44: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x3d8e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x3d8e48: 0x94930000  lhu         $s3, 0x0($a0)
    ctx->pc = 0x3d8e48u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d8e4c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3d8e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3d8e50: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3d8e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d8e54: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x3d8e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x3d8e58: 0xa4b30000  sh          $s3, 0x0($a1)
    ctx->pc = 0x3d8e58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x3d8e5c: 0x9602007c  lhu         $v0, 0x7C($s0)
    ctx->pc = 0x3d8e5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8e60: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3d8e60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d8e64: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x3d8e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3d8e68:
    // 0x3d8e68: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x3d8e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d8e6c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x3d8e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3d8e70: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x3d8e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x3d8e74: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x3d8e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x3d8e78: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x3D8E78u;
    {
        const bool branch_taken_0x3d8e78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E78u;
        // 0x3d8e7c: 0xae110070  sw          $s1, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8e78) {
            ctx->pc = 0x3D8F04u;
            goto label_3d8f04;
        }
    }
    ctx->pc = 0x3D8E80u;
    // 0x3d8e80: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x3d8e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x3d8e84: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3d8e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d8e88: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3D8E88u;
    {
        const bool branch_taken_0x3d8e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8e88) {
            ctx->pc = 0x3D8E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8E88u;
            // 0x3d8e8c: 0x8e030088  lw          $v1, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8F08u;
            goto label_3d8f08;
        }
    }
    ctx->pc = 0x3D8E90u;
    // 0x3d8e90: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x3d8e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8e94: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3d8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3d8e98: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x3d8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3d8e9c: 0x2442fefa  addiu       $v0, $v0, -0x106
    ctx->pc = 0x3d8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967034));
    // 0x3d8ea0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3d8ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d8ea4: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3D8EA4u;
    {
        const bool branch_taken_0x3d8ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8ea4) {
            ctx->pc = 0x3D8EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8EA4u;
            // 0x3d8ea8: 0x8e030088  lw          $v1, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8F08u;
            goto label_3d8f08;
        }
    }
    ctx->pc = 0x3D8EACu;
    // 0x3d8eac: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x3d8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x3d8eb0: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8EB0u;
    {
        const bool branch_taken_0x3d8eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3D8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8EB0u;
        // 0x3d8eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8eb0) {
            ctx->pc = 0x3D8EC4u;
            goto label_3d8ec4;
        }
    }
    ctx->pc = 0x3D8EB8u;
    // 0x3d8eb8: 0xc0f5fa4  jal         func_3D7E90
    ctx->pc = 0x3D8EB8u;
    SET_GPR_U32(ctx, 31, 0x3D8EC0u);
    ctx->pc = 0x3D8EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8EB8u;
    // 0x3d8ebc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7E90u, 0x3D8EB8u, 0x3D8EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8EC0u;
label_3d8ec0:
    // 0x3d8ec0: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x3d8ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_3d8ec4:
    // 0x3d8ec4: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x3d8ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3d8ec8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x3d8ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3d8ecc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3D8ECCu;
    {
        const bool branch_taken_0x3d8ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8ecc) {
            ctx->pc = 0x3D8ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8ECCu;
            // 0x3d8ed0: 0x8e030088  lw          $v1, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8F08u;
            goto label_3d8f08;
        }
    }
    ctx->pc = 0x3D8ED4u;
    // 0x3d8ed4: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x3d8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x3d8ed8: 0x10570009  beq         $v0, $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D8ED8u;
    {
        const bool branch_taken_0x3d8ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x3D8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8ED8u;
        // 0x3d8edc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8ed8) {
            ctx->pc = 0x3D8F00u;
            goto label_3d8f00;
        }
    }
    ctx->pc = 0x3D8EE0u;
    // 0x3d8ee0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D8EE0u;
    {
        const bool branch_taken_0x3d8ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d8ee0) {
            ctx->pc = 0x3D8EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8EE0u;
            // 0x3d8ee4: 0x8e030088  lw          $v1, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8F08u;
            goto label_3d8f08;
        }
    }
    ctx->pc = 0x3D8EE8u;
    // 0x3d8ee8: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x3d8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8eec: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x3d8eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3d8ef0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3d8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d8ef4: 0x2c421001  sltiu       $v0, $v0, 0x1001
    ctx->pc = 0x3d8ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
    // 0x3d8ef8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8EF8u;
    {
        const bool branch_taken_0x3d8ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8ef8) {
            ctx->pc = 0x3D8EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8EF8u;
            // 0x3d8efc: 0x8e030088  lw          $v1, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8F08u;
            goto label_3d8f08;
        }
    }
    ctx->pc = 0x3D8F00u;
label_3d8f00:
    // 0x3d8f00: 0xae110070  sw          $s1, 0x70($s0)
    ctx->pc = 0x3d8f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
label_3d8f04:
    // 0x3d8f04: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x3d8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_3d8f08:
    // 0x3d8f08: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x3d8f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d8f0c: 0x544000a3  bnel        $v0, $zero, . + 4 + (0xA3 << 2)
    ctx->pc = 0x3D8F0Cu;
    {
        const bool branch_taken_0x3d8f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8f0c) {
            ctx->pc = 0x3D8F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8F0Cu;
            // 0x3d8f10: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D919Cu;
            goto label_3d919c;
        }
    }
    ctx->pc = 0x3D8F14u;
    // 0x3d8f14: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x3d8f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3d8f18: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3d8f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d8f1c: 0x5440009f  bnel        $v0, $zero, . + 4 + (0x9F << 2)
    ctx->pc = 0x3D8F1Cu;
    {
        const bool branch_taken_0x3d8f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8f1c) {
            ctx->pc = 0x3D8F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8F1Cu;
            // 0x3d8f20: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D919Cu;
            goto label_3d919c;
        }
    }
    ctx->pc = 0x3D8F24u;
    // 0x3d8f24: 0x96020074  lhu         $v0, 0x74($s0)
    ctx->pc = 0x3d8f24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x3d8f28: 0x9604007c  lhu         $a0, 0x7C($s0)
    ctx->pc = 0x3d8f28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8f2c: 0x92070088  lbu         $a3, 0x88($s0)
    ctx->pc = 0x3d8f2cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x3d8f30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d8f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d8f34: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3d8f34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d8f38: 0x8e0816b0  lw          $t0, 0x16B0($s0)
    ctx->pc = 0x3d8f38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5808)));
    // 0x3d8f3c: 0x24e7fffd  addiu       $a3, $a3, -0x3
    ctx->pc = 0x3d8f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967293));
    // 0x3d8f40: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3d8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3d8f44: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x3d8f44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3d8f48: 0x2442d098  addiu       $v0, $v0, -0x2F68
    ctx->pc = 0x3d8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955160));
    // 0x3d8f4c: 0x8e0316b4  lw          $v1, 0x16B4($s0)
    ctx->pc = 0x3d8f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5812)));
    // 0x3d8f50: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x3d8f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3d8f54: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x3d8f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3d8f58: 0x8e0616a8  lw          $a2, 0x16A8($s0)
    ctx->pc = 0x3d8f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5800)));
    // 0x3d8f5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d8f60: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3d8f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3d8f64: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x3d8f64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d8f68: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3d8f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3d8f6c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3d8f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d8f70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3d8f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3d8f74: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x3d8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3d8f78: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d8f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d8f7c: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x3d8f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d8f80: 0x24630101  addiu       $v1, $v1, 0x101
    ctx->pc = 0x3d8f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 257));
    // 0x3d8f84: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x3d8f84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3d8f88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d8f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d8f8c: 0xae0816b0  sw          $t0, 0x16B0($s0)
    ctx->pc = 0x3d8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5808), GPR_U32(ctx, 8));
    // 0x3d8f90: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3d8f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d8f94: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3d8f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3d8f98: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3d8f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3d8f9c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3d8f9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d8fa0: 0x24a9fffd  addiu       $t1, $a1, -0x3
    ctx->pc = 0x3d8fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x3d8fa4: 0x2c850100  sltiu       $a1, $a0, 0x100
    ctx->pc = 0x3d8fa4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3d8fa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d8fac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8FACu;
    {
        const bool branch_taken_0x3d8fac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8FACu;
        // 0x3d8fb0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8fac) {
            ctx->pc = 0x3D8FC0u;
            goto label_3d8fc0;
        }
    }
    ctx->pc = 0x3D8FB4u;
    // 0x3d8fb4: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x3d8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x3d8fb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8FB8u;
    {
        const bool branch_taken_0x3d8fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8FB8u;
        // 0x3d8fbc: 0x90430000  lbu         $v1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8fb8) {
            ctx->pc = 0x3D8FCCu;
            goto label_3d8fcc;
        }
    }
    ctx->pc = 0x3D8FC0u;
label_3d8fc0:
    // 0x3d8fc0: 0x411c2  srl         $v0, $a0, 7
    ctx->pc = 0x3d8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
    // 0x3d8fc4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3d8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3d8fc8: 0x90430100  lbu         $v1, 0x100($v0)
    ctx->pc = 0x3d8fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 256)));
label_3d8fcc:
    // 0x3d8fcc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d8fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d8fd0: 0x3c33821  addu        $a3, $fp, $v1
    ctx->pc = 0x3d8fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x3d8fd4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8FD4u;
    {
        const bool branch_taken_0x3d8fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8FD4u;
        // 0x3d8fd8: 0x26060998  addiu       $a2, $s0, 0x998 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8fd4) {
            ctx->pc = 0x3D8FE8u;
            goto label_3d8fe8;
        }
    }
    ctx->pc = 0x3D8FDCu;
    // 0x3d8fdc: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x3d8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x3d8fe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8FE0u;
    {
        const bool branch_taken_0x3d8fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8FE0u;
        // 0x3d8fe4: 0x90430000  lbu         $v1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8fe0) {
            ctx->pc = 0x3D8FF4u;
            goto label_3d8ff4;
        }
    }
    ctx->pc = 0x3D8FE8u;
label_3d8fe8:
    // 0x3d8fe8: 0x411c2  srl         $v0, $a0, 7
    ctx->pc = 0x3d8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
    // 0x3d8fec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3d8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3d8ff0: 0x90430100  lbu         $v1, 0x100($v0)
    ctx->pc = 0x3d8ff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 256)));
label_3d8ff4:
    // 0x3d8ff4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3d8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d8ff8: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x3d8ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3d8ffc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3d8ffcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d9000: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d9004: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x3d9004u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d9008: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3d9008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3d900c: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x3d900cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x3d9010: 0x8e0216ac  lw          $v0, 0x16AC($s0)
    ctx->pc = 0x3d9010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5804)));
    // 0x3d9014: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9018: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3d9018u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d901c: 0x8e0416b0  lw          $a0, 0x16B0($s0)
    ctx->pc = 0x3d901cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5808)));
    // 0x3d9020: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d9020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d9024: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x3d9024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3d9028: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x3d9028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x3d902c: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x3d902cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x3d9030: 0xae050088  sw          $a1, 0x88($s0)
    ctx->pc = 0x3d9030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 5));
    // 0x3d9034: 0x2c880001  sltiu       $t0, $a0, 0x1
    ctx->pc = 0x3d9034u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3d9038:
    // 0x3d9038: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x3d9038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d903c: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x3d903cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d9040: 0x127102b  sltu        $v0, $t1, $a3
    ctx->pc = 0x3d9040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d9044: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D9044u;
    {
        const bool branch_taken_0x3d9044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9044u;
        // 0x3d9048: 0xae07007c  sw          $a3, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9044) {
            ctx->pc = 0x3D90A4u;
            goto label_3d90a4;
        }
    }
    ctx->pc = 0x3D904Cu;
    // 0x3d904c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3d904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3d9050: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3d9050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3d9054: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3d9054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3d9058: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x3d9058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3d905c: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x3d905cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3d9060: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x3d9060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x3d9064: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3d9064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3d9068: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x3d9068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x3d906c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x3d906cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3d9070: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3d9070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3d9074: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x3d9074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3d9078: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x3d9078u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3d907c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3d907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3d9080: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3d9080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3d9084: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x3d9084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x3d9088: 0x94b30000  lhu         $s3, 0x0($a1)
    ctx->pc = 0x3d9088u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d908c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3d908cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3d9090: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d9090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d9094: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x3d9094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x3d9098: 0xa4730000  sh          $s3, 0x0($v1)
    ctx->pc = 0x3d9098u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x3d909c: 0x9602007c  lhu         $v0, 0x7C($s0)
    ctx->pc = 0x3d909cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d90a0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x3d90a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_3d90a4:
    // 0x3d90a4: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x3d90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x3d90a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d90ac: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3D90ACu;
    {
        const bool branch_taken_0x3d90ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D90B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D90ACu;
        // 0x3d90b0: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d90ac) {
            ctx->pc = 0x3D9038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9038;
        }
    }
    ctx->pc = 0x3D90B4u;
    // 0x3d90b4: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x3d90b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d90b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d90b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d90bc: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x3d90bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x3d90c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d90c4: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x3d90c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x3d90c8: 0x1100008d  beqz        $t0, . + 4 + (0x8D << 2)
    ctx->pc = 0x3D90C8u;
    {
        const bool branch_taken_0x3d90c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D90C8u;
        // 0x3d90cc: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d90c8) {
            ctx->pc = 0x3D9300u;
            goto label_3d9300;
        }
    }
    ctx->pc = 0x3D90D0u;
    // 0x3d90d0: 0xde080068  ld          $t0, 0x68($s0)
    ctx->pc = 0x3d90d0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3d90d4: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D90D4u;
    {
        const bool branch_taken_0x3d90d4 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x3D90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D90D4u;
        // 0x3d90d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d90d4) {
            ctx->pc = 0x3D90E8u;
            goto label_3d90e8;
        }
    }
    ctx->pc = 0x3D90DCu;
    // 0x3d90dc: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3d90dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3d90e0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x3d90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3d90e4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3d90e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d90e8:
    // 0x3d90e8: 0x9e06007c  lwu         $a2, 0x7C($s0)
    ctx->pc = 0x3d90e8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d90ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d90ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d90f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d90f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d90f4: 0xc0f6cdc  jal         func_3DB370
    ctx->pc = 0x3D90F4u;
    SET_GPR_U32(ctx, 31, 0x3D90FCu);
    ctx->pc = 0x3D90F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D90F4u;
    // 0x3d90f8: 0xc8302f  dsubu       $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB370u, 0x3D90F4u, 0x3D90FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D90FCu;
label_3d90fc:
    // 0x3d90fc: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x3d90fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d9100: 0x9e04007c  lwu         $a0, 0x7C($s0)
    ctx->pc = 0x3d9100u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d9104: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x3d9104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3d9108: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3d9108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d910c: 0x8cb1001c  lw          $s1, 0x1C($a1)
    ctx->pc = 0x3d910cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3d9110: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x3d9110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d9114: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x3d9114u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x3d9118: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D9118u;
    {
        const bool branch_taken_0x3d9118 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9118u;
        // 0x3d911c: 0xfe040068  sd          $a0, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9118) {
            ctx->pc = 0x3D9184u;
            goto label_3d9184;
        }
    }
    ctx->pc = 0x3D9120u;
    // 0x3d9120: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x3d9120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3d9124: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d9124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9128: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3D9128u;
    SET_GPR_U32(ctx, 31, 0x3D9130u);
    ctx->pc = 0x3D912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9128u;
    // 0x3d912c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D9128u, 0x3D9130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9130u;
label_3d9130:
    // 0x3d9130: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3d9130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3d9134: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x3d9134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3d9138: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3d9138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d913c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3d913cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3d9140: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3d9140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3d9144: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x3d9144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3d9148: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3d9148u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d914c: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x3d914cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x3d9150: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3d9150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x3d9154: 0xde440018  ld          $a0, 0x18($s2)
    ctx->pc = 0x3d9154u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3d9158: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3d9158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d915c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3d915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3d9160: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x3d9160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3d9164: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3d9164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3d9168: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x3d9168u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x3d916c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3d916cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d9170: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x3d9170u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x3d9174: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9174u;
    {
        const bool branch_taken_0x3d9174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9174u;
        // 0x3d9178: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9174) {
            ctx->pc = 0x3D9184u;
            goto label_3d9184;
        }
    }
    ctx->pc = 0x3D917Cu;
    // 0x3d917c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d9180: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x3d9180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_3d9184:
    // 0x3d9184: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d9184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d9188: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3d9188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3d918c: 0x5460005d  bnel        $v1, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x3D918Cu;
    {
        const bool branch_taken_0x3d918c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d918c) {
            ctx->pc = 0x3D9190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D918Cu;
            // 0x3d9190: 0x8e020084  lw          $v0, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9304u;
            goto label_3d9304;
        }
    }
    ctx->pc = 0x3D9194u;
    // 0x3d9194: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x3D9194u;
    {
        const bool branch_taken_0x3d9194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9194u;
        // 0x3d9198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9194) {
            ctx->pc = 0x3D9478u;
            goto label_3d9478;
        }
    }
    ctx->pc = 0x3D919Cu;
label_3d919c:
    // 0x3d919c: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x3D919Cu;
    {
        const bool branch_taken_0x3d919c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d919c) {
            ctx->pc = 0x3D91A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D919Cu;
            // 0x3d91a0: 0x8e02007c  lw          $v0, 0x7C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D92E8u;
            goto label_3d92e8;
        }
    }
    ctx->pc = 0x3D91A4u;
    // 0x3d91a4: 0x8e0616b0  lw          $a2, 0x16B0($s0)
    ctx->pc = 0x3d91a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5808)));
    // 0x3d91a8: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x3d91a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3d91ac: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x3d91acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d91b0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x3d91b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3d91b4: 0x8e0716b4  lw          $a3, 0x16B4($s0)
    ctx->pc = 0x3d91b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5812)));
    // 0x3d91b8: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x3d91b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3d91bc: 0x8e0216a8  lw          $v0, 0x16A8($s0)
    ctx->pc = 0x3d91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5800)));
    // 0x3d91c0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3d91c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3d91c4: 0x90a4ffff  lbu         $a0, -0x1($a1)
    ctx->pc = 0x3d91c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3d91c8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3d91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3d91cc: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x3d91ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d91d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3d91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3d91d4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3d91d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d91d8: 0xae0816b0  sw          $t0, 0x16B0($s0)
    ctx->pc = 0x3d91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5808), GPR_U32(ctx, 8));
    // 0x3d91dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d91dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3d91e0: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x3d91e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x3d91e4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3d91e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d91e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d91ec: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3d91ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d91f0: 0x8e0316ac  lw          $v1, 0x16AC($s0)
    ctx->pc = 0x3d91f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5804)));
    // 0x3d91f4: 0x8e0216b0  lw          $v0, 0x16B0($s0)
    ctx->pc = 0x3d91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5808)));
    // 0x3d91f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d91fc: 0x5443002f  bnel        $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3D91FCu;
    {
        const bool branch_taken_0x3d91fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d91fc) {
            ctx->pc = 0x3D9200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D91FCu;
            // 0x3d9200: 0x8e02007c  lw          $v0, 0x7C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D92BCu;
            goto label_3d92bc;
        }
    }
    ctx->pc = 0x3D9204u;
    // 0x3d9204: 0xde080068  ld          $t0, 0x68($s0)
    ctx->pc = 0x3d9204u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3d9208: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D9208u;
    {
        const bool branch_taken_0x3d9208 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x3D920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9208u;
        // 0x3d920c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9208) {
            ctx->pc = 0x3D921Cu;
            goto label_3d921c;
        }
    }
    ctx->pc = 0x3D9210u;
    // 0x3d9210: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3d9210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3d9214: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x3d9214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3d9218: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3d9218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d921c:
    // 0x3d921c: 0x9e06007c  lwu         $a2, 0x7C($s0)
    ctx->pc = 0x3d921cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d9220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d9224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9228: 0xc0f6cdc  jal         func_3DB370
    ctx->pc = 0x3D9228u;
    SET_GPR_U32(ctx, 31, 0x3D9230u);
    ctx->pc = 0x3D922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9228u;
    // 0x3d922c: 0xc8302f  dsubu       $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB370u, 0x3D9228u, 0x3D9230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9230u;
label_3d9230:
    // 0x3d9230: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x3d9230u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d9234: 0x9e04007c  lwu         $a0, 0x7C($s0)
    ctx->pc = 0x3d9234u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d9238: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x3d9238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3d923c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3d923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d9240: 0x8cb1001c  lw          $s1, 0x1C($a1)
    ctx->pc = 0x3d9240u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3d9244: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x3d9244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d9248: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x3d9248u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x3d924c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D924Cu;
    {
        const bool branch_taken_0x3d924c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D924Cu;
        // 0x3d9250: 0xfe040068  sd          $a0, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d924c) {
            ctx->pc = 0x3D92B8u;
            goto label_3d92b8;
        }
    }
    ctx->pc = 0x3D9254u;
    // 0x3d9254: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x3d9254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3d9258: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d9258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d925c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3D925Cu;
    SET_GPR_U32(ctx, 31, 0x3D9264u);
    ctx->pc = 0x3D9260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D925Cu;
    // 0x3d9260: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D925Cu, 0x3D9264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9264u;
label_3d9264:
    // 0x3d9264: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3d9264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3d9268: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x3d9268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3d926c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3d926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d9270: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3d9270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3d9274: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3d9274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3d9278: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x3d9278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3d927c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3d927cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d9280: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x3d9280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x3d9284: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3d9284u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x3d9288: 0xde440018  ld          $a0, 0x18($s2)
    ctx->pc = 0x3d9288u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3d928c: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3d928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d9290: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3d9290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3d9294: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x3d9294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3d9298: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3d9298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3d929c: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x3d929cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x3d92a0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3d92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d92a4: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x3d92a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x3d92a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D92A8u;
    {
        const bool branch_taken_0x3d92a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D92A8u;
        // 0x3d92ac: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d92a8) {
            ctx->pc = 0x3D92B8u;
            goto label_3d92b8;
        }
    }
    ctx->pc = 0x3D92B0u;
    // 0x3d92b0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d92b4: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x3d92b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_3d92b8:
    // 0x3d92b8: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x3d92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3d92bc:
    // 0x3d92bc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3d92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3d92c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d92c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d92c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d92c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d92c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d92cc: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x3d92ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x3d92d0: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x3d92d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x3d92d4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3d92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3d92d8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3D92D8u;
    {
        const bool branch_taken_0x3d92d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d92d8) {
            ctx->pc = 0x3D92DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D92D8u;
            // 0x3d92dc: 0x8e020084  lw          $v0, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9304u;
            goto label_3d9304;
        }
    }
    ctx->pc = 0x3D92E0u;
    // 0x3d92e0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x3D92E0u;
    {
        const bool branch_taken_0x3d92e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D92E0u;
        // 0x3d92e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d92e0) {
            ctx->pc = 0x3D9478u;
            goto label_3d9478;
        }
    }
    ctx->pc = 0x3D92E8u;
label_3d92e8:
    // 0x3d92e8: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3d92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3d92ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d92f0: 0xae170078  sw          $s7, 0x78($s0)
    ctx->pc = 0x3d92f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 23));
    // 0x3d92f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d92f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d92f8: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x3d92f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x3d92fc: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x3d92fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_3d9300:
    // 0x3d9300: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x3d9300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3d9304:
    // 0x3d9304: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3d9304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9308: 0x2c420106  sltiu       $v0, $v0, 0x106
    ctx->pc = 0x3d9308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)262) ? 1 : 0);
    // 0x3d930c: 0x1040febc  beqz        $v0, . + 4 + (-0x144 << 2)
    ctx->pc = 0x3D930Cu;
    {
        const bool branch_taken_0x3d930c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D930Cu;
        // 0x3d9310: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d930c) {
            ctx->pc = 0x3D8E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8e00;
        }
    }
    ctx->pc = 0x3D9314u;
    // 0x3d9314: 0xc0f6032  jal         func_3D80C8
    ctx->pc = 0x3D9314u;
    SET_GPR_U32(ctx, 31, 0x3D931Cu);
    ctx->pc = 0x3D9318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9314u;
    // 0x3d9318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D80C8u;
    goto label_3d80c8;
    ctx->pc = 0x3D931Cu;
label_3d931c:
    // 0x3d931c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3d931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3d9320: 0x2c620106  sltiu       $v0, $v1, 0x106
    ctx->pc = 0x3d9320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)262) ? 1 : 0);
    // 0x3d9324: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9324u;
    {
        const bool branch_taken_0x3d9324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9324) {
            ctx->pc = 0x3D9334u;
            goto label_3d9334;
        }
    }
    ctx->pc = 0x3D932Cu;
    // 0x3d932c: 0x12c00052  beqz        $s6, . + 4 + (0x52 << 2)
    ctx->pc = 0x3D932Cu;
    {
        const bool branch_taken_0x3d932c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D932Cu;
        // 0x3d9330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d932c) {
            ctx->pc = 0x3D9478u;
            goto label_3d9478;
        }
    }
    ctx->pc = 0x3D9334u;
label_3d9334:
    // 0x3d9334: 0x1460feb2  bnez        $v1, . + 4 + (-0x14E << 2)
    ctx->pc = 0x3D9334u;
    {
        const bool branch_taken_0x3d9334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9334u;
        // 0x3d9338: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9334) {
            ctx->pc = 0x3D8E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8e00;
        }
    }
    ctx->pc = 0x3D933Cu;
    // 0x3d933c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x3d933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x3d9340: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3D9340u;
    {
        const bool branch_taken_0x3d9340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9340u;
        // 0x3d9344: 0x260700a4  addiu       $a3, $s0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9340) {
            ctx->pc = 0x3D9398u;
            goto label_3d9398;
        }
    }
    ctx->pc = 0x3D9348u;
    // 0x3d9348: 0x8e0616b0  lw          $a2, 0x16B0($s0)
    ctx->pc = 0x3d9348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5808)));
    // 0x3d934c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3d934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3d9350: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x3d9350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d9354: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x3d9354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3d9358: 0x8e0816b4  lw          $t0, 0x16B4($s0)
    ctx->pc = 0x3d9358u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5812)));
    // 0x3d935c: 0x24c90001  addiu       $t1, $a2, 0x1
    ctx->pc = 0x3d935cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3d9360: 0x8e0216a8  lw          $v0, 0x16A8($s0)
    ctx->pc = 0x3d9360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5800)));
    // 0x3d9364: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3d9364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3d9368: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x3d9368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3d936c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3d936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3d9370: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x3d9370u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9374: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3d9374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3d9378: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3d9378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d937c: 0xae0916b0  sw          $t1, 0x16B0($s0)
    ctx->pc = 0x3d937cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5808), GPR_U32(ctx, 9));
    // 0x3d9380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d9380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d9384: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x3d9384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3d9388: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x3d9388u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3d938c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d9390: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x3d9390u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d9394: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x3d9394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_3d9398:
    // 0x3d9398: 0xde080068  ld          $t0, 0x68($s0)
    ctx->pc = 0x3d9398u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3d939c: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D939Cu;
    {
        const bool branch_taken_0x3d939c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x3D93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D939Cu;
        // 0x3d93a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d939c) {
            ctx->pc = 0x3D93B0u;
            goto label_3d93b0;
        }
    }
    ctx->pc = 0x3D93A4u;
    // 0x3d93a4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3d93a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3d93a8: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x3d93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3d93ac: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3d93acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d93b0:
    // 0x3d93b0: 0x9e06007c  lwu         $a2, 0x7C($s0)
    ctx->pc = 0x3d93b0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d93b4: 0x3ac70004  xori        $a3, $s6, 0x4
    ctx->pc = 0x3d93b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)4);
    // 0x3d93b8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3d93b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d93bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d93bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d93c0: 0xc8302f  dsubu       $a2, $a2, $t0
    ctx->pc = 0x3d93c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 8));
    // 0x3d93c4: 0xc0f6cdc  jal         func_3DB370
    ctx->pc = 0x3D93C4u;
    SET_GPR_U32(ctx, 31, 0x3D93CCu);
    ctx->pc = 0x3D93C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D93C4u;
    // 0x3d93c8: 0x2ce70001  sltiu       $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB370u, 0x3D93C4u, 0x3D93CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D93CCu;
label_3d93cc:
    // 0x3d93cc: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x3d93ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d93d0: 0x9e04007c  lwu         $a0, 0x7C($s0)
    ctx->pc = 0x3d93d0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d93d4: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x3d93d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3d93d8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3d93d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d93dc: 0x8cb1001c  lw          $s1, 0x1C($a1)
    ctx->pc = 0x3d93dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3d93e0: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x3d93e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d93e4: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x3d93e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x3d93e8: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D93E8u;
    {
        const bool branch_taken_0x3d93e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D93E8u;
        // 0x3d93ec: 0xfe040068  sd          $a0, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d93e8) {
            ctx->pc = 0x3D9454u;
            goto label_3d9454;
        }
    }
    ctx->pc = 0x3D93F0u;
    // 0x3d93f0: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x3d93f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3d93f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d93f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d93f8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3D93F8u;
    SET_GPR_U32(ctx, 31, 0x3D9400u);
    ctx->pc = 0x3D93FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D93F8u;
    // 0x3d93fc: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D93F8u, 0x3D9400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9400u;
label_3d9400:
    // 0x3d9400: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3d9400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3d9404: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x3d9404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3d9408: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3d9408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d940c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3d940cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3d9410: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3d9410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3d9414: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x3d9414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3d9418: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3d9418u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d941c: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x3d941cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x3d9420: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3d9420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x3d9424: 0xde440018  ld          $a0, 0x18($s2)
    ctx->pc = 0x3d9424u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3d9428: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3d9428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d942c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3d942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3d9430: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x3d9430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3d9434: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3d9434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3d9438: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x3d9438u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x3d943c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3d943cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d9440: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x3d9440u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x3d9444: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9444u;
    {
        const bool branch_taken_0x3d9444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9444u;
        // 0x3d9448: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9444) {
            ctx->pc = 0x3D9454u;
            goto label_3d9454;
        }
    }
    ctx->pc = 0x3D944Cu;
    // 0x3d944c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d9450: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x3d9450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_3d9454:
    // 0x3d9454: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d9454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d9458: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3d9458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3d945c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D945Cu;
    {
        const bool branch_taken_0x3d945c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D945Cu;
        // 0x3d9460: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d945c) {
            ctx->pc = 0x3D9470u;
            goto label_3d9470;
        }
    }
    ctx->pc = 0x3D9464u;
    // 0x3d9464: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d9464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d9468: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9468u;
    {
        const bool branch_taken_0x3d9468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9468u;
        // 0x3d946c: 0x13100b  movn        $v0, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9468) {
            ctx->pc = 0x3D9478u;
            goto label_3d9478;
        }
    }
    ctx->pc = 0x3D9470u;
label_3d9470:
    // 0x3d9470: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d9470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d9474: 0x73100b  movn        $v0, $v1, $s3
    ctx->pc = 0x3d9474u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_3d9478:
    // 0x3d9478: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3d9478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3d947c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3d947cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d9480: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3d9480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d9484: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3d9484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d9488: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3d9488u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d948c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3d948cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d9490: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3d9490u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d9494: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3d9494u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d9498: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3d9498u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d949c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d949cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d94a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D94A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94A0u;
        // 0x3d94a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D94A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D94A8u;
}
