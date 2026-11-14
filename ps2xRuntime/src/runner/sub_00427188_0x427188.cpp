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

// Function: sub_00427188
// Address: 0x427188 - 0x4272d0
void sub_00427188_0x427188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00427188_0x427188");
#endif

    switch (ctx->pc) {
        case 0x4271d0u: goto label_4271d0;
        case 0x4271e4u: goto label_4271e4;
        case 0x4271fcu: goto label_4271fc;
        case 0x427210u: goto label_427210;
        case 0x427224u: goto label_427224;
        case 0x427238u: goto label_427238;
        case 0x42724cu: goto label_42724c;
        case 0x427260u: goto label_427260;
        case 0x427274u: goto label_427274;
        case 0x42729cu: goto label_42729c;
        default: break;
    }

    ctx->pc = 0x427188u;

label_427188:
    // 0x427188: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x427188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x42718c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x42718cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x427190: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x427190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x427194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x427194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427198: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x427198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x42719c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x42719cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4271a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4271a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4271a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4271a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4271a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4271a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4271ac: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4271acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x4271b0: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x4271B0u;
    {
        const bool branch_taken_0x4271b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4271B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4271B0u;
        // 0x4271b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4271b0) {
            ctx->pc = 0x4272A4u;
            goto label_4272a4;
        }
    }
    ctx->pc = 0x4271B8u;
    // 0x4271b8: 0x18e00034  blez        $a3, . + 4 + (0x34 << 2)
    ctx->pc = 0x4271B8u;
    {
        const bool branch_taken_0x4271b8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x4271BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4271B8u;
        // 0x4271bc: 0x2614001c  addiu       $s4, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4271b8) {
            ctx->pc = 0x42728Cu;
            goto label_42728c;
        }
    }
    ctx->pc = 0x4271C0u;
    // 0x4271c0: 0x2615005c  addiu       $s5, $s0, 0x5C
    ctx->pc = 0x4271c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x4271c4: 0x24f2ffff  addiu       $s2, $a3, -0x1
    ctx->pc = 0x4271c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4271c8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x4271c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4271cc: 0x0  nop
    ctx->pc = 0x4271ccu;
    // NOP
label_4271d0:
    // 0x4271d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4271d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4271d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4271d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4271d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4271d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4271dc: 0xc109c62  jal         func_427188
    ctx->pc = 0x4271DCu;
    SET_GPR_U32(ctx, 31, 0x4271E4u);
    ctx->pc = 0x4271E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4271DCu;
    // 0x4271e0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    goto label_427188;
    ctx->pc = 0x4271E4u;
label_4271e4:
    // 0x4271e4: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x4271e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x4271e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4271e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4271ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4271ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4271f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4271f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4271f4: 0xc109c62  jal         func_427188
    ctx->pc = 0x4271F4u;
    SET_GPR_U32(ctx, 31, 0x4271FCu);
    ctx->pc = 0x4271F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4271F4u;
    // 0x4271f8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    goto label_427188;
    ctx->pc = 0x4271FCu;
label_4271fc:
    // 0x4271fc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4271fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x427200: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x427200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427204: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x427204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427208: 0xc109c62  jal         func_427188
    ctx->pc = 0x427208u;
    SET_GPR_U32(ctx, 31, 0x427210u);
    ctx->pc = 0x42720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427208u;
    // 0x42720c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    goto label_427188;
    ctx->pc = 0x427210u;
label_427210:
    // 0x427210: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x427210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x427214: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x427214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427218: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x427218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42721c: 0xc109c62  jal         func_427188
    ctx->pc = 0x42721Cu;
    SET_GPR_U32(ctx, 31, 0x427224u);
    ctx->pc = 0x427220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42721Cu;
    // 0x427220: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    goto label_427188;
    ctx->pc = 0x427224u;
label_427224:
    // 0x427224: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x427224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x427228: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x427228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42722c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x42722cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427230: 0xc109c62  jal         func_427188
    ctx->pc = 0x427230u;
    SET_GPR_U32(ctx, 31, 0x427238u);
    ctx->pc = 0x427234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427230u;
    // 0x427234: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    goto label_427188;
    ctx->pc = 0x427238u;
label_427238:
    // 0x427238: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x427238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x42723c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x42723cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427240: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x427240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427244: 0xc109c62  jal         func_427188
    ctx->pc = 0x427244u;
    SET_GPR_U32(ctx, 31, 0x42724Cu);
    ctx->pc = 0x427248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427244u;
    // 0x427248: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    goto label_427188;
    ctx->pc = 0x42724Cu;
label_42724c:
    // 0x42724c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x42724cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x427250: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x427250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427254: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x427254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427258: 0xc109c62  jal         func_427188
    ctx->pc = 0x427258u;
    SET_GPR_U32(ctx, 31, 0x427260u);
    ctx->pc = 0x42725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427258u;
    // 0x42725c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    goto label_427188;
    ctx->pc = 0x427260u;
label_427260:
    // 0x427260: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x427260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x427264: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x427264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427268: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x427268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42726c: 0xc109c62  jal         func_427188
    ctx->pc = 0x42726Cu;
    SET_GPR_U32(ctx, 31, 0x427274u);
    ctx->pc = 0x427270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42726Cu;
    // 0x427270: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    goto label_427188;
    ctx->pc = 0x427274u;
label_427274:
    // 0x427274: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x427274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427278: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x427278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x42727c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x42727Cu;
    {
        const bool branch_taken_0x42727c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x427280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42727Cu;
        // 0x427280: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42727c) {
            ctx->pc = 0x4271D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4271d0;
        }
    }
    ctx->pc = 0x427284u;
    // 0x427284: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x427284u;
    {
        const bool branch_taken_0x427284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427284u;
        // 0x427288: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427284) {
            ctx->pc = 0x4272A8u;
            goto label_4272a8;
        }
    }
    ctx->pc = 0x42728Cu;
label_42728c:
    // 0x42728c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x42728cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x427290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x427290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427294: 0xc1092aa  jal         func_424AA8
    ctx->pc = 0x427294u;
    SET_GPR_U32(ctx, 31, 0x42729Cu);
    ctx->pc = 0x427298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427294u;
    // 0x427298: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424AA8u, 0x427294u, 0x42729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42729Cu;
label_42729c:
    // 0x42729c: 0xa2110018  sb          $s1, 0x18($s0)
    ctx->pc = 0x42729cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 17));
    // 0x4272a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4272a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4272a4:
    // 0x4272a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4272a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4272a8:
    // 0x4272a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4272a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4272ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4272acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4272b0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4272b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4272b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4272b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4272b8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4272b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4272bc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4272bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4272c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4272c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4272c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4272C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4272C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4272C4u;
        // 0x4272c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4272C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4272CCu;
    // 0x4272cc: 0x0  nop
    ctx->pc = 0x4272ccu;
    // NOP
    ctx->pc = 0x4272d0u;
}
