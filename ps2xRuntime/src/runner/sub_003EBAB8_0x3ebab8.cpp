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

// Function: sub_003EBAB8
// Address: 0x3ebab8 - 0x3ede50
void sub_003EBAB8_0x3ebab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBAB8_0x3ebab8");
#endif

    switch (ctx->pc) {
        case 0x3ebc10u: goto label_3ebc10;
        case 0x3ebd90u: goto label_3ebd90;
        case 0x3ebf40u: goto label_3ebf40;
        case 0x3ec0a8u: goto label_3ec0a8;
        case 0x3ec218u: goto label_3ec218;
        case 0x3ec3a0u: goto label_3ec3a0;
        case 0x3ec4e8u: goto label_3ec4e8;
        case 0x3ec600u: goto label_3ec600;
        case 0x3ec7c8u: goto label_3ec7c8;
        case 0x3ec988u: goto label_3ec988;
        case 0x3ecb30u: goto label_3ecb30;
        case 0x3ecbf8u: goto label_3ecbf8;
        case 0x3ece10u: goto label_3ece10;
        case 0x3ed048u: goto label_3ed048;
        case 0x3ed1d8u: goto label_3ed1d8;
        case 0x3ed2c8u: goto label_3ed2c8;
        case 0x3ed36cu: goto label_3ed36c;
        case 0x3ed384u: goto label_3ed384;
        case 0x3ed46cu: goto label_3ed46c;
        case 0x3ed484u: goto label_3ed484;
        case 0x3ed4d8u: goto label_3ed4d8;
        case 0x3ed54cu: goto label_3ed54c;
        case 0x3ed564u: goto label_3ed564;
        case 0x3ed608u: goto label_3ed608;
        case 0x3ed620u: goto label_3ed620;
        case 0x3ed6d0u: goto label_3ed6d0;
        case 0x3ed828u: goto label_3ed828;
        case 0x3ed940u: goto label_3ed940;
        case 0x3eda74u: goto label_3eda74;
        case 0x3eda84u: goto label_3eda84;
        case 0x3edb04u: goto label_3edb04;
        case 0x3edb14u: goto label_3edb14;
        case 0x3edb94u: goto label_3edb94;
        case 0x3edba4u: goto label_3edba4;
        case 0x3edc28u: goto label_3edc28;
        case 0x3edcf4u: goto label_3edcf4;
        case 0x3edd04u: goto label_3edd04;
        case 0x3edd38u: goto label_3edd38;
        case 0x3edd48u: goto label_3edd48;
        case 0x3edd7cu: goto label_3edd7c;
        case 0x3edd8cu: goto label_3edd8c;
        case 0x3ede10u: goto label_3ede10;
        default: break;
    }

    ctx->pc = 0x3ebab8u;

    // 0x3ebab8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3ebab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3ebabc: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x3ebabcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebac0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3ebac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3ebac4: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x3ebac4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebac8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3ebac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3ebacc: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x3ebaccu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebad0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3ebad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3ebad4: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x3ebad4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebad8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3ebad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3ebadc: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x3ebadcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebae0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3ebae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3ebae4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3ebae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3ebae8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3ebae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3ebaec: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3ebaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3ebaf0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3ebaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3ebaf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ebaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ebaf8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3ebaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3ebafc: 0x8fb600c0  lw          $s6, 0xC0($sp)
    ctx->pc = 0x3ebafcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3ebb00: 0xdc990000  ld          $t9, 0x0($a0)
    ctx->pc = 0x3ebb00u;
    SET_GPR_U64(ctx, 25, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ebb04: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x3ebb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x3ebb08: 0x12e008c5  beqz        $s7, . + 4 + (0x8C5 << 2)
    ctx->pc = 0x3EBB08u;
    {
        const bool branch_taken_0x3ebb08 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB08u;
        // 0x3ebb0c: 0x8fb500d8  lw          $s5, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb08) {
            ctx->pc = 0x3EDE20u;
            goto label_3ede20;
        }
    }
    ctx->pc = 0x3EBB10u;
    // 0x3ebb10: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x3ebb10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3ebb14: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3ebb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3ebb18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBB18u;
    {
        const bool branch_taken_0x3ebb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB18u;
        // 0x3ebb1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb18) {
            ctx->pc = 0x3EBB30u;
            goto label_3ebb30;
        }
    }
    ctx->pc = 0x3EBB20u;
    // 0x3ebb20: 0x106208c0  beq         $v1, $v0, . + 4 + (0x8C0 << 2)
    ctx->pc = 0x3EBB20u;
    {
        const bool branch_taken_0x3ebb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EBB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB20u;
        // 0x3ebb24: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb20) {
            ctx->pc = 0x3EDE24u;
            goto label_3ede24;
        }
    }
    ctx->pc = 0x3EBB28u;
    // 0x3ebb28: 0x11a008bf  beqz        $t5, . + 4 + (0x8BF << 2)
    ctx->pc = 0x3EBB28u;
    {
        const bool branch_taken_0x3ebb28 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB28u;
        // 0x3ebb2c: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb28) {
            ctx->pc = 0x3EDE28u;
            goto label_3ede28;
        }
    }
    ctx->pc = 0x3EBB30u;
label_3ebb30:
    // 0x3ebb30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3ebb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ebb34: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x3ebb34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3ebb38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ebb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ebb3c: 0x10620359  beq         $v1, $v0, . + 4 + (0x359 << 2)
    ctx->pc = 0x3EBB3Cu;
    {
        const bool branch_taken_0x3ebb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB3Cu;
        // 0x3ebb40: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb3c) {
            ctx->pc = 0x3EC8A4u;
            goto label_3ec8a4;
        }
    }
    ctx->pc = 0x3EBB44u;
    // 0x3ebb44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBB44u;
    {
        const bool branch_taken_0x3ebb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB44u;
        // 0x3ebb48: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb44) {
            ctx->pc = 0x3EBB5Cu;
            goto label_3ebb5c;
        }
    }
    ctx->pc = 0x3EBB4Cu;
    // 0x3ebb4c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3EBB4Cu;
    {
        const bool branch_taken_0x3ebb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB4Cu;
        // 0x3ebb50: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb4c) {
            ctx->pc = 0x3EBB74u;
            goto label_3ebb74;
        }
    }
    ctx->pc = 0x3EBB54u;
    // 0x3ebb54: 0x1000089f  b           . + 4 + (0x89F << 2)
    ctx->pc = 0x3EBB54u;
    {
        const bool branch_taken_0x3ebb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB54u;
        // 0x3ebb58: 0x90450010  lbu         $a1, 0x10($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb54) {
            ctx->pc = 0x3EDDD4u;
            goto label_3eddd4;
        }
    }
    ctx->pc = 0x3EBB5Cu;
label_3ebb5c:
    // 0x3ebb5c: 0x10620502  beq         $v1, $v0, . + 4 + (0x502 << 2)
    ctx->pc = 0x3EBB5Cu;
    {
        const bool branch_taken_0x3ebb5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EBB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB5Cu;
        // 0x3ebb60: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb5c) {
            ctx->pc = 0x3ECF68u;
            goto label_3ecf68;
        }
    }
    ctx->pc = 0x3EBB64u;
    // 0x3ebb64: 0x106206c9  beq         $v1, $v0, . + 4 + (0x6C9 << 2)
    ctx->pc = 0x3EBB64u;
    {
        const bool branch_taken_0x3ebb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EBB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB64u;
        // 0x3ebb68: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb64) {
            ctx->pc = 0x3ED68Cu;
            goto label_3ed68c;
        }
    }
    ctx->pc = 0x3EBB6Cu;
    // 0x3ebb6c: 0x10000899  b           . + 4 + (0x899 << 2)
    ctx->pc = 0x3EBB6Cu;
    {
        const bool branch_taken_0x3ebb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB6Cu;
        // 0x3ebb70: 0x90450010  lbu         $a1, 0x10($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb6c) {
            ctx->pc = 0x3EDDD4u;
            goto label_3eddd4;
        }
    }
    ctx->pc = 0x3EBB74u;
label_3ebb74:
    // 0x3ebb74: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3ebb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ebb78: 0x90620011  lbu         $v0, 0x11($v1)
    ctx->pc = 0x3ebb78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x3ebb7c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x3ebb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ebb80: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x3ebb80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3ebb84: 0x10600891  beqz        $v1, . + 4 + (0x891 << 2)
    ctx->pc = 0x3EBB84u;
    {
        const bool branch_taken_0x3ebb84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB84u;
        // 0x3ebb88: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb84) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EBB8Cu;
    // 0x3ebb8c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3ebb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3ebb90: 0x2442e8d0  addiu       $v0, $v0, -0x1730
    ctx->pc = 0x3ebb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961360));
    // 0x3ebb94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ebb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ebb98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3ebb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ebb9c: 0x800008  jr          $a0
    ctx->pc = 0x3EBB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3EBBA4u: goto label_3ebba4;
            case 0x3EBCC4u: goto label_3ebcc4;
            case 0x3EBFF4u: goto label_3ebff4;
            case 0x3EC2CCu: goto label_3ec2cc;
            case 0x3EC55Cu: goto label_3ec55c;
            case 0x3EDDCCu: goto label_3eddcc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBB9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3EBBA4u;
label_3ebba4:
    // 0x3ebba4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x3ebba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ebba8: 0x13200888  beqz        $t9, . + 4 + (0x888 << 2)
    ctx->pc = 0x3EBBA8u;
    {
        const bool branch_taken_0x3ebba8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBBA8u;
        // 0x3ebbac: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebba8) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EBBB0u;
    // 0x3ebbb0: 0x24087f7f  addiu       $t0, $zero, 0x7F7F
    ctx->pc = 0x3ebbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32639));
    // 0x3ebbb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ebbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebbb8: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x3ebbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebbbc: 0x1b200003  blez        $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EBBBCu;
    {
        const bool branch_taken_0x3ebbbc = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3EBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBBBCu;
        // 0x3ebbc0: 0x33220001  andi        $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebbbc) {
            ctx->pc = 0x3EBBCCu;
            goto label_3ebbcc;
        }
    }
    ctx->pc = 0x3EBBC4u;
    // 0x3ebbc4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3EBBC4u;
    {
        const bool branch_taken_0x3ebbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebbc4) {
            ctx->pc = 0x3EBBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBBC4u;
            // 0x3ebbc8: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBC10u;
            goto label_3ebc10;
        }
    }
    ctx->pc = 0x3EBBCCu;
label_3ebbcc:
    // 0x3ebbcc: 0x91840000  lbu         $a0, 0x0($t4)
    ctx->pc = 0x3ebbccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ebbd0: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ebbd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ebbd4: 0x411c2  srl         $v0, $a0, 7
    ctx->pc = 0x3ebbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
    // 0x3ebbd8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EBBD8u;
    {
        const bool branch_taken_0x3ebbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EBBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBBD8u;
        // 0x3ebbdc: 0x67de0001  daddiu      $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebbd8) {
            ctx->pc = 0x3EBBF8u;
            goto label_3ebbf8;
        }
    }
    ctx->pc = 0x3EBBE0u;
    // 0x3ebbe0: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x3ebbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x3ebbe4: 0xa1830000  sb          $v1, 0x0($t4)
    ctx->pc = 0x3ebbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebbe8: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ebbe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ebbec: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x3ebbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x3ebbf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ebbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ebbf4: 0xa1830000  sb          $v1, 0x0($t4)
    ctx->pc = 0x3ebbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ebbf8:
    // 0x3ebbf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ebbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ebbfc: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ebbfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ebc00: 0x10400872  beqz        $v0, . + 4 + (0x872 << 2)
    ctx->pc = 0x3EBC00u;
    {
        const bool branch_taken_0x3ebc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC00u;
        // 0x3ebc04: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc00) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EBC08u;
    // 0x3ebc08: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3ebc08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ebc0c: 0x0  nop
    ctx->pc = 0x3ebc0cu;
    // NOP
label_3ebc10:
    // 0x3ebc10: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ebc10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ebc14: 0xe41007  srav        $v0, $a0, $a3
    ctx->pc = 0x3ebc14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebc18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ebc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ebc1c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EBC1Cu;
    {
        const bool branch_taken_0x3ebc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EBC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC1Cu;
        // 0x3ebc20: 0xc81807  srav        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc1c) {
            ctx->pc = 0x3EBC40u;
            goto label_3ebc40;
        }
    }
    ctx->pc = 0x3EBC24u;
    // 0x3ebc24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ebc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ebc28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ebc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3ebc2c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ebc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebc30: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ebc30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ebc34: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3ebc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebc38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ebc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ebc3c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ebc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ebc40:
    // 0x3ebc40: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBC40u;
    {
        const bool branch_taken_0x3ebc40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC40u;
        // 0x3ebc44: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc40) {
            ctx->pc = 0x3EBC58u;
            goto label_3ebc58;
        }
    }
    ctx->pc = 0x3EBC48u;
    // 0x3ebc48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ebc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebc4c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x3ebc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ebc50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EBC50u;
    {
        const bool branch_taken_0x3ebc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC50u;
        // 0x3ebc54: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc50) {
            ctx->pc = 0x3EBC5Cu;
            goto label_3ebc5c;
        }
    }
    ctx->pc = 0x3EBC58u;
label_3ebc58:
    // 0x3ebc58: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ebc58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3ebc5c:
    // 0x3ebc5c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3ebc5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ebc60: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ebc60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ebc64: 0xe41007  srav        $v0, $a0, $a3
    ctx->pc = 0x3ebc64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebc68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ebc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ebc6c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EBC6Cu;
    {
        const bool branch_taken_0x3ebc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC6Cu;
        // 0x3ebc70: 0xc81807  srav        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc6c) {
            ctx->pc = 0x3EBC90u;
            goto label_3ebc90;
        }
    }
    ctx->pc = 0x3EBC74u;
    // 0x3ebc74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ebc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ebc78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ebc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3ebc7c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ebc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebc80: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ebc80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ebc84: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3ebc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebc88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ebc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ebc8c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ebc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ebc90:
    // 0x3ebc90: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBC90u;
    {
        const bool branch_taken_0x3ebc90 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBC90u;
        // 0x3ebc94: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc90) {
            ctx->pc = 0x3EBCA8u;
            goto label_3ebca8;
        }
    }
    ctx->pc = 0x3EBC98u;
    // 0x3ebc98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ebc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebc9c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x3ebc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ebca0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EBCA0u;
    {
        const bool branch_taken_0x3ebca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCA0u;
        // 0x3ebca4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebca0) {
            ctx->pc = 0x3EBCACu;
            goto label_3ebcac;
        }
    }
    ctx->pc = 0x3EBCA8u;
label_3ebca8:
    // 0x3ebca8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ebca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3ebcac:
    // 0x3ebcac: 0x67de0002  daddiu      $fp, $fp, 0x2
    ctx->pc = 0x3ebcacu;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
    // 0x3ebcb0: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ebcb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ebcb4: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3EBCB4u;
    {
        const bool branch_taken_0x3ebcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebcb4) {
            ctx->pc = 0x3EBCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBCB4u;
            // 0x3ebcb8: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ebc10;
        }
    }
    ctx->pc = 0x3EBCBCu;
    // 0x3ebcbc: 0x10000844  b           . + 4 + (0x844 << 2)
    ctx->pc = 0x3EBCBCu;
    {
        const bool branch_taken_0x3ebcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCBCu;
        // 0x3ebcc0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebcbc) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3EBCC4u;
label_3ebcc4:
    // 0x3ebcc4: 0x11c00085  beqz        $t6, . + 4 + (0x85 << 2)
    ctx->pc = 0x3EBCC4u;
    {
        const bool branch_taken_0x3ebcc4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCC4u;
        // 0x3ebcc8: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebcc4) {
            ctx->pc = 0x3EBEDCu;
            goto label_3ebedc;
        }
    }
    ctx->pc = 0x3EBCCCu;
    // 0x3ebccc: 0x1320083f  beqz        $t9, . + 4 + (0x83F << 2)
    ctx->pc = 0x3EBCCCu;
    {
        const bool branch_taken_0x3ebccc = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCCCu;
        // 0x3ebcd0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebccc) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EBCD4u;
    // 0x3ebcd4: 0x240b3f3f  addiu       $t3, $zero, 0x3F3F
    ctx->pc = 0x3ebcd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16191));
    // 0x3ebcd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ebcd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebcdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ebcdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebce0: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x3ebce0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebce4: 0x1b200003  blez        $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EBCE4u;
    {
        const bool branch_taken_0x3ebce4 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3EBCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBCE4u;
        // 0x3ebce8: 0x33220001  andi        $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebce4) {
            ctx->pc = 0x3EBCF4u;
            goto label_3ebcf4;
        }
    }
    ctx->pc = 0x3EBCECu;
    // 0x3ebcec: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x3EBCECu;
    {
        const bool branch_taken_0x3ebcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebcec) {
            ctx->pc = 0x3EBCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBCECu;
            // 0x3ebcf0: 0x91060000  lbu         $a2, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBD90u;
            goto label_3ebd90;
        }
    }
    ctx->pc = 0x3EBCF4u;
label_3ebcf4:
    // 0x3ebcf4: 0x91840000  lbu         $a0, 0x0($t4)
    ctx->pc = 0x3ebcf4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ebcf8: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ebcf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ebcfc: 0x41982  srl         $v1, $a0, 6
    ctx->pc = 0x3ebcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x3ebd00: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EBD00u;
    {
        const bool branch_taken_0x3ebd00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EBD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD00u;
        // 0x3ebd04: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebd00) {
            ctx->pc = 0x3EBD24u;
            goto label_3ebd24;
        }
    }
    ctx->pc = 0x3EBD08u;
    // 0x3ebd08: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x3ebd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x3ebd0c: 0xa1830000  sb          $v1, 0x0($t4)
    ctx->pc = 0x3ebd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebd10: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ebd10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ebd14: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3ebd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3ebd18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ebd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ebd1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3EBD1Cu;
    {
        const bool branch_taken_0x3ebd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD1Cu;
        // 0x3ebd20: 0xa1830000  sb          $v1, 0x0($t4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebd1c) {
            ctx->pc = 0x3EBD54u;
            goto label_3ebd54;
        }
    }
    ctx->pc = 0x3EBD24u;
label_3ebd24:
    // 0x3ebd24: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x3ebd24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x3ebd28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3ebd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ebd2c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x3ebd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3ebd30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3ebd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ebd34: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3ebd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3ebd38: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3ebd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3ebd3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ebd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ebd40: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ebd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ebd44: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ebd44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ebd48: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x3ebd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x3ebd4c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ebd4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ebd50: 0xa1840000  sb          $a0, 0x0($t4)
    ctx->pc = 0x3ebd50u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 4));
label_3ebd54:
    // 0x3ebd54: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EBD54u;
    {
        const bool branch_taken_0x3ebd54 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD54u;
        // 0x3ebd58: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebd54) {
            ctx->pc = 0x3EBD70u;
            goto label_3ebd70;
        }
    }
    ctx->pc = 0x3EBD5Cu;
    // 0x3ebd5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ebd5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebd60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ebd60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebd64: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3ebd64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ebd68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EBD68u;
    {
        const bool branch_taken_0x3ebd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD68u;
        // 0x3ebd6c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebd68) {
            ctx->pc = 0x3EBD78u;
            goto label_3ebd78;
        }
    }
    ctx->pc = 0x3EBD70u;
label_3ebd70:
    // 0x3ebd70: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x3ebd70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x3ebd74: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3ebd74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_3ebd78:
    // 0x3ebd78: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ebd78u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3ebd7c: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ebd7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ebd80: 0x10400813  beqz        $v0, . + 4 + (0x813 << 2)
    ctx->pc = 0x3EBD80u;
    {
        const bool branch_taken_0x3ebd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD80u;
        // 0x3ebd84: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebd80) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3EBD88u;
    // 0x3ebd88: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x3ebd88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ebd8c: 0x0  nop
    ctx->pc = 0x3ebd8cu;
    // NOP
label_3ebd90:
    // 0x3ebd90: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ebd90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ebd94: 0xe61007  srav        $v0, $a2, $a3
    ctx->pc = 0x3ebd94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebd98: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ebd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ebd9c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3EBD9Cu;
    {
        const bool branch_taken_0x3ebd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EBDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBD9Cu;
        // 0x3ebda0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebd9c) {
            ctx->pc = 0x3EBDC8u;
            goto label_3ebdc8;
        }
    }
    ctx->pc = 0x3EBDA4u;
    // 0x3ebda4: 0x12b1807  srav        $v1, $t3, $t1
    ctx->pc = 0x3ebda4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 9) & 0x1F));
    // 0x3ebda8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ebda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ebdac: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3ebdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3ebdb0: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3ebdb0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebdb4: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ebdb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ebdb8: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3ebdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebdbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ebdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ebdc0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3EBDC0u;
    {
        const bool branch_taken_0x3ebdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBDC0u;
        // 0x3ebdc4: 0xa1030000  sb          $v1, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebdc0) {
            ctx->pc = 0x3EBE04u;
            goto label_3ebe04;
        }
    }
    ctx->pc = 0x3EBDC8u;
label_3ebdc8:
    // 0x3ebdc8: 0x14b2007  srav        $a0, $t3, $t2
    ctx->pc = 0x3ebdc8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 10) & 0x1F));
    // 0x3ebdcc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3ebdccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ebdd0: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x3ebdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ebdd4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3ebdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ebdd8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3ebdd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3ebddc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3ebddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3ebde0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3ebde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3ebde4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ebde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ebde8: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x3ebde8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3ebdec: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x3ebdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x3ebdf0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ebdf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ebdf4: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x3ebdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x3ebdf8: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3ebdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebdfc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ebdfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ebe00: 0xa1040000  sb          $a0, 0x0($t0)
    ctx->pc = 0x3ebe00u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
label_3ebe04:
    // 0x3ebe04: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EBE04u;
    {
        const bool branch_taken_0x3ebe04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE04u;
        // 0x3ebe08: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebe04) {
            ctx->pc = 0x3EBE20u;
            goto label_3ebe20;
        }
    }
    ctx->pc = 0x3EBE0Cu;
    // 0x3ebe0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ebe0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebe10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ebe10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebe14: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3ebe14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ebe18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EBE18u;
    {
        const bool branch_taken_0x3ebe18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE18u;
        // 0x3ebe1c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebe18) {
            ctx->pc = 0x3EBE28u;
            goto label_3ebe28;
        }
    }
    ctx->pc = 0x3EBE20u;
label_3ebe20:
    // 0x3ebe20: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x3ebe20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x3ebe24: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3ebe24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_3ebe28:
    // 0x3ebe28: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x3ebe28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ebe2c: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ebe2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ebe30: 0xe61007  srav        $v0, $a2, $a3
    ctx->pc = 0x3ebe30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebe34: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ebe34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ebe38: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3EBE38u;
    {
        const bool branch_taken_0x3ebe38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE38u;
        // 0x3ebe3c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebe38) {
            ctx->pc = 0x3EBE64u;
            goto label_3ebe64;
        }
    }
    ctx->pc = 0x3EBE40u;
    // 0x3ebe40: 0x12b1807  srav        $v1, $t3, $t1
    ctx->pc = 0x3ebe40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 9) & 0x1F));
    // 0x3ebe44: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ebe44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ebe48: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3ebe48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3ebe4c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3ebe4cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebe50: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ebe50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ebe54: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3ebe54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebe58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ebe58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ebe5c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3EBE5Cu;
    {
        const bool branch_taken_0x3ebe5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE5Cu;
        // 0x3ebe60: 0xa1030000  sb          $v1, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebe5c) {
            ctx->pc = 0x3EBEA0u;
            goto label_3ebea0;
        }
    }
    ctx->pc = 0x3EBE64u;
label_3ebe64:
    // 0x3ebe64: 0x14b2007  srav        $a0, $t3, $t2
    ctx->pc = 0x3ebe64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 10) & 0x1F));
    // 0x3ebe68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3ebe68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ebe6c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x3ebe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ebe70: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3ebe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ebe74: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3ebe74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3ebe78: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3ebe78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3ebe7c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3ebe7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3ebe80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ebe80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ebe84: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x3ebe84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3ebe88: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x3ebe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x3ebe8c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ebe8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ebe90: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x3ebe90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x3ebe94: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3ebe94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebe98: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ebe98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ebe9c: 0xa1040000  sb          $a0, 0x0($t0)
    ctx->pc = 0x3ebe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
label_3ebea0:
    // 0x3ebea0: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EBEA0u;
    {
        const bool branch_taken_0x3ebea0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBEA0u;
        // 0x3ebea4: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebea0) {
            ctx->pc = 0x3EBEBCu;
            goto label_3ebebc;
        }
    }
    ctx->pc = 0x3EBEA8u;
    // 0x3ebea8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ebea8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebeac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ebeacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebeb0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3ebeb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ebeb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EBEB4u;
    {
        const bool branch_taken_0x3ebeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBEB4u;
        // 0x3ebeb8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebeb4) {
            ctx->pc = 0x3EBEC4u;
            goto label_3ebec4;
        }
    }
    ctx->pc = 0x3EBEBCu;
label_3ebebc:
    // 0x3ebebc: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x3ebebcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x3ebec0: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3ebec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_3ebec4:
    // 0x3ebec4: 0x67de0002  daddiu      $fp, $fp, 0x2
    ctx->pc = 0x3ebec4u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
    // 0x3ebec8: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ebec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ebecc: 0x5440ffb0  bnel        $v0, $zero, . + 4 + (-0x50 << 2)
    ctx->pc = 0x3EBECCu;
    {
        const bool branch_taken_0x3ebecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebecc) {
            ctx->pc = 0x3EBED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBECCu;
            // 0x3ebed0: 0x91060000  lbu         $a2, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ebd90;
        }
    }
    ctx->pc = 0x3EBED4u;
    // 0x3ebed4: 0x100007be  b           . + 4 + (0x7BE << 2)
    ctx->pc = 0x3EBED4u;
    {
        const bool branch_taken_0x3ebed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBED4u;
        // 0x3ebed8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebed4) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3EBEDCu;
label_3ebedc:
    // 0x3ebedc: 0x132007bb  beqz        $t9, . + 4 + (0x7BB << 2)
    ctx->pc = 0x3EBEDCu;
    {
        const bool branch_taken_0x3ebedc = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBEDCu;
        // 0x3ebee0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebedc) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EBEE4u;
    // 0x3ebee4: 0x24083f3f  addiu       $t0, $zero, 0x3F3F
    ctx->pc = 0x3ebee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16191));
    // 0x3ebee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ebee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebeec: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x3ebeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebef0: 0x1b200003  blez        $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EBEF0u;
    {
        const bool branch_taken_0x3ebef0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3EBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBEF0u;
        // 0x3ebef4: 0x33220001  andi        $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebef0) {
            ctx->pc = 0x3EBF00u;
            goto label_3ebf00;
        }
    }
    ctx->pc = 0x3EBEF8u;
    // 0x3ebef8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3EBEF8u;
    {
        const bool branch_taken_0x3ebef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebef8) {
            ctx->pc = 0x3EBEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBEF8u;
            // 0x3ebefc: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBF40u;
            goto label_3ebf40;
        }
    }
    ctx->pc = 0x3EBF00u;
label_3ebf00:
    // 0x3ebf00: 0x91840000  lbu         $a0, 0x0($t4)
    ctx->pc = 0x3ebf00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ebf04: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ebf04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ebf08: 0x41182  srl         $v0, $a0, 6
    ctx->pc = 0x3ebf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x3ebf0c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EBF0Cu;
    {
        const bool branch_taken_0x3ebf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF0Cu;
        // 0x3ebf10: 0x67de0001  daddiu      $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebf0c) {
            ctx->pc = 0x3EBF2Cu;
            goto label_3ebf2c;
        }
    }
    ctx->pc = 0x3EBF14u;
    // 0x3ebf14: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x3ebf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x3ebf18: 0xa1830000  sb          $v1, 0x0($t4)
    ctx->pc = 0x3ebf18u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebf1c: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ebf1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ebf20: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3ebf20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3ebf24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ebf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ebf28: 0xa1830000  sb          $v1, 0x0($t4)
    ctx->pc = 0x3ebf28u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ebf2c:
    // 0x3ebf2c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3ebf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ebf30: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ebf30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ebf34: 0x104007a5  beqz        $v0, . + 4 + (0x7A5 << 2)
    ctx->pc = 0x3EBF34u;
    {
        const bool branch_taken_0x3ebf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF34u;
        // 0x3ebf38: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebf34) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EBF3Cu;
    // 0x3ebf3c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3ebf3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3ebf40:
    // 0x3ebf40: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ebf40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ebf44: 0xe41007  srav        $v0, $a0, $a3
    ctx->pc = 0x3ebf44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebf48: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ebf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ebf4c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EBF4Cu;
    {
        const bool branch_taken_0x3ebf4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EBF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF4Cu;
        // 0x3ebf50: 0xc81807  srav        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebf4c) {
            ctx->pc = 0x3EBF70u;
            goto label_3ebf70;
        }
    }
    ctx->pc = 0x3EBF54u;
    // 0x3ebf54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ebf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ebf58: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ebf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3ebf5c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ebf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebf60: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ebf60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ebf64: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3ebf64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebf68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ebf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ebf6c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ebf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ebf70:
    // 0x3ebf70: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBF70u;
    {
        const bool branch_taken_0x3ebf70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF70u;
        // 0x3ebf74: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebf70) {
            ctx->pc = 0x3EBF88u;
            goto label_3ebf88;
        }
    }
    ctx->pc = 0x3EBF78u;
    // 0x3ebf78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ebf78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebf7c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3ebf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ebf80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EBF80u;
    {
        const bool branch_taken_0x3ebf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF80u;
        // 0x3ebf84: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebf80) {
            ctx->pc = 0x3EBF8Cu;
            goto label_3ebf8c;
        }
    }
    ctx->pc = 0x3EBF88u;
label_3ebf88:
    // 0x3ebf88: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3ebf88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_3ebf8c:
    // 0x3ebf8c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3ebf8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ebf90: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ebf90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ebf94: 0xe41007  srav        $v0, $a0, $a3
    ctx->pc = 0x3ebf94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebf98: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ebf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ebf9c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EBF9Cu;
    {
        const bool branch_taken_0x3ebf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EBFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF9Cu;
        // 0x3ebfa0: 0xc81807  srav        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebf9c) {
            ctx->pc = 0x3EBFC0u;
            goto label_3ebfc0;
        }
    }
    ctx->pc = 0x3EBFA4u;
    // 0x3ebfa4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ebfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ebfa8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ebfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3ebfac: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ebfacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ebfb0: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ebfb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ebfb4: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3ebfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ebfb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ebfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ebfbc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ebfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ebfc0:
    // 0x3ebfc0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EBFC0u;
    {
        const bool branch_taken_0x3ebfc0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBFC0u;
        // 0x3ebfc4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebfc0) {
            ctx->pc = 0x3EBFD8u;
            goto label_3ebfd8;
        }
    }
    ctx->pc = 0x3EBFC8u;
    // 0x3ebfc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ebfc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebfcc: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3ebfccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ebfd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EBFD0u;
    {
        const bool branch_taken_0x3ebfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBFD0u;
        // 0x3ebfd4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebfd0) {
            ctx->pc = 0x3EBFDCu;
            goto label_3ebfdc;
        }
    }
    ctx->pc = 0x3EBFD8u;
label_3ebfd8:
    // 0x3ebfd8: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3ebfd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_3ebfdc:
    // 0x3ebfdc: 0x67de0002  daddiu      $fp, $fp, 0x2
    ctx->pc = 0x3ebfdcu;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
    // 0x3ebfe0: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ebfe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ebfe4: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3EBFE4u;
    {
        const bool branch_taken_0x3ebfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebfe4) {
            ctx->pc = 0x3EBFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBFE4u;
            // 0x3ebfe8: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ebf40;
        }
    }
    ctx->pc = 0x3EBFECu;
    // 0x3ebfec: 0x10000778  b           . + 4 + (0x778 << 2)
    ctx->pc = 0x3EBFECu;
    {
        const bool branch_taken_0x3ebfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBFECu;
        // 0x3ebff0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebfec) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3EBFF4u;
label_3ebff4:
    // 0x3ebff4: 0x11c0006f  beqz        $t6, . + 4 + (0x6F << 2)
    ctx->pc = 0x3EBFF4u;
    {
        const bool branch_taken_0x3ebff4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBFF4u;
        // 0x3ebff8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebff4) {
            ctx->pc = 0x3EC1B4u;
            goto label_3ec1b4;
        }
    }
    ctx->pc = 0x3EBFFCu;
    // 0x3ebffc: 0x13200773  beqz        $t9, . + 4 + (0x773 << 2)
    ctx->pc = 0x3EBFFCu;
    {
        const bool branch_taken_0x3ebffc = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBFFCu;
        // 0x3ec000: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebffc) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EC004u;
    // 0x3ec004: 0x240a0f0f  addiu       $t2, $zero, 0xF0F
    ctx->pc = 0x3ec004u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3855));
    // 0x3ec008: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ec008u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec00c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ec00cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec010: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x3ec010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec014: 0x1b200003  blez        $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC014u;
    {
        const bool branch_taken_0x3ec014 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3EC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC014u;
        // 0x3ec018: 0x33220001  andi        $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec014) {
            ctx->pc = 0x3EC024u;
            goto label_3ec024;
        }
    }
    ctx->pc = 0x3EC01Cu;
    // 0x3ec01c: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x3EC01Cu;
    {
        const bool branch_taken_0x3ec01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec01c) {
            ctx->pc = 0x3EC020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC01Cu;
            // 0x3ec020: 0x90c50000  lbu         $a1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC0A8u;
            goto label_3ec0a8;
        }
    }
    ctx->pc = 0x3EC024u;
label_3ec024:
    // 0x3ec024: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x3ec024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ec028: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec02c: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x3ec02cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x3ec030: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC030u;
    {
        const bool branch_taken_0x3ec030 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC030u;
        // 0x3ec034: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec030) {
            ctx->pc = 0x3EC054u;
            goto label_3ec054;
        }
    }
    ctx->pc = 0x3EC038u;
    // 0x3ec038: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3ec038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3ec03c: 0xa1830000  sb          $v1, 0x0($t4)
    ctx->pc = 0x3ec03cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec040: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec044: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ec044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ec048: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec04c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC04Cu;
    {
        const bool branch_taken_0x3ec04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC04Cu;
        // 0x3ec050: 0xa1830000  sb          $v1, 0x0($t4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec04c) {
            ctx->pc = 0x3EC070u;
            goto label_3ec070;
        }
    }
    ctx->pc = 0x3EC054u;
label_3ec054:
    // 0x3ec054: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x3ec054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3ec058: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3ec058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3ec05c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ec05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ec060: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ec060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec064: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x3ec064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x3ec068: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ec068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ec06c: 0xa1840000  sb          $a0, 0x0($t4)
    ctx->pc = 0x3ec06cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 4));
label_3ec070:
    // 0x3ec070: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EC070u;
    {
        const bool branch_taken_0x3ec070 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC070u;
        // 0x3ec074: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec070) {
            ctx->pc = 0x3EC08Cu;
            goto label_3ec08c;
        }
    }
    ctx->pc = 0x3EC078u;
    // 0x3ec078: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ec078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec07c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ec07cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec080: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3ec080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ec084: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC084u;
    {
        const bool branch_taken_0x3ec084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC084u;
        // 0x3ec088: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec084) {
            ctx->pc = 0x3EC094u;
            goto label_3ec094;
        }
    }
    ctx->pc = 0x3EC08Cu;
label_3ec08c:
    // 0x3ec08c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3ec08cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3ec090: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3ec090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_3ec094:
    // 0x3ec094: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ec094u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3ec098: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ec098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ec09c: 0x1040074c  beqz        $v0, . + 4 + (0x74C << 2)
    ctx->pc = 0x3EC09Cu;
    {
        const bool branch_taken_0x3ec09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC09Cu;
        // 0x3ec0a0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec09c) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3EC0A4u;
    // 0x3ec0a4: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x3ec0a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3ec0a8:
    // 0x3ec0a8: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ec0a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec0ac: 0xe51007  srav        $v0, $a1, $a3
    ctx->pc = 0x3ec0acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ec0b0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ec0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ec0b4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC0B4u;
    {
        const bool branch_taken_0x3ec0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC0B4u;
        // 0x3ec0b8: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec0b4) {
            ctx->pc = 0x3EC0D4u;
            goto label_3ec0d4;
        }
    }
    ctx->pc = 0x3EC0BCu;
    // 0x3ec0bc: 0x10a1807  srav        $v1, $t2, $t0
    ctx->pc = 0x3ec0bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 8) & 0x1F));
    // 0x3ec0c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ec0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ec0c4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3ec0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3ec0c8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3ec0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec0cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC0CCu;
    {
        const bool branch_taken_0x3ec0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC0CCu;
        // 0x3ec0d0: 0x96e20008  lhu         $v0, 0x8($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec0cc) {
            ctx->pc = 0x3EC0F0u;
            goto label_3ec0f0;
        }
    }
    ctx->pc = 0x3EC0D4u;
label_3ec0d4:
    // 0x3ec0d4: 0x12a1807  srav        $v1, $t2, $t1
    ctx->pc = 0x3ec0d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
    // 0x3ec0d8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ec0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ec0dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ec0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ec0e0: 0x1c42021  addu        $a0, $t6, $a0
    ctx->pc = 0x3ec0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x3ec0e4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3ec0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3ec0e8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ec0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ec0ec: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x3ec0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_3ec0f0:
    // 0x3ec0f0: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3ec0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ec0f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec0f8: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EC0F8u;
    {
        const bool branch_taken_0x3ec0f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC0F8u;
        // 0x3ec0fc: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec0f8) {
            ctx->pc = 0x3EC114u;
            goto label_3ec114;
        }
    }
    ctx->pc = 0x3EC100u;
    // 0x3ec100: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ec100u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec104: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ec104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec108: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3ec108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ec10c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC10Cu;
    {
        const bool branch_taken_0x3ec10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC10Cu;
        // 0x3ec110: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec10c) {
            ctx->pc = 0x3EC120u;
            goto label_3ec120;
        }
    }
    ctx->pc = 0x3EC114u;
label_3ec114:
    // 0x3ec114: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3ec114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3ec118: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3ec118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3ec11c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3ec11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_3ec120:
    // 0x3ec120: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x3ec120u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ec124: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ec124u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec128: 0xe51007  srav        $v0, $a1, $a3
    ctx->pc = 0x3ec128u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ec12c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ec12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ec130: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC130u;
    {
        const bool branch_taken_0x3ec130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC130u;
        // 0x3ec134: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec130) {
            ctx->pc = 0x3EC150u;
            goto label_3ec150;
        }
    }
    ctx->pc = 0x3EC138u;
    // 0x3ec138: 0x10a1807  srav        $v1, $t2, $t0
    ctx->pc = 0x3ec138u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 8) & 0x1F));
    // 0x3ec13c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ec13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ec140: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3ec140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3ec144: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3ec144u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec148: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC148u;
    {
        const bool branch_taken_0x3ec148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC148u;
        // 0x3ec14c: 0x96e20008  lhu         $v0, 0x8($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec148) {
            ctx->pc = 0x3EC16Cu;
            goto label_3ec16c;
        }
    }
    ctx->pc = 0x3EC150u;
label_3ec150:
    // 0x3ec150: 0x12a1807  srav        $v1, $t2, $t1
    ctx->pc = 0x3ec150u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
    // 0x3ec154: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ec154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ec158: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ec158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ec15c: 0x1c42021  addu        $a0, $t6, $a0
    ctx->pc = 0x3ec15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x3ec160: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3ec160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3ec164: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ec164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ec168: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x3ec168u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_3ec16c:
    // 0x3ec16c: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3ec16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ec170: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec174: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EC174u;
    {
        const bool branch_taken_0x3ec174 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC174u;
        // 0x3ec178: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec174) {
            ctx->pc = 0x3EC190u;
            goto label_3ec190;
        }
    }
    ctx->pc = 0x3EC17Cu;
    // 0x3ec17c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ec17cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec180: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ec180u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec184: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3ec184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ec188: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC188u;
    {
        const bool branch_taken_0x3ec188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC188u;
        // 0x3ec18c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec188) {
            ctx->pc = 0x3EC19Cu;
            goto label_3ec19c;
        }
    }
    ctx->pc = 0x3EC190u;
label_3ec190:
    // 0x3ec190: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3ec190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3ec194: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3ec194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3ec198: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3ec198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_3ec19c:
    // 0x3ec19c: 0x67de0002  daddiu      $fp, $fp, 0x2
    ctx->pc = 0x3ec19cu;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
    // 0x3ec1a0: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ec1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ec1a4: 0x5440ffc0  bnel        $v0, $zero, . + 4 + (-0x40 << 2)
    ctx->pc = 0x3EC1A4u;
    {
        const bool branch_taken_0x3ec1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec1a4) {
            ctx->pc = 0x3EC1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC1A4u;
            // 0x3ec1a8: 0x90c50000  lbu         $a1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec0a8;
        }
    }
    ctx->pc = 0x3EC1ACu;
    // 0x3ec1ac: 0x10000708  b           . + 4 + (0x708 << 2)
    ctx->pc = 0x3EC1ACu;
    {
        const bool branch_taken_0x3ec1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC1ACu;
        // 0x3ec1b0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec1ac) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3EC1B4u;
label_3ec1b4:
    // 0x3ec1b4: 0x13200705  beqz        $t9, . + 4 + (0x705 << 2)
    ctx->pc = 0x3EC1B4u;
    {
        const bool branch_taken_0x3ec1b4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC1B4u;
        // 0x3ec1b8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec1b4) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EC1BCu;
    // 0x3ec1bc: 0x24080f0f  addiu       $t0, $zero, 0xF0F
    ctx->pc = 0x3ec1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3855));
    // 0x3ec1c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ec1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec1c4: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x3ec1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec1c8: 0x1b200003  blez        $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC1C8u;
    {
        const bool branch_taken_0x3ec1c8 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3EC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC1C8u;
        // 0x3ec1cc: 0x33220001  andi        $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec1c8) {
            ctx->pc = 0x3EC1D8u;
            goto label_3ec1d8;
        }
    }
    ctx->pc = 0x3EC1D0u;
    // 0x3ec1d0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3EC1D0u;
    {
        const bool branch_taken_0x3ec1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec1d0) {
            ctx->pc = 0x3EC1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC1D0u;
            // 0x3ec1d4: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC218u;
            goto label_3ec218;
        }
    }
    ctx->pc = 0x3EC1D8u;
label_3ec1d8:
    // 0x3ec1d8: 0x91840000  lbu         $a0, 0x0($t4)
    ctx->pc = 0x3ec1d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ec1dc: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ec1dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec1e0: 0x41102  srl         $v0, $a0, 4
    ctx->pc = 0x3ec1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x3ec1e4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC1E4u;
    {
        const bool branch_taken_0x3ec1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC1E4u;
        // 0x3ec1e8: 0x67de0001  daddiu      $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec1e4) {
            ctx->pc = 0x3EC204u;
            goto label_3ec204;
        }
    }
    ctx->pc = 0x3EC1ECu;
    // 0x3ec1ec: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x3ec1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x3ec1f0: 0xa1830000  sb          $v1, 0x0($t4)
    ctx->pc = 0x3ec1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec1f4: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec1f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec1f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ec1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ec1fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec200: 0xa1830000  sb          $v1, 0x0($t4)
    ctx->pc = 0x3ec200u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ec204:
    // 0x3ec204: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3ec204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ec208: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ec208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ec20c: 0x104006ef  beqz        $v0, . + 4 + (0x6EF << 2)
    ctx->pc = 0x3EC20Cu;
    {
        const bool branch_taken_0x3ec20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC20Cu;
        // 0x3ec210: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec20c) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EC214u;
    // 0x3ec214: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3ec214u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3ec218:
    // 0x3ec218: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ec218u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec21c: 0xe41007  srav        $v0, $a0, $a3
    ctx->pc = 0x3ec21cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ec220: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ec220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ec224: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC224u;
    {
        const bool branch_taken_0x3ec224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EC228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC224u;
        // 0x3ec228: 0xc81807  srav        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec224) {
            ctx->pc = 0x3EC248u;
            goto label_3ec248;
        }
    }
    ctx->pc = 0x3EC22Cu;
    // 0x3ec22c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ec22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ec230: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ec230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3ec234: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ec234u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec238: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec23c: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3ec23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ec240: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec244: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ec244u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ec248:
    // 0x3ec248: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EC248u;
    {
        const bool branch_taken_0x3ec248 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC248u;
        // 0x3ec24c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec248) {
            ctx->pc = 0x3EC260u;
            goto label_3ec260;
        }
    }
    ctx->pc = 0x3EC250u;
    // 0x3ec250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ec250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec254: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3ec254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ec258: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EC258u;
    {
        const bool branch_taken_0x3ec258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC258u;
        // 0x3ec25c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec258) {
            ctx->pc = 0x3EC264u;
            goto label_3ec264;
        }
    }
    ctx->pc = 0x3EC260u;
label_3ec260:
    // 0x3ec260: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3ec260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_3ec264:
    // 0x3ec264: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3ec264u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ec268: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ec268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec26c: 0xe41007  srav        $v0, $a0, $a3
    ctx->pc = 0x3ec26cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ec270: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ec270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ec274: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC274u;
    {
        const bool branch_taken_0x3ec274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC274u;
        // 0x3ec278: 0xc81807  srav        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec274) {
            ctx->pc = 0x3EC298u;
            goto label_3ec298;
        }
    }
    ctx->pc = 0x3EC27Cu;
    // 0x3ec27c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ec27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ec280: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ec280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3ec284: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ec284u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec288: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec28c: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3ec28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3ec290: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec294: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ec294u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ec298:
    // 0x3ec298: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EC298u;
    {
        const bool branch_taken_0x3ec298 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC298u;
        // 0x3ec29c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec298) {
            ctx->pc = 0x3EC2B0u;
            goto label_3ec2b0;
        }
    }
    ctx->pc = 0x3EC2A0u;
    // 0x3ec2a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ec2a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec2a4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3ec2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ec2a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EC2A8u;
    {
        const bool branch_taken_0x3ec2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC2A8u;
        // 0x3ec2ac: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec2a8) {
            ctx->pc = 0x3EC2B4u;
            goto label_3ec2b4;
        }
    }
    ctx->pc = 0x3EC2B0u;
label_3ec2b0:
    // 0x3ec2b0: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3ec2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_3ec2b4:
    // 0x3ec2b4: 0x67de0002  daddiu      $fp, $fp, 0x2
    ctx->pc = 0x3ec2b4u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
    // 0x3ec2b8: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ec2b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ec2bc: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3EC2BCu;
    {
        const bool branch_taken_0x3ec2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec2bc) {
            ctx->pc = 0x3EC2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC2BCu;
            // 0x3ec2c0: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec218;
        }
    }
    ctx->pc = 0x3EC2C4u;
    // 0x3ec2c4: 0x100006c2  b           . + 4 + (0x6C2 << 2)
    ctx->pc = 0x3EC2C4u;
    {
        const bool branch_taken_0x3ec2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC2C4u;
        // 0x3ec2c8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec2c4) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3EC2CCu;
label_3ec2cc:
    // 0x3ec2cc: 0x11c00062  beqz        $t6, . + 4 + (0x62 << 2)
    ctx->pc = 0x3EC2CCu;
    {
        const bool branch_taken_0x3ec2cc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec2cc) {
            ctx->pc = 0x3EC458u;
            goto label_3ec458;
        }
    }
    ctx->pc = 0x3EC2D4u;
    // 0x3ec2d4: 0x132006bd  beqz        $t9, . + 4 + (0x6BD << 2)
    ctx->pc = 0x3EC2D4u;
    {
        const bool branch_taken_0x3ec2d4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC2D4u;
        // 0x3ec2d8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec2d4) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EC2DCu;
    // 0x3ec2dc: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x3ec2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec2e0: 0x1b200021  blez        $t9, . + 4 + (0x21 << 2)
    ctx->pc = 0x3EC2E0u;
    {
        const bool branch_taken_0x3ec2e0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3EC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC2E0u;
        // 0x3ec2e4: 0x33230003  andi        $v1, $t9, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec2e0) {
            ctx->pc = 0x3EC368u;
            goto label_3ec368;
        }
    }
    ctx->pc = 0x3EC2E8u;
    // 0x3ec2e8: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x3EC2E8u;
    {
        const bool branch_taken_0x3ec2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec2e8) {
            ctx->pc = 0x3EC2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC2E8u;
            // 0x3ec2ec: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC3A4u;
            goto label_3ec3a4;
        }
    }
    ctx->pc = 0x3EC2F0u;
    // 0x3ec2f0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3ec2f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ec2f4: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3EC2F4u;
    {
        const bool branch_taken_0x3ec2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec2f4) {
            ctx->pc = 0x3EC2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC2F4u;
            // 0x3ec2f8: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC36Cu;
            goto label_3ec36c;
        }
    }
    ctx->pc = 0x3EC2FCu;
    // 0x3ec2fc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ec2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ec300: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3EC300u;
    {
        const bool branch_taken_0x3ec300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec300) {
            ctx->pc = 0x3EC304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC300u;
            // 0x3ec304: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC33Cu;
            goto label_3ec33c;
        }
    }
    ctx->pc = 0x3EC308u;
    // 0x3ec308: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x3ec308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ec30c: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec30cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec310: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC310u;
    {
        const bool branch_taken_0x3ec310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec310) {
            ctx->pc = 0x3EC314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC310u;
            // 0x3ec314: 0x91820000  lbu         $v0, 0x0($t4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC324u;
            goto label_3ec324;
        }
    }
    ctx->pc = 0x3EC318u;
    // 0x3ec318: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec31c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC31Cu;
    {
        const bool branch_taken_0x3ec31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC31Cu;
        // 0x3ec320: 0xa1820000  sb          $v0, 0x0($t4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec31c) {
            ctx->pc = 0x3EC330u;
            goto label_3ec330;
        }
    }
    ctx->pc = 0x3EC324u;
label_3ec324:
    // 0x3ec324: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ec324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ec328: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ec328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec32c: 0xa1830000  sb          $v1, 0x0($t4)
    ctx->pc = 0x3ec32cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ec330:
    // 0x3ec330: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ec330u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3ec334: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ec334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ec338: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3ec338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ec33c:
    // 0x3ec33c: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec33cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec340: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC340u;
    {
        const bool branch_taken_0x3ec340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec340) {
            ctx->pc = 0x3EC344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC340u;
            // 0x3ec344: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC354u;
            goto label_3ec354;
        }
    }
    ctx->pc = 0x3EC348u;
    // 0x3ec348: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec34c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC34Cu;
    {
        const bool branch_taken_0x3ec34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC34Cu;
        // 0x3ec350: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec34c) {
            ctx->pc = 0x3EC360u;
            goto label_3ec360;
        }
    }
    ctx->pc = 0x3EC354u;
label_3ec354:
    // 0x3ec354: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ec354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ec358: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ec358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec35c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ec35cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ec360:
    // 0x3ec360: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ec360u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3ec364: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ec364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3ec368:
    // 0x3ec368: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3ec368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ec36c:
    // 0x3ec36c: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec36cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec370: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC370u;
    {
        const bool branch_taken_0x3ec370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec370) {
            ctx->pc = 0x3EC374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC370u;
            // 0x3ec374: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC384u;
            goto label_3ec384;
        }
    }
    ctx->pc = 0x3EC378u;
    // 0x3ec378: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec37c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC37Cu;
    {
        const bool branch_taken_0x3ec37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC37Cu;
        // 0x3ec380: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec37c) {
            ctx->pc = 0x3EC390u;
            goto label_3ec390;
        }
    }
    ctx->pc = 0x3EC384u;
label_3ec384:
    // 0x3ec384: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ec384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ec388: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ec388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec38c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ec38cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ec390:
    // 0x3ec390: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ec390u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3ec394: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ec394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ec398: 0x1040068c  beqz        $v0, . + 4 + (0x68C << 2)
    ctx->pc = 0x3EC398u;
    {
        const bool branch_taken_0x3ec398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC398u;
        // 0x3ec39c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec398) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EC3A0u;
label_3ec3a0:
    // 0x3ec3a0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3ec3a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ec3a4:
    // 0x3ec3a4: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec3a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec3a8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC3A8u;
    {
        const bool branch_taken_0x3ec3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec3a8) {
            ctx->pc = 0x3EC3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC3A8u;
            // 0x3ec3ac: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC3BCu;
            goto label_3ec3bc;
        }
    }
    ctx->pc = 0x3EC3B0u;
    // 0x3ec3b0: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec3b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec3b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC3B4u;
    {
        const bool branch_taken_0x3ec3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC3B4u;
        // 0x3ec3b8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec3b4) {
            ctx->pc = 0x3EC3C8u;
            goto label_3ec3c8;
        }
    }
    ctx->pc = 0x3EC3BCu;
label_3ec3bc:
    // 0x3ec3bc: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ec3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ec3c0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ec3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec3c4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ec3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ec3c8:
    // 0x3ec3c8: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3ec3c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3ec3cc: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec3ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec3d0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC3D0u;
    {
        const bool branch_taken_0x3ec3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec3d0) {
            ctx->pc = 0x3EC3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC3D0u;
            // 0x3ec3d4: 0x90820001  lbu         $v0, 0x1($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC3E4u;
            goto label_3ec3e4;
        }
    }
    ctx->pc = 0x3EC3D8u;
    // 0x3ec3d8: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec3dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC3DCu;
    {
        const bool branch_taken_0x3ec3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC3DCu;
        // 0x3ec3e0: 0xa0820001  sb          $v0, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec3dc) {
            ctx->pc = 0x3EC3F0u;
            goto label_3ec3f0;
        }
    }
    ctx->pc = 0x3EC3E4u;
label_3ec3e4:
    // 0x3ec3e4: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ec3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ec3e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ec3e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec3ec: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x3ec3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_3ec3f0:
    // 0x3ec3f0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3ec3f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3ec3f4: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec3f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec3f8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC3F8u;
    {
        const bool branch_taken_0x3ec3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec3f8) {
            ctx->pc = 0x3EC3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC3F8u;
            // 0x3ec3fc: 0x90820002  lbu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC40Cu;
            goto label_3ec40c;
        }
    }
    ctx->pc = 0x3EC400u;
    // 0x3ec400: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec404: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC404u;
    {
        const bool branch_taken_0x3ec404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC404u;
        // 0x3ec408: 0xa0820002  sb          $v0, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec404) {
            ctx->pc = 0x3EC418u;
            goto label_3ec418;
        }
    }
    ctx->pc = 0x3EC40Cu;
label_3ec40c:
    // 0x3ec40c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ec40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ec410: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ec410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec414: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3ec414u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3ec418:
    // 0x3ec418: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x3ec418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3ec41c: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec41cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec420: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC420u;
    {
        const bool branch_taken_0x3ec420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec420) {
            ctx->pc = 0x3EC424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC420u;
            // 0x3ec424: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC434u;
            goto label_3ec434;
        }
    }
    ctx->pc = 0x3EC428u;
    // 0x3ec428: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec42c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC42Cu;
    {
        const bool branch_taken_0x3ec42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC42Cu;
        // 0x3ec430: 0xa0820003  sb          $v0, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec42c) {
            ctx->pc = 0x3EC440u;
            goto label_3ec440;
        }
    }
    ctx->pc = 0x3EC434u;
label_3ec434:
    // 0x3ec434: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ec434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ec438: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ec438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec43c: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x3ec43cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_3ec440:
    // 0x3ec440: 0x67de0004  daddiu      $fp, $fp, 0x4
    ctx->pc = 0x3ec440u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)4);
    // 0x3ec444: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ec444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ec448: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3EC448u;
    {
        const bool branch_taken_0x3ec448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC448u;
        // 0x3ec44c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec448) {
            ctx->pc = 0x3EC3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec3a0;
        }
    }
    ctx->pc = 0x3EC450u;
    // 0x3ec450: 0x1000065f  b           . + 4 + (0x65F << 2)
    ctx->pc = 0x3EC450u;
    {
        const bool branch_taken_0x3ec450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC450u;
        // 0x3ec454: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec450) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3EC458u;
label_3ec458:
    // 0x3ec458: 0x1320065c  beqz        $t9, . + 4 + (0x65C << 2)
    ctx->pc = 0x3EC458u;
    {
        const bool branch_taken_0x3ec458 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC458u;
        // 0x3ec45c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec458) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EC460u;
    // 0x3ec460: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x3ec460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec464: 0x1b200017  blez        $t9, . + 4 + (0x17 << 2)
    ctx->pc = 0x3EC464u;
    {
        const bool branch_taken_0x3ec464 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3EC468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC464u;
        // 0x3ec468: 0x33230003  andi        $v1, $t9, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec464) {
            ctx->pc = 0x3EC4C4u;
            goto label_3ec4c4;
        }
    }
    ctx->pc = 0x3EC46Cu;
    // 0x3ec46c: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3EC46Cu;
    {
        const bool branch_taken_0x3ec46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec46c) {
            ctx->pc = 0x3EC470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC46Cu;
            // 0x3ec470: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC4ECu;
            goto label_3ec4ec;
        }
    }
    ctx->pc = 0x3EC474u;
    // 0x3ec474: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3ec474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ec478: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3EC478u;
    {
        const bool branch_taken_0x3ec478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec478) {
            ctx->pc = 0x3EC47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC478u;
            // 0x3ec47c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC4C8u;
            goto label_3ec4c8;
        }
    }
    ctx->pc = 0x3EC480u;
    // 0x3ec480: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ec480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ec484: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3EC484u;
    {
        const bool branch_taken_0x3ec484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec484) {
            ctx->pc = 0x3EC488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC484u;
            // 0x3ec488: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC4ACu;
            goto label_3ec4ac;
        }
    }
    ctx->pc = 0x3EC48Cu;
    // 0x3ec48c: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x3ec48cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ec490: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec494: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC494u;
    {
        const bool branch_taken_0x3ec494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EC498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC494u;
        // 0x3ec498: 0x25840001  addiu       $a0, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec494) {
            ctx->pc = 0x3EC4A4u;
            goto label_3ec4a4;
        }
    }
    ctx->pc = 0x3EC49Cu;
    // 0x3ec49c: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec49cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec4a0: 0xa1820000  sb          $v0, 0x0($t4)
    ctx->pc = 0x3ec4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ec4a4:
    // 0x3ec4a4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x3ec4a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ec4a8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3ec4a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ec4ac:
    // 0x3ec4ac: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec4acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec4b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC4B0u;
    {
        const bool branch_taken_0x3ec4b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC4B0u;
        // 0x3ec4b4: 0x67de0001  daddiu      $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec4b0) {
            ctx->pc = 0x3EC4C0u;
            goto label_3ec4c0;
        }
    }
    ctx->pc = 0x3EC4B8u;
    // 0x3ec4b8: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec4b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec4bc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ec4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ec4c0:
    // 0x3ec4c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ec4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3ec4c4:
    // 0x3ec4c4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3ec4c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ec4c8:
    // 0x3ec4c8: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec4c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec4cc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC4CCu;
    {
        const bool branch_taken_0x3ec4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EC4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC4CCu;
        // 0x3ec4d0: 0x67de0001  daddiu      $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec4cc) {
            ctx->pc = 0x3EC4DCu;
            goto label_3ec4dc;
        }
    }
    ctx->pc = 0x3EC4D4u;
    // 0x3ec4d4: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec4d8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ec4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ec4dc:
    // 0x3ec4dc: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ec4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ec4e0: 0x1040063a  beqz        $v0, . + 4 + (0x63A << 2)
    ctx->pc = 0x3EC4E0u;
    {
        const bool branch_taken_0x3ec4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC4E0u;
        // 0x3ec4e4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec4e0) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EC4E8u;
label_3ec4e8:
    // 0x3ec4e8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3ec4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ec4ec:
    // 0x3ec4ec: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec4ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec4f0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EC4F0u;
    {
        const bool branch_taken_0x3ec4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec4f0) {
            ctx->pc = 0x3EC4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC4F0u;
            // 0x3ec4f4: 0x90830001  lbu         $v1, 0x1($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC508u;
            goto label_3ec508;
        }
    }
    ctx->pc = 0x3EC4F8u;
    // 0x3ec4f8: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec4fc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ec4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec500: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3ec500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3ec504: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec504u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
label_3ec508:
    // 0x3ec508: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC508u;
    {
        const bool branch_taken_0x3ec508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec508) {
            ctx->pc = 0x3EC50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC508u;
            // 0x3ec50c: 0x90830002  lbu         $v1, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC51Cu;
            goto label_3ec51c;
        }
    }
    ctx->pc = 0x3EC510u;
    // 0x3ec510: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec514: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3ec514u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec518: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3ec518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_3ec51c:
    // 0x3ec51c: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec51cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec520: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EC520u;
    {
        const bool branch_taken_0x3ec520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec520) {
            ctx->pc = 0x3EC524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC520u;
            // 0x3ec524: 0x90830003  lbu         $v1, 0x3($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC538u;
            goto label_3ec538;
        }
    }
    ctx->pc = 0x3EC528u;
    // 0x3ec528: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec52c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x3ec52cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec530: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x3ec530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3ec534: 0x95a20008  lhu         $v0, 0x8($t5)
    ctx->pc = 0x3ec534u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
label_3ec538:
    // 0x3ec538: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC538u;
    {
        const bool branch_taken_0x3ec538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC538u;
        // 0x3ec53c: 0x67de0004  daddiu      $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec538) {
            ctx->pc = 0x3EC548u;
            goto label_3ec548;
        }
    }
    ctx->pc = 0x3EC540u;
    // 0x3ec540: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ec540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec544: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3ec544u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_3ec548:
    // 0x3ec548: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ec548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ec54c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3EC54Cu;
    {
        const bool branch_taken_0x3ec54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC54Cu;
        // 0x3ec550: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec54c) {
            ctx->pc = 0x3EC4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec4e8;
        }
    }
    ctx->pc = 0x3EC554u;
    // 0x3ec554: 0x1000061e  b           . + 4 + (0x61E << 2)
    ctx->pc = 0x3EC554u;
    {
        const bool branch_taken_0x3ec554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC554u;
        // 0x3ec558: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec554) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3EC55Cu;
label_3ec55c:
    // 0x3ec55c: 0x12c00062  beqz        $s6, . + 4 + (0x62 << 2)
    ctx->pc = 0x3EC55Cu;
    {
        const bool branch_taken_0x3ec55c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec55c) {
            ctx->pc = 0x3EC6E8u;
            goto label_3ec6e8;
        }
    }
    ctx->pc = 0x3EC564u;
    // 0x3ec564: 0x13200619  beqz        $t9, . + 4 + (0x619 << 2)
    ctx->pc = 0x3EC564u;
    {
        const bool branch_taken_0x3ec564 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC564u;
        // 0x3ec568: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec564) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EC56Cu;
    // 0x3ec56c: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x3ec56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec570: 0x1b200003  blez        $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC570u;
    {
        const bool branch_taken_0x3ec570 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3EC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC570u;
        // 0x3ec574: 0x33220001  andi        $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec570) {
            ctx->pc = 0x3EC580u;
            goto label_3ec580;
        }
    }
    ctx->pc = 0x3EC578u;
    // 0x3ec578: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3EC578u;
    {
        const bool branch_taken_0x3ec578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC578u;
        // 0x3ec57c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec578) {
            ctx->pc = 0x3EC5F4u;
            goto label_3ec5f4;
        }
    }
    ctx->pc = 0x3EC580u;
label_3ec580:
    // 0x3ec580: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3ec580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ec584: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x3ec584u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x3ec588: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ec588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ec58c: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ec58cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec590: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ec590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ec594: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC594u;
    {
        const bool branch_taken_0x3ec594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ec594) {
            ctx->pc = 0x3EC598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC594u;
            // 0x3ec598: 0x91820001  lbu         $v0, 0x1($t4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC5B4u;
            goto label_3ec5b4;
        }
    }
    ctx->pc = 0x3EC59Cu;
    // 0x3ec59c: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec59cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec5a0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ec5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ec5a4: 0xa1820000  sb          $v0, 0x0($t4)
    ctx->pc = 0x3ec5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec5a8: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ec5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec5ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3EC5ACu;
    {
        const bool branch_taken_0x3ec5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC5ACu;
        // 0x3ec5b0: 0xa1830001  sb          $v1, 0x1($t4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec5ac) {
            ctx->pc = 0x3EC5E0u;
            goto label_3ec5e0;
        }
    }
    ctx->pc = 0x3EC5B4u;
label_3ec5b4:
    // 0x3ec5b4: 0x91840000  lbu         $a0, 0x0($t4)
    ctx->pc = 0x3ec5b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ec5b8: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3ec5b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3ec5bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ec5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ec5c0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ec5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ec5c4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3ec5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3ec5c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ec5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec5cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ec5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ec5d0: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x3ec5d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ec5d4: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3ec5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3ec5d8: 0xa1840001  sb          $a0, 0x1($t4)
    ctx->pc = 0x3ec5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ec5dc: 0xa1820000  sb          $v0, 0x0($t4)
    ctx->pc = 0x3ec5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ec5e0:
    // 0x3ec5e0: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ec5e0u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3ec5e4: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ec5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ec5e8: 0x104005f8  beqz        $v0, . + 4 + (0x5F8 << 2)
    ctx->pc = 0x3EC5E8u;
    {
        const bool branch_taken_0x3ec5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC5E8u;
        // 0x3ec5ec: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec5e8) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EC5F0u;
    // 0x3ec5f0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3ec5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ec5f4:
    // 0x3ec5f4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3ec5f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec5f8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3ec5f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec5fc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3ec5fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ec600:
    // 0x3ec600: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ec600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ec604: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x3ec604u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3ec608: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ec608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ec60c: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ec60cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec610: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ec610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ec614: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC614u;
    {
        const bool branch_taken_0x3ec614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ec614) {
            ctx->pc = 0x3EC618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC614u;
            // 0x3ec618: 0x91220001  lbu         $v0, 0x1($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC634u;
            goto label_3ec634;
        }
    }
    ctx->pc = 0x3EC61Cu;
    // 0x3ec61c: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec61cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec620: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ec620u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ec624: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3ec624u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec628: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ec628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec62c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3EC62Cu;
    {
        const bool branch_taken_0x3ec62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC62Cu;
        // 0x3ec630: 0xa1030001  sb          $v1, 0x1($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec62c) {
            ctx->pc = 0x3EC660u;
            goto label_3ec660;
        }
    }
    ctx->pc = 0x3EC634u;
label_3ec634:
    // 0x3ec634: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3ec634u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ec638: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3ec638u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3ec63c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ec63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ec640: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ec640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ec644: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3ec644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3ec648: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ec648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec64c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ec64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ec650: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x3ec650u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ec654: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3ec654u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3ec658: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3ec658u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec65c: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x3ec65cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
label_3ec660:
    // 0x3ec660: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3ec660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3ec664: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x3ec664u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3ec668: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ec668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ec66c: 0x95a30008  lhu         $v1, 0x8($t5)
    ctx->pc = 0x3ec66cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec670: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ec670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ec674: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC674u;
    {
        const bool branch_taken_0x3ec674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ec674) {
            ctx->pc = 0x3EC678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC674u;
            // 0x3ec678: 0x91220003  lbu         $v0, 0x3($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC694u;
            goto label_3ec694;
        }
    }
    ctx->pc = 0x3EC67Cu;
    // 0x3ec67c: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec67cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec680: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ec680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ec684: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3ec684u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec688: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ec688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec68c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3EC68Cu;
    {
        const bool branch_taken_0x3ec68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC68Cu;
        // 0x3ec690: 0xa1030003  sb          $v1, 0x3($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec68c) {
            ctx->pc = 0x3EC6C0u;
            goto label_3ec6c0;
        }
    }
    ctx->pc = 0x3EC694u;
label_3ec694:
    // 0x3ec694: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x3ec694u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3ec698: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3ec698u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3ec69c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ec69cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ec6a0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ec6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ec6a4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3ec6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3ec6a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ec6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec6ac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ec6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ec6b0: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x3ec6b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ec6b4: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3ec6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3ec6b8: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3ec6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec6bc: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x3ec6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
label_3ec6c0:
    // 0x3ec6c0: 0x67de0002  daddiu      $fp, $fp, 0x2
    ctx->pc = 0x3ec6c0u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
    // 0x3ec6c4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3ec6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3ec6c8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3ec6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3ec6cc: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3ec6ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3ec6d0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3ec6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3ec6d4: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ec6d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ec6d8: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x3EC6D8u;
    {
        const bool branch_taken_0x3ec6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC6D8u;
        // 0x3ec6dc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec6d8) {
            ctx->pc = 0x3EC600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec600;
        }
    }
    ctx->pc = 0x3EC6E0u;
    // 0x3ec6e0: 0x100005bb  b           . + 4 + (0x5BB << 2)
    ctx->pc = 0x3EC6E0u;
    {
        const bool branch_taken_0x3ec6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC6E0u;
        // 0x3ec6e4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec6e0) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3EC6E8u;
label_3ec6e8:
    // 0x3ec6e8: 0x132005b8  beqz        $t9, . + 4 + (0x5B8 << 2)
    ctx->pc = 0x3EC6E8u;
    {
        const bool branch_taken_0x3ec6e8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC6E8u;
        // 0x3ec6ec: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec6e8) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EC6F0u;
    // 0x3ec6f0: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x3ec6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec6f4: 0x1b200022  blez        $t9, . + 4 + (0x22 << 2)
    ctx->pc = 0x3EC6F4u;
    {
        const bool branch_taken_0x3ec6f4 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3EC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC6F4u;
        // 0x3ec6f8: 0x33230003  andi        $v1, $t9, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec6f4) {
            ctx->pc = 0x3EC780u;
            goto label_3ec780;
        }
    }
    ctx->pc = 0x3EC6FCu;
    // 0x3ec6fc: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3EC6FCu;
    {
        const bool branch_taken_0x3ec6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC6FCu;
        // 0x3ec700: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec6fc) {
            ctx->pc = 0x3EC7BCu;
            goto label_3ec7bc;
        }
    }
    ctx->pc = 0x3EC704u;
    // 0x3ec704: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3EC704u;
    {
        const bool branch_taken_0x3ec704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec704) {
            ctx->pc = 0x3EC708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC704u;
            // 0x3ec708: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC784u;
            goto label_3ec784;
        }
    }
    ctx->pc = 0x3EC70Cu;
    // 0x3ec70c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ec70cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ec710: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3EC710u;
    {
        const bool branch_taken_0x3ec710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec710) {
            ctx->pc = 0x3EC714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC710u;
            // 0x3ec714: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC750u;
            goto label_3ec750;
        }
    }
    ctx->pc = 0x3EC718u;
    // 0x3ec718: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3ec718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ec71c: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x3ec71cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x3ec720: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ec720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ec724: 0x95a40008  lhu         $a0, 0x8($t5)
    ctx->pc = 0x3ec724u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec728: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec72c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EC72Cu;
    {
        const bool branch_taken_0x3ec72c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3EC730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC72Cu;
        // 0x3ec730: 0x25850002  addiu       $a1, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec72c) {
            ctx->pc = 0x3EC748u;
            goto label_3ec748;
        }
    }
    ctx->pc = 0x3EC734u;
    // 0x3ec734: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec738: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ec738u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ec73c: 0xa1820000  sb          $v0, 0x0($t4)
    ctx->pc = 0x3ec73cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec740: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ec740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec744: 0xa1830001  sb          $v1, 0x1($t4)
    ctx->pc = 0x3ec744u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 3));
label_3ec748:
    // 0x3ec748: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x3ec748u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ec74c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ec74cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3ec750:
    // 0x3ec750: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3ec750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3ec754: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ec754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ec758: 0x95a40008  lhu         $a0, 0x8($t5)
    ctx->pc = 0x3ec758u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec75c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec760: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EC760u;
    {
        const bool branch_taken_0x3ec760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3EC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC760u;
        // 0x3ec764: 0x67de0001  daddiu      $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec760) {
            ctx->pc = 0x3EC77Cu;
            goto label_3ec77c;
        }
    }
    ctx->pc = 0x3EC768u;
    // 0x3ec768: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec76c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ec76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ec770: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3ec770u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec774: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ec774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec778: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x3ec778u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_3ec77c:
    // 0x3ec77c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3ec77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_3ec780:
    // 0x3ec780: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ec780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3ec784:
    // 0x3ec784: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3ec784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3ec788: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ec788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ec78c: 0x95a40008  lhu         $a0, 0x8($t5)
    ctx->pc = 0x3ec78cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec790: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec794: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EC794u;
    {
        const bool branch_taken_0x3ec794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3EC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC794u;
        // 0x3ec798: 0x67de0001  daddiu      $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec794) {
            ctx->pc = 0x3EC7B0u;
            goto label_3ec7b0;
        }
    }
    ctx->pc = 0x3EC79Cu;
    // 0x3ec79c: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec79cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec7a0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ec7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ec7a4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3ec7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec7a8: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ec7a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec7ac: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x3ec7acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_3ec7b0:
    // 0x3ec7b0: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ec7b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ec7b4: 0x10400585  beqz        $v0, . + 4 + (0x585 << 2)
    ctx->pc = 0x3EC7B4u;
    {
        const bool branch_taken_0x3ec7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC7B4u;
        // 0x3ec7b8: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec7b4) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EC7BCu;
label_3ec7bc:
    // 0x3ec7bc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3ec7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec7c0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3ec7c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec7c4: 0x0  nop
    ctx->pc = 0x3ec7c4u;
    // NOP
label_3ec7c8:
    // 0x3ec7c8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ec7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ec7cc: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x3ec7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3ec7d0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ec7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ec7d4: 0x95a40008  lhu         $a0, 0x8($t5)
    ctx->pc = 0x3ec7d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec7d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec7dc: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC7DCu;
    {
        const bool branch_taken_0x3ec7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ec7dc) {
            ctx->pc = 0x3EC7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC7DCu;
            // 0x3ec7e0: 0x90a20002  lbu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC7FCu;
            goto label_3ec7fc;
        }
    }
    ctx->pc = 0x3EC7E4u;
    // 0x3ec7e4: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec7e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec7e8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ec7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ec7ec: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3ec7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec7f0: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ec7f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec7f4: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3ec7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec7f8: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3ec7f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3ec7fc:
    // 0x3ec7fc: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x3ec7fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3ec800: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ec800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ec804: 0x95a40008  lhu         $a0, 0x8($t5)
    ctx->pc = 0x3ec804u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec808: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec80c: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC80Cu;
    {
        const bool branch_taken_0x3ec80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ec80c) {
            ctx->pc = 0x3EC810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC80Cu;
            // 0x3ec810: 0x90a20004  lbu         $v0, 0x4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC82Cu;
            goto label_3ec82c;
        }
    }
    ctx->pc = 0x3EC814u;
    // 0x3ec814: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec818: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ec818u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ec81c: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3ec81cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec820: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ec820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec824: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x3ec824u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec828: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x3ec828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_3ec82c:
    // 0x3ec82c: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x3ec82cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x3ec830: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ec830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ec834: 0x95a40008  lhu         $a0, 0x8($t5)
    ctx->pc = 0x3ec834u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec838: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec83c: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EC83Cu;
    {
        const bool branch_taken_0x3ec83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ec83c) {
            ctx->pc = 0x3EC840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC83Cu;
            // 0x3ec840: 0x90a20006  lbu         $v0, 0x6($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC85Cu;
            goto label_3ec85c;
        }
    }
    ctx->pc = 0x3EC844u;
    // 0x3ec844: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec844u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec848: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ec848u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ec84c: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x3ec84cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec850: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ec850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec854: 0xa0c30005  sb          $v1, 0x5($a2)
    ctx->pc = 0x3ec854u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec858: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x3ec858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_3ec85c:
    // 0x3ec85c: 0x90e30007  lbu         $v1, 0x7($a3)
    ctx->pc = 0x3ec85cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
    // 0x3ec860: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ec860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ec864: 0x95a40008  lhu         $a0, 0x8($t5)
    ctx->pc = 0x3ec864u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x3ec868: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ec868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ec86c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EC86Cu;
    {
        const bool branch_taken_0x3ec86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3EC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC86Cu;
        // 0x3ec870: 0x67de0004  daddiu      $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec86c) {
            ctx->pc = 0x3EC888u;
            goto label_3ec888;
        }
    }
    ctx->pc = 0x3EC874u;
    // 0x3ec874: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ec874u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec878: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ec878u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ec87c: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x3ec87cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec880: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ec880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ec884: 0xa0c30007  sb          $v1, 0x7($a2)
    ctx->pc = 0x3ec884u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 3));
label_3ec888:
    // 0x3ec888: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3ec888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3ec88c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3ec88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3ec890: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ec890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ec894: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3EC894u;
    {
        const bool branch_taken_0x3ec894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC894u;
        // 0x3ec898: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec894) {
            ctx->pc = 0x3EC7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec7c8;
        }
    }
    ctx->pc = 0x3EC89Cu;
    // 0x3ec89c: 0x1000054c  b           . + 4 + (0x54C << 2)
    ctx->pc = 0x3EC89Cu;
    {
        const bool branch_taken_0x3ec89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC89Cu;
        // 0x3ec8a0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec89c) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3EC8A4u;
label_3ec8a4:
    // 0x3ec8a4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3ec8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec8a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ec8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ec8ac: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x3ec8acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3ec8b0: 0x146200cc  bne         $v1, $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x3EC8B0u;
    {
        const bool branch_taken_0x3ec8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec8b0) {
            ctx->pc = 0x3ECBE4u;
            goto label_3ecbe4;
        }
    }
    ctx->pc = 0x3EC8B8u;
    // 0x3ec8b8: 0x11c0007d  beqz        $t6, . + 4 + (0x7D << 2)
    ctx->pc = 0x3EC8B8u;
    {
        const bool branch_taken_0x3ec8b8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec8b8) {
            ctx->pc = 0x3ECAB0u;
            goto label_3ecab0;
        }
    }
    ctx->pc = 0x3EC8C0u;
    // 0x3ec8c0: 0x13200542  beqz        $t9, . + 4 + (0x542 << 2)
    ctx->pc = 0x3EC8C0u;
    {
        const bool branch_taken_0x3ec8c0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC8C0u;
        // 0x3ec8c4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec8c0) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EC8C8u;
    // 0x3ec8c8: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x3ec8c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec8cc: 0x1b200003  blez        $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC8CCu;
    {
        const bool branch_taken_0x3ec8cc = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3EC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC8CCu;
        // 0x3ec8d0: 0x33220001  andi        $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec8cc) {
            ctx->pc = 0x3EC8DCu;
            goto label_3ec8dc;
        }
    }
    ctx->pc = 0x3EC8D4u;
    // 0x3ec8d4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3EC8D4u;
    {
        const bool branch_taken_0x3ec8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC8D4u;
        // 0x3ec8d8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec8d4) {
            ctx->pc = 0x3EC968u;
            goto label_3ec968;
        }
    }
    ctx->pc = 0x3EC8DCu;
label_3ec8dc:
    // 0x3ec8dc: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x3ec8dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ec8e0: 0x95a20002  lhu         $v0, 0x2($t5)
    ctx->pc = 0x3ec8e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3ec8e4: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3EC8E4u;
    {
        const bool branch_taken_0x3ec8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec8e4) {
            ctx->pc = 0x3EC8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC8E4u;
            // 0x3ec8e8: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC928u;
            goto label_3ec928;
        }
    }
    ctx->pc = 0x3EC8ECu;
    // 0x3ec8ec: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x3ec8ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x3ec8f0: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x3ec8f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3ec8f4: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3EC8F4u;
    {
        const bool branch_taken_0x3ec8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec8f4) {
            ctx->pc = 0x3EC8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC8F4u;
            // 0x3ec8f8: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC928u;
            goto label_3ec928;
        }
    }
    ctx->pc = 0x3EC8FCu;
    // 0x3ec8fc: 0x91830002  lbu         $v1, 0x2($t4)
    ctx->pc = 0x3ec8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x3ec900: 0x95a20006  lhu         $v0, 0x6($t5)
    ctx->pc = 0x3ec900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x3ec904: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC904u;
    {
        const bool branch_taken_0x3ec904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec904) {
            ctx->pc = 0x3EC908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC904u;
            // 0x3ec908: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC928u;
            goto label_3ec928;
        }
    }
    ctx->pc = 0x3EC90Cu;
    // 0x3ec90c: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x3ec90cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ec910: 0xa1820000  sb          $v0, 0x0($t4)
    ctx->pc = 0x3ec910u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec914: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3ec914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ec918: 0xa1830001  sb          $v1, 0x1($t4)
    ctx->pc = 0x3ec918u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec91c: 0x92e20006  lbu         $v0, 0x6($s7)
    ctx->pc = 0x3ec91cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ec920: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3EC920u;
    {
        const bool branch_taken_0x3ec920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC920u;
        // 0x3ec924: 0xa1820002  sb          $v0, 0x2($t4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 12), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec920) {
            ctx->pc = 0x3EC954u;
            goto label_3ec954;
        }
    }
    ctx->pc = 0x3EC928u;
label_3ec928:
    // 0x3ec928: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3ec928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3ec92c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ec92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ec930: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3ec930u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3ec934: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3ec934u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec938: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x3ec938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x3ec93c: 0x1c42021  addu        $a0, $t6, $a0
    ctx->pc = 0x3ec93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x3ec940: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x3ec940u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ec944: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ec944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ec948: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3ec948u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec94c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3ec94cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ec950: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3ec950u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
label_3ec954:
    // 0x3ec954: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ec954u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3ec958: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ec958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ec95c: 0x1040051b  beqz        $v0, . + 4 + (0x51B << 2)
    ctx->pc = 0x3EC95Cu;
    {
        const bool branch_taken_0x3ec95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC95Cu;
        // 0x3ec960: 0x24c60003  addiu       $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec95c) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EC964u;
    // 0x3ec964: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3ec964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ec968:
    // 0x3ec968: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x3ec968u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec96c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3ec96cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec970: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3ec970u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec974: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3ec974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec978: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3ec978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec97c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3ec97cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec980: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3ec980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec984: 0x0  nop
    ctx->pc = 0x3ec984u;
    // NOP
label_3ec988:
    // 0x3ec988: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3ec988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ec98c: 0x95a20002  lhu         $v0, 0x2($t5)
    ctx->pc = 0x3ec98cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3ec990: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3EC990u;
    {
        const bool branch_taken_0x3ec990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec990) {
            ctx->pc = 0x3EC994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC990u;
            // 0x3ec994: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC9D4u;
            goto label_3ec9d4;
        }
    }
    ctx->pc = 0x3EC998u;
    // 0x3ec998: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3ec998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3ec99c: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x3ec99cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3ec9a0: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3EC9A0u;
    {
        const bool branch_taken_0x3ec9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec9a0) {
            ctx->pc = 0x3EC9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC9A0u;
            // 0x3ec9a4: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC9D4u;
            goto label_3ec9d4;
        }
    }
    ctx->pc = 0x3EC9A8u;
    // 0x3ec9a8: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x3ec9a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3ec9ac: 0x95a20006  lhu         $v0, 0x6($t5)
    ctx->pc = 0x3ec9acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x3ec9b0: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC9B0u;
    {
        const bool branch_taken_0x3ec9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec9b0) {
            ctx->pc = 0x3EC9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC9B0u;
            // 0x3ec9b4: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC9D4u;
            goto label_3ec9d4;
        }
    }
    ctx->pc = 0x3EC9B8u;
    // 0x3ec9b8: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x3ec9b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ec9bc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ec9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ec9c0: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3ec9c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ec9c4: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x3ec9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec9c8: 0x92e20006  lbu         $v0, 0x6($s7)
    ctx->pc = 0x3ec9c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ec9cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3EC9CCu;
    {
        const bool branch_taken_0x3ec9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9CCu;
        // 0x3ec9d0: 0xa1220002  sb          $v0, 0x2($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec9cc) {
            ctx->pc = 0x3ECA00u;
            goto label_3eca00;
        }
    }
    ctx->pc = 0x3EC9D4u;
label_3ec9d4:
    // 0x3ec9d4: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ec9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ec9d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ec9d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec9dc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ec9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec9e0: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x3ec9e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x3ec9e4: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ec9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ec9e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ec9e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec9ec: 0xa1630001  sb          $v1, 0x1($t3)
    ctx->pc = 0x3ec9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ec9f0: 0x91820002  lbu         $v0, 0x2($t4)
    ctx->pc = 0x3ec9f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x3ec9f4: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ec9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ec9f8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ec9f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ec9fc: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x3ec9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_3eca00:
    // 0x3eca00: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x3eca00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3eca04: 0x95a20002  lhu         $v0, 0x2($t5)
    ctx->pc = 0x3eca04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3eca08: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3ECA08u;
    {
        const bool branch_taken_0x3eca08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eca08) {
            ctx->pc = 0x3ECA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECA08u;
            // 0x3eca0c: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECA4Cu;
            goto label_3eca4c;
        }
    }
    ctx->pc = 0x3ECA10u;
    // 0x3eca10: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x3eca10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3eca14: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x3eca14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3eca18: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3ECA18u;
    {
        const bool branch_taken_0x3eca18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eca18) {
            ctx->pc = 0x3ECA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECA18u;
            // 0x3eca1c: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECA4Cu;
            goto label_3eca4c;
        }
    }
    ctx->pc = 0x3ECA20u;
    // 0x3eca20: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x3eca20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x3eca24: 0x95a20006  lhu         $v0, 0x6($t5)
    ctx->pc = 0x3eca24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x3eca28: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ECA28u;
    {
        const bool branch_taken_0x3eca28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eca28) {
            ctx->pc = 0x3ECA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECA28u;
            // 0x3eca2c: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECA4Cu;
            goto label_3eca4c;
        }
    }
    ctx->pc = 0x3ECA30u;
    // 0x3eca30: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x3eca30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3eca34: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3eca34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eca38: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3eca38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3eca3c: 0xa1030004  sb          $v1, 0x4($t0)
    ctx->pc = 0x3eca3cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eca40: 0x92e20006  lbu         $v0, 0x6($s7)
    ctx->pc = 0x3eca40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3eca44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3ECA44u;
    {
        const bool branch_taken_0x3eca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA44u;
        // 0x3eca48: 0xa1220005  sb          $v0, 0x5($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eca44) {
            ctx->pc = 0x3ECA78u;
            goto label_3eca78;
        }
    }
    ctx->pc = 0x3ECA4Cu;
label_3eca4c:
    // 0x3eca4c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3eca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3eca50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3eca50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eca54: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x3eca54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eca58: 0x91420004  lbu         $v0, 0x4($t2)
    ctx->pc = 0x3eca58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x3eca5c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3eca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3eca60: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3eca60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eca64: 0xa1630004  sb          $v1, 0x4($t3)
    ctx->pc = 0x3eca64u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eca68: 0x91820005  lbu         $v0, 0x5($t4)
    ctx->pc = 0x3eca68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x3eca6c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3eca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3eca70: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3eca70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eca74: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x3eca74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
label_3eca78:
    // 0x3eca78: 0x67de0002  daddiu      $fp, $fp, 0x2
    ctx->pc = 0x3eca78u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
    // 0x3eca7c: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x3eca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x3eca80: 0x258c0006  addiu       $t4, $t4, 0x6
    ctx->pc = 0x3eca80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 6));
    // 0x3eca84: 0x256b0006  addiu       $t3, $t3, 0x6
    ctx->pc = 0x3eca84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x3eca88: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x3eca88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
    // 0x3eca8c: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x3eca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x3eca90: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x3eca90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x3eca94: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x3eca94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x3eca98: 0x24e70006  addiu       $a3, $a3, 0x6
    ctx->pc = 0x3eca98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x3eca9c: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3eca9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ecaa0: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x3ECAA0u;
    {
        const bool branch_taken_0x3ecaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ECAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAA0u;
        // 0x3ecaa4: 0x24c60006  addiu       $a2, $a2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecaa0) {
            ctx->pc = 0x3EC988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec988;
        }
    }
    ctx->pc = 0x3ECAA8u;
    // 0x3ecaa8: 0x100004c9  b           . + 4 + (0x4C9 << 2)
    ctx->pc = 0x3ECAA8u;
    {
        const bool branch_taken_0x3ecaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAA8u;
        // 0x3ecaac: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecaa8) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3ECAB0u;
label_3ecab0:
    // 0x3ecab0: 0x132004c6  beqz        $t9, . + 4 + (0x4C6 << 2)
    ctx->pc = 0x3ECAB0u;
    {
        const bool branch_taken_0x3ecab0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAB0u;
        // 0x3ecab4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecab0) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ECAB8u;
    // 0x3ecab8: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x3ecab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecabc: 0x1b200003  blez        $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ECABCu;
    {
        const bool branch_taken_0x3ecabc = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3ECAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECABCu;
        // 0x3ecac0: 0x33220001  andi        $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecabc) {
            ctx->pc = 0x3ECACCu;
            goto label_3ecacc;
        }
    }
    ctx->pc = 0x3ECAC4u;
    // 0x3ecac4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3ECAC4u;
    {
        const bool branch_taken_0x3ecac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAC4u;
        // 0x3ecac8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecac4) {
            ctx->pc = 0x3ECB24u;
            goto label_3ecb24;
        }
    }
    ctx->pc = 0x3ECACCu;
label_3ecacc:
    // 0x3ecacc: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x3ecaccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ecad0: 0x95a20002  lhu         $v0, 0x2($t5)
    ctx->pc = 0x3ecad0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3ecad4: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3ECAD4u;
    {
        const bool branch_taken_0x3ecad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ecad4) {
            ctx->pc = 0x3ECAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECAD4u;
            // 0x3ecad8: 0x67de0001  daddiu      $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECB14u;
            goto label_3ecb14;
        }
    }
    ctx->pc = 0x3ECADCu;
    // 0x3ecadc: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x3ecadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x3ecae0: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x3ecae0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3ecae4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3ECAE4u;
    {
        const bool branch_taken_0x3ecae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ECAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAE4u;
        // 0x3ecae8: 0x67de0001  daddiu      $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecae4) {
            ctx->pc = 0x3ECB14u;
            goto label_3ecb14;
        }
    }
    ctx->pc = 0x3ECAECu;
    // 0x3ecaec: 0x91830002  lbu         $v1, 0x2($t4)
    ctx->pc = 0x3ecaecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x3ecaf0: 0x95a20006  lhu         $v0, 0x6($t5)
    ctx->pc = 0x3ecaf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x3ecaf4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3ECAF4u;
    {
        const bool branch_taken_0x3ecaf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ecaf4) {
            ctx->pc = 0x3ECB14u;
            goto label_3ecb14;
        }
    }
    ctx->pc = 0x3ECAFCu;
    // 0x3ecafc: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x3ecafcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ecb00: 0xa1820000  sb          $v0, 0x0($t4)
    ctx->pc = 0x3ecb00u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ecb04: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3ecb04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ecb08: 0xa1830001  sb          $v1, 0x1($t4)
    ctx->pc = 0x3ecb08u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecb0c: 0x92e20006  lbu         $v0, 0x6($s7)
    ctx->pc = 0x3ecb0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ecb10: 0xa1820002  sb          $v0, 0x2($t4)
    ctx->pc = 0x3ecb10u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2), (uint8_t)GPR_U32(ctx, 2));
label_3ecb14:
    // 0x3ecb14: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ecb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ecb18: 0x104004ac  beqz        $v0, . + 4 + (0x4AC << 2)
    ctx->pc = 0x3ECB18u;
    {
        const bool branch_taken_0x3ecb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB18u;
        // 0x3ecb1c: 0x24840003  addiu       $a0, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecb18) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ECB20u;
    // 0x3ecb20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ecb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ecb24:
    // 0x3ecb24: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3ecb24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecb28: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3ecb28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecb2c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3ecb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ecb30:
    // 0x3ecb30: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3ecb30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ecb34: 0x95a20002  lhu         $v0, 0x2($t5)
    ctx->pc = 0x3ecb34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3ecb38: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3ECB38u;
    {
        const bool branch_taken_0x3ecb38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ecb38) {
            ctx->pc = 0x3ECB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECB38u;
            // 0x3ecb3c: 0x90830003  lbu         $v1, 0x3($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECB80u;
            goto label_3ecb80;
        }
    }
    ctx->pc = 0x3ECB40u;
    // 0x3ecb40: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3ecb40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3ecb44: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x3ecb44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3ecb48: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3ECB48u;
    {
        const bool branch_taken_0x3ecb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ecb48) {
            ctx->pc = 0x3ECB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECB48u;
            // 0x3ecb4c: 0x90830003  lbu         $v1, 0x3($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECB7Cu;
            goto label_3ecb7c;
        }
    }
    ctx->pc = 0x3ECB50u;
    // 0x3ecb50: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x3ecb50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3ecb54: 0x95a20006  lhu         $v0, 0x6($t5)
    ctx->pc = 0x3ecb54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x3ecb58: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ECB58u;
    {
        const bool branch_taken_0x3ecb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ecb58) {
            ctx->pc = 0x3ECB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECB58u;
            // 0x3ecb5c: 0x90830003  lbu         $v1, 0x3($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECB7Cu;
            goto label_3ecb7c;
        }
    }
    ctx->pc = 0x3ECB60u;
    // 0x3ecb60: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x3ecb60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ecb64: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ecb64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ecb68: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3ecb68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ecb6c: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x3ecb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecb70: 0x92e20006  lbu         $v0, 0x6($s7)
    ctx->pc = 0x3ecb70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ecb74: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3ecb74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ecb78: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x3ecb78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_3ecb7c:
    // 0x3ecb7c: 0x95a20002  lhu         $v0, 0x2($t5)
    ctx->pc = 0x3ecb7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
label_3ecb80:
    // 0x3ecb80: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3ECB80u;
    {
        const bool branch_taken_0x3ecb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ecb80) {
            ctx->pc = 0x3ECB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECB80u;
            // 0x3ecb84: 0x67de0002  daddiu      $fp, $fp, 0x2 (Delay Slot)
            SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECBC0u;
            goto label_3ecbc0;
        }
    }
    ctx->pc = 0x3ECB88u;
    // 0x3ecb88: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x3ecb88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3ecb8c: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x3ecb8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3ecb90: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3ECB90u;
    {
        const bool branch_taken_0x3ecb90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ECB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB90u;
        // 0x3ecb94: 0x67de0002  daddiu      $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecb90) {
            ctx->pc = 0x3ECBC0u;
            goto label_3ecbc0;
        }
    }
    ctx->pc = 0x3ECB98u;
    // 0x3ecb98: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x3ecb98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x3ecb9c: 0x95a20006  lhu         $v0, 0x6($t5)
    ctx->pc = 0x3ecb9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x3ecba0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3ECBA0u;
    {
        const bool branch_taken_0x3ecba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ecba0) {
            ctx->pc = 0x3ECBC0u;
            goto label_3ecbc0;
        }
    }
    ctx->pc = 0x3ECBA8u;
    // 0x3ecba8: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x3ecba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ecbac: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3ecbacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ecbb0: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3ecbb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ecbb4: 0xa1030004  sb          $v1, 0x4($t0)
    ctx->pc = 0x3ecbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecbb8: 0x92e20006  lbu         $v0, 0x6($s7)
    ctx->pc = 0x3ecbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ecbbc: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x3ecbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
label_3ecbc0:
    // 0x3ecbc0: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x3ecbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x3ecbc4: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x3ecbc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x3ecbc8: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x3ecbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x3ecbcc: 0x24e70006  addiu       $a3, $a3, 0x6
    ctx->pc = 0x3ecbccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x3ecbd0: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ecbd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ecbd4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3ECBD4u;
    {
        const bool branch_taken_0x3ecbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ECBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECBD4u;
        // 0x3ecbd8: 0x24c60006  addiu       $a2, $a2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecbd4) {
            ctx->pc = 0x3ECB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ecb30;
        }
    }
    ctx->pc = 0x3ECBDCu;
    // 0x3ecbdc: 0x1000047c  b           . + 4 + (0x47C << 2)
    ctx->pc = 0x3ECBDCu;
    {
        const bool branch_taken_0x3ecbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECBDCu;
        // 0x3ecbe0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecbdc) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3ECBE4u;
label_3ecbe4:
    // 0x3ecbe4: 0x12c00052  beqz        $s6, . + 4 + (0x52 << 2)
    ctx->pc = 0x3ECBE4u;
    {
        const bool branch_taken_0x3ecbe4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ecbe4) {
            ctx->pc = 0x3ECD30u;
            goto label_3ecd30;
        }
    }
    ctx->pc = 0x3ECBECu;
    // 0x3ecbec: 0x13200477  beqz        $t9, . + 4 + (0x477 << 2)
    ctx->pc = 0x3ECBECu;
    {
        const bool branch_taken_0x3ecbec = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECBECu;
        // 0x3ecbf0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecbec) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ECBF4u;
    // 0x3ecbf4: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x3ecbf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_3ecbf8:
    // 0x3ecbf8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ecbf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ecbfc: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x3ecbfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3ecc00: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ecc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ecc04: 0x91230002  lbu         $v1, 0x2($t1)
    ctx->pc = 0x3ecc04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3ecc08: 0x91250004  lbu         $a1, 0x4($t1)
    ctx->pc = 0x3ecc08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3ecc0c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ecc0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ecc10: 0x91260003  lbu         $a2, 0x3($t1)
    ctx->pc = 0x3ecc10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x3ecc14: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3ecc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3ecc18: 0x91270005  lbu         $a3, 0x5($t1)
    ctx->pc = 0x3ecc18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x3ecc1c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3ecc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3ecc20: 0x95a20002  lhu         $v0, 0x2($t5)
    ctx->pc = 0x3ecc20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3ecc24: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3ecc24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3ecc28: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3ECC28u;
    {
        const bool branch_taken_0x3ecc28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ECC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC28u;
        // 0x3ecc2c: 0xe53825  or          $a3, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc28) {
            ctx->pc = 0x3ECC88u;
            goto label_3ecc88;
        }
    }
    ctx->pc = 0x3ECC30u;
    // 0x3ecc30: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x3ecc30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3ecc34: 0x54c20015  bnel        $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3ECC34u;
    {
        const bool branch_taken_0x3ecc34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ecc34) {
            ctx->pc = 0x3ECC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECC34u;
            // 0x3ecc38: 0x91220001  lbu         $v0, 0x1($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECC8Cu;
            goto label_3ecc8c;
        }
    }
    ctx->pc = 0x3ECC3Cu;
    // 0x3ecc3c: 0x95a20006  lhu         $v0, 0x6($t5)
    ctx->pc = 0x3ecc3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x3ecc40: 0x54e20012  bnel        $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3ECC40u;
    {
        const bool branch_taken_0x3ecc40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ecc40) {
            ctx->pc = 0x3ECC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECC40u;
            // 0x3ecc44: 0x91220001  lbu         $v0, 0x1($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECC8Cu;
            goto label_3ecc8c;
        }
    }
    ctx->pc = 0x3ECC48u;
    // 0x3ecc48: 0x96e20002  lhu         $v0, 0x2($s7)
    ctx->pc = 0x3ecc48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ecc4c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ecc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ecc50: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x3ecc50u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ecc54: 0x92e30002  lbu         $v1, 0x2($s7)
    ctx->pc = 0x3ecc54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ecc58: 0xa1230001  sb          $v1, 0x1($t1)
    ctx->pc = 0x3ecc58u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecc5c: 0x96e20004  lhu         $v0, 0x4($s7)
    ctx->pc = 0x3ecc5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ecc60: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ecc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ecc64: 0xa1220002  sb          $v0, 0x2($t1)
    ctx->pc = 0x3ecc64u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ecc68: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3ecc68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ecc6c: 0xa1230003  sb          $v1, 0x3($t1)
    ctx->pc = 0x3ecc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecc70: 0x96e20006  lhu         $v0, 0x6($s7)
    ctx->pc = 0x3ecc70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ecc74: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ecc74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ecc78: 0xa1220004  sb          $v0, 0x4($t1)
    ctx->pc = 0x3ecc78u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ecc7c: 0x92e30006  lbu         $v1, 0x6($s7)
    ctx->pc = 0x3ecc7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ecc80: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3ECC80u;
    {
        const bool branch_taken_0x3ecc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC80u;
        // 0x3ecc84: 0xa1230005  sb          $v1, 0x5($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc80) {
            ctx->pc = 0x3ECD18u;
            goto label_3ecd18;
        }
    }
    ctx->pc = 0x3ECC88u;
label_3ecc88:
    // 0x3ecc88: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x3ecc88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_3ecc8c:
    // 0x3ecc8c: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x3ecc8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ecc90: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3ecc90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3ecc94: 0x91230003  lbu         $v1, 0x3($t1)
    ctx->pc = 0x3ecc94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x3ecc98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ecc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ecc9c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ecc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ecca0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3ecca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3ecca4: 0x2a31807  srav        $v1, $v1, $s5
    ctx->pc = 0x3ecca4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x3ecca8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3ecca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eccac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3eccacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3eccb0: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x3eccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x3eccb4: 0x91260002  lbu         $a2, 0x2($t1)
    ctx->pc = 0x3eccb4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3eccb8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3eccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3eccbc: 0x91250005  lbu         $a1, 0x5($t1)
    ctx->pc = 0x3eccbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x3eccc0: 0x94870000  lhu         $a3, 0x0($a0)
    ctx->pc = 0x3eccc0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eccc4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3eccc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3eccc8: 0x2a52807  srav        $a1, $a1, $s5
    ctx->pc = 0x3eccc8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 21) & 0x1F));
    // 0x3ecccc: 0x91280004  lbu         $t0, 0x4($t1)
    ctx->pc = 0x3eccccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3eccd0: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x3eccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x3eccd4: 0xa1270001  sb          $a3, 0x1($t1)
    ctx->pc = 0x3eccd4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x3eccd8: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x3eccd8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eccdc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3eccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3ecce0: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x3ecce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x3ecce4: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3ecce4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3ecce8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ecce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eccec: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3eccecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3eccf0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x3eccf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eccf4: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x3eccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3eccf8: 0xa1230003  sb          $v1, 0x3($t1)
    ctx->pc = 0x3eccf8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eccfc: 0xa1240002  sb          $a0, 0x2($t1)
    ctx->pc = 0x3eccfcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ecd00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3ecd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ecd04: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x3ecd04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3ecd08: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x3ecd08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ecd0c: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x3ecd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3ecd10: 0xa1230005  sb          $v1, 0x5($t1)
    ctx->pc = 0x3ecd10u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecd14: 0xa1220004  sb          $v0, 0x4($t1)
    ctx->pc = 0x3ecd14u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 2));
label_3ecd18:
    // 0x3ecd18: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ecd18u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3ecd1c: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ecd1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ecd20: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x3ECD20u;
    {
        const bool branch_taken_0x3ecd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ECD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD20u;
        // 0x3ecd24: 0x25290006  addiu       $t1, $t1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd20) {
            ctx->pc = 0x3ECBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ecbf8;
        }
    }
    ctx->pc = 0x3ECD28u;
    // 0x3ecd28: 0x10000429  b           . + 4 + (0x429 << 2)
    ctx->pc = 0x3ECD28u;
    {
        const bool branch_taken_0x3ecd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD28u;
        // 0x3ecd2c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd28) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3ECD30u;
label_3ecd30:
    // 0x3ecd30: 0x13200426  beqz        $t9, . + 4 + (0x426 << 2)
    ctx->pc = 0x3ECD30u;
    {
        const bool branch_taken_0x3ecd30 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD30u;
        // 0x3ecd34: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd30) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ECD38u;
    // 0x3ecd38: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x3ecd38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecd3c: 0x1b200003  blez        $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ECD3Cu;
    {
        const bool branch_taken_0x3ecd3c = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3ECD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD3Cu;
        // 0x3ecd40: 0x33220001  andi        $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd3c) {
            ctx->pc = 0x3ECD4Cu;
            goto label_3ecd4c;
        }
    }
    ctx->pc = 0x3ECD44u;
    // 0x3ecd44: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3ECD44u;
    {
        const bool branch_taken_0x3ecd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD44u;
        // 0x3ecd48: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd44) {
            ctx->pc = 0x3ECDECu;
            goto label_3ecdec;
        }
    }
    ctx->pc = 0x3ECD4Cu;
label_3ecd4c:
    // 0x3ecd4c: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3ecd4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ecd50: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x3ecd50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x3ecd54: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ecd54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ecd58: 0x91830002  lbu         $v1, 0x2($t4)
    ctx->pc = 0x3ecd58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x3ecd5c: 0x91850004  lbu         $a1, 0x4($t4)
    ctx->pc = 0x3ecd5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x3ecd60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ecd60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ecd64: 0x91860003  lbu         $a2, 0x3($t4)
    ctx->pc = 0x3ecd64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x3ecd68: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3ecd68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3ecd6c: 0x91870005  lbu         $a3, 0x5($t4)
    ctx->pc = 0x3ecd6cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x3ecd70: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3ecd70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3ecd74: 0x95a20002  lhu         $v0, 0x2($t5)
    ctx->pc = 0x3ecd74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3ecd78: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3ecd78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3ecd7c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3ECD7Cu;
    {
        const bool branch_taken_0x3ecd7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ECD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD7Cu;
        // 0x3ecd80: 0xe53825  or          $a3, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd7c) {
            ctx->pc = 0x3ECDD8u;
            goto label_3ecdd8;
        }
    }
    ctx->pc = 0x3ECD84u;
    // 0x3ecd84: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x3ecd84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3ecd88: 0x54c20014  bnel        $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3ECD88u;
    {
        const bool branch_taken_0x3ecd88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ecd88) {
            ctx->pc = 0x3ECD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECD88u;
            // 0x3ecd8c: 0x67de0001  daddiu      $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECDDCu;
            goto label_3ecddc;
        }
    }
    ctx->pc = 0x3ECD90u;
    // 0x3ecd90: 0x95a20006  lhu         $v0, 0x6($t5)
    ctx->pc = 0x3ecd90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x3ecd94: 0x54e20011  bnel        $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3ECD94u;
    {
        const bool branch_taken_0x3ecd94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ecd94) {
            ctx->pc = 0x3ECD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECD94u;
            // 0x3ecd98: 0x67de0001  daddiu      $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECDDCu;
            goto label_3ecddc;
        }
    }
    ctx->pc = 0x3ECD9Cu;
    // 0x3ecd9c: 0x96e20002  lhu         $v0, 0x2($s7)
    ctx->pc = 0x3ecd9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ecda0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ecda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ecda4: 0xa1820000  sb          $v0, 0x0($t4)
    ctx->pc = 0x3ecda4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ecda8: 0x92e30002  lbu         $v1, 0x2($s7)
    ctx->pc = 0x3ecda8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ecdac: 0xa1830001  sb          $v1, 0x1($t4)
    ctx->pc = 0x3ecdacu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecdb0: 0x96e20004  lhu         $v0, 0x4($s7)
    ctx->pc = 0x3ecdb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ecdb4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ecdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ecdb8: 0xa1820002  sb          $v0, 0x2($t4)
    ctx->pc = 0x3ecdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ecdbc: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3ecdbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ecdc0: 0xa1830003  sb          $v1, 0x3($t4)
    ctx->pc = 0x3ecdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecdc4: 0x96e20006  lhu         $v0, 0x6($s7)
    ctx->pc = 0x3ecdc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ecdc8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ecdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ecdcc: 0xa1820004  sb          $v0, 0x4($t4)
    ctx->pc = 0x3ecdccu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ecdd0: 0x92e30006  lbu         $v1, 0x6($s7)
    ctx->pc = 0x3ecdd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ecdd4: 0xa1830005  sb          $v1, 0x5($t4)
    ctx->pc = 0x3ecdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 5), (uint8_t)GPR_U32(ctx, 3));
label_3ecdd8:
    // 0x3ecdd8: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ecdd8u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
label_3ecddc:
    // 0x3ecddc: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ecddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ecde0: 0x104003fa  beqz        $v0, . + 4 + (0x3FA << 2)
    ctx->pc = 0x3ECDE0u;
    {
        const bool branch_taken_0x3ecde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECDE0u;
        // 0x3ecde4: 0x25080006  addiu       $t0, $t0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecde0) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ECDE8u;
    // 0x3ecde8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3ecde8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3ecdec:
    // 0x3ecdec: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3ecdecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecdf0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3ecdf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecdf4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3ecdf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecdf8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3ecdf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecdfc: 0x100782d  daddu       $t7, $t0, $zero
    ctx->pc = 0x3ecdfcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ece00: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x3ece00u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ece04: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x3ece04u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ece08: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x3ece08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ece0c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3ece0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3ece10:
    // 0x3ece10: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ece10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ece14: 0x91440001  lbu         $a0, 0x1($t2)
    ctx->pc = 0x3ece14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x3ece18: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ece18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ece1c: 0x91630002  lbu         $v1, 0x2($t3)
    ctx->pc = 0x3ece1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3ece20: 0x91c50004  lbu         $a1, 0x4($t6)
    ctx->pc = 0x3ece20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x3ece24: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ece24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ece28: 0x91860003  lbu         $a2, 0x3($t4)
    ctx->pc = 0x3ece28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x3ece2c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3ece2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3ece30: 0x91e70005  lbu         $a3, 0x5($t7)
    ctx->pc = 0x3ece30u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 5)));
    // 0x3ece34: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3ece34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3ece38: 0x95a20002  lhu         $v0, 0x2($t5)
    ctx->pc = 0x3ece38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3ece3c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3ece3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3ece40: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3ECE40u;
    {
        const bool branch_taken_0x3ece40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ECE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE40u;
        // 0x3ece44: 0xe53825  or          $a3, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece40) {
            ctx->pc = 0x3ECE9Cu;
            goto label_3ece9c;
        }
    }
    ctx->pc = 0x3ECE48u;
    // 0x3ece48: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x3ece48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3ece4c: 0x54c20014  bnel        $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3ECE4Cu;
    {
        const bool branch_taken_0x3ece4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ece4c) {
            ctx->pc = 0x3ECE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECE4Cu;
            // 0x3ece50: 0x91220006  lbu         $v0, 0x6($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECEA0u;
            goto label_3ecea0;
        }
    }
    ctx->pc = 0x3ECE54u;
    // 0x3ece54: 0x95a20006  lhu         $v0, 0x6($t5)
    ctx->pc = 0x3ece54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x3ece58: 0x54e20011  bnel        $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3ECE58u;
    {
        const bool branch_taken_0x3ece58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ece58) {
            ctx->pc = 0x3ECE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECE58u;
            // 0x3ece5c: 0x91220006  lbu         $v0, 0x6($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECEA0u;
            goto label_3ecea0;
        }
    }
    ctx->pc = 0x3ECE60u;
    // 0x3ece60: 0x96e20002  lhu         $v0, 0x2($s7)
    ctx->pc = 0x3ece60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ece64: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ece64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ece68: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x3ece68u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ece6c: 0x92e30002  lbu         $v1, 0x2($s7)
    ctx->pc = 0x3ece6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ece70: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3ece70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ece74: 0x96e20004  lhu         $v0, 0x4($s7)
    ctx->pc = 0x3ece74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ece78: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ece78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ece7c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x3ece7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ece80: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3ece80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ece84: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x3ece84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ece88: 0x96e20006  lhu         $v0, 0x6($s7)
    ctx->pc = 0x3ece88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ece8c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ece8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ece90: 0xa2620004  sb          $v0, 0x4($s3)
    ctx->pc = 0x3ece90u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ece94: 0x92e30006  lbu         $v1, 0x6($s7)
    ctx->pc = 0x3ece94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ece98: 0xa1030005  sb          $v1, 0x5($t0)
    ctx->pc = 0x3ece98u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 3));
label_3ece9c:
    // 0x3ece9c: 0x91220006  lbu         $v0, 0x6($t1)
    ctx->pc = 0x3ece9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
label_3ecea0:
    // 0x3ecea0: 0x91440007  lbu         $a0, 0x7($t2)
    ctx->pc = 0x3ecea0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
    // 0x3ecea4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ecea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ecea8: 0x91630008  lbu         $v1, 0x8($t3)
    ctx->pc = 0x3ecea8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x3eceac: 0x91c5000a  lbu         $a1, 0xA($t6)
    ctx->pc = 0x3eceacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 10)));
    // 0x3eceb0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3eceb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3eceb4: 0x91860009  lbu         $a2, 0x9($t4)
    ctx->pc = 0x3eceb4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x3eceb8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3eceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3ecebc: 0x91e7000b  lbu         $a3, 0xB($t7)
    ctx->pc = 0x3ecebcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 11)));
    // 0x3ecec0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3ecec0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3ecec4: 0x95a20002  lhu         $v0, 0x2($t5)
    ctx->pc = 0x3ecec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3ecec8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3ecec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3ececc: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3ECECCu;
    {
        const bool branch_taken_0x3ececc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ECED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECECCu;
        // 0x3eced0: 0xe53825  or          $a3, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ececc) {
            ctx->pc = 0x3ECF28u;
            goto label_3ecf28;
        }
    }
    ctx->pc = 0x3ECED4u;
    // 0x3eced4: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x3eced4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3eced8: 0x54c20014  bnel        $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3ECED8u;
    {
        const bool branch_taken_0x3eced8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eced8) {
            ctx->pc = 0x3ECEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECED8u;
            // 0x3ecedc: 0x67de0002  daddiu      $fp, $fp, 0x2 (Delay Slot)
            SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECF2Cu;
            goto label_3ecf2c;
        }
    }
    ctx->pc = 0x3ECEE0u;
    // 0x3ecee0: 0x95a20006  lhu         $v0, 0x6($t5)
    ctx->pc = 0x3ecee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x3ecee4: 0x54e20011  bnel        $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3ECEE4u;
    {
        const bool branch_taken_0x3ecee4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ecee4) {
            ctx->pc = 0x3ECEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECEE4u;
            // 0x3ecee8: 0x67de0002  daddiu      $fp, $fp, 0x2 (Delay Slot)
            SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECF2Cu;
            goto label_3ecf2c;
        }
    }
    ctx->pc = 0x3ECEECu;
    // 0x3eceec: 0x96e20002  lhu         $v0, 0x2($s7)
    ctx->pc = 0x3eceecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ecef0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ecef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ecef4: 0xa1220006  sb          $v0, 0x6($t1)
    ctx->pc = 0x3ecef4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ecef8: 0x92e30002  lbu         $v1, 0x2($s7)
    ctx->pc = 0x3ecef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ecefc: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x3ecefcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecf00: 0x96e20004  lhu         $v0, 0x4($s7)
    ctx->pc = 0x3ecf00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ecf04: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ecf04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ecf08: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x3ecf08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ecf0c: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3ecf0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ecf10: 0xa2430009  sb          $v1, 0x9($s2)
    ctx->pc = 0x3ecf10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecf14: 0x96e20006  lhu         $v0, 0x6($s7)
    ctx->pc = 0x3ecf14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ecf18: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ecf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ecf1c: 0xa262000a  sb          $v0, 0xA($s3)
    ctx->pc = 0x3ecf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ecf20: 0x92e30006  lbu         $v1, 0x6($s7)
    ctx->pc = 0x3ecf20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ecf24: 0xa103000b  sb          $v1, 0xB($t0)
    ctx->pc = 0x3ecf24u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 11), (uint8_t)GPR_U32(ctx, 3));
label_3ecf28:
    // 0x3ecf28: 0x67de0002  daddiu      $fp, $fp, 0x2
    ctx->pc = 0x3ecf28u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
label_3ecf2c:
    // 0x3ecf2c: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x3ecf2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x3ecf30: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x3ecf30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x3ecf34: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x3ecf34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x3ecf38: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x3ecf38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3ecf3c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x3ecf3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3ecf40: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x3ecf40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x3ecf44: 0x25ef000c  addiu       $t7, $t7, 0xC
    ctx->pc = 0x3ecf44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12));
    // 0x3ecf48: 0x25ce000c  addiu       $t6, $t6, 0xC
    ctx->pc = 0x3ecf48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12));
    // 0x3ecf4c: 0x258c000c  addiu       $t4, $t4, 0xC
    ctx->pc = 0x3ecf4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
    // 0x3ecf50: 0x256b000c  addiu       $t3, $t3, 0xC
    ctx->pc = 0x3ecf50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
    // 0x3ecf54: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ecf54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ecf58: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x3ECF58u;
    {
        const bool branch_taken_0x3ecf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ECF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF58u;
        // 0x3ecf5c: 0x254a000c  addiu       $t2, $t2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecf58) {
            ctx->pc = 0x3ECE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ece10;
        }
    }
    ctx->pc = 0x3ECF60u;
    // 0x3ecf60: 0x1000039b  b           . + 4 + (0x39B << 2)
    ctx->pc = 0x3ECF60u;
    {
        const bool branch_taken_0x3ecf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF60u;
        // 0x3ecf64: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecf60) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3ECF68u;
label_3ecf68:
    // 0x3ecf68: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3ecf68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ecf6c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ecf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ecf70: 0x90a30011  lbu         $v1, 0x11($a1)
    ctx->pc = 0x3ecf70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x3ecf74: 0x146200ca  bne         $v1, $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x3ECF74u;
    {
        const bool branch_taken_0x3ecf74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ecf74) {
            ctx->pc = 0x3ED2A0u;
            goto label_3ed2a0;
        }
    }
    ctx->pc = 0x3ECF7Cu;
    // 0x3ecf7c: 0x11600072  beqz        $t3, . + 4 + (0x72 << 2)
    ctx->pc = 0x3ECF7Cu;
    {
        const bool branch_taken_0x3ecf7c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF7Cu;
        // 0x3ecf80: 0x180902d  daddu       $s2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecf7c) {
            ctx->pc = 0x3ED148u;
            goto label_3ed148;
        }
    }
    ctx->pc = 0x3ECF84u;
    // 0x3ecf84: 0x11e00070  beqz        $t7, . + 4 + (0x70 << 2)
    ctx->pc = 0x3ECF84u;
    {
        const bool branch_taken_0x3ecf84 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ecf84) {
            ctx->pc = 0x3ED148u;
            goto label_3ed148;
        }
    }
    ctx->pc = 0x3ECF8Cu;
    // 0x3ecf8c: 0x11c0006e  beqz        $t6, . + 4 + (0x6E << 2)
    ctx->pc = 0x3ECF8Cu;
    {
        const bool branch_taken_0x3ecf8c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ecf8c) {
            ctx->pc = 0x3ED148u;
            goto label_3ed148;
        }
    }
    ctx->pc = 0x3ECF94u;
    // 0x3ecf94: 0x1320038d  beqz        $t9, . + 4 + (0x38D << 2)
    ctx->pc = 0x3ECF94u;
    {
        const bool branch_taken_0x3ecf94 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF94u;
        // 0x3ecf98: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecf94) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ECF9Cu;
    // 0x3ecf9c: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x3ecf9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ecfa0: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x3ecfa0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecfa4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3ecfa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecfa8: 0x1b200003  blez        $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ECFA8u;
    {
        const bool branch_taken_0x3ecfa8 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3ECFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECFA8u;
        // 0x3ecfac: 0x33220001  andi        $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecfa8) {
            ctx->pc = 0x3ECFB8u;
            goto label_3ecfb8;
        }
    }
    ctx->pc = 0x3ECFB0u;
    // 0x3ecfb0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3ECFB0u;
    {
        const bool branch_taken_0x3ecfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECFB0u;
        // 0x3ecfb4: 0x120602d  daddu       $t4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecfb0) {
            ctx->pc = 0x3ED040u;
            goto label_3ed040;
        }
    }
    ctx->pc = 0x3ECFB8u;
label_3ecfb8:
    // 0x3ecfb8: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x3ecfb8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3ecfbc: 0x14f00004  bne         $a3, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ECFBCu;
    {
        const bool branch_taken_0x3ecfbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 16));
        if (branch_taken_0x3ecfbc) {
            ctx->pc = 0x3ECFD0u;
            goto label_3ecfd0;
        }
    }
    ctx->pc = 0x3ECFC4u;
    // 0x3ecfc4: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3ecfc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ecfc8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3ECFC8u;
    {
        const bool branch_taken_0x3ecfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECFC8u;
        // 0x3ecfcc: 0x1c21021  addu        $v0, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecfc8) {
            ctx->pc = 0x3ED020u;
            goto label_3ed020;
        }
    }
    ctx->pc = 0x3ECFD0u;
label_3ecfd0:
    // 0x3ecfd0: 0x54e00004  bnel        $a3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ECFD0u;
    {
        const bool branch_taken_0x3ecfd0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ecfd0) {
            ctx->pc = 0x3ECFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECFD0u;
            // 0x3ecfd4: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECFE4u;
            goto label_3ecfe4;
        }
    }
    ctx->pc = 0x3ECFD8u;
    // 0x3ecfd8: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ecfd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ecfdc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3ECFDCu;
    {
        const bool branch_taken_0x3ecfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECFDCu;
        // 0x3ecfe0: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecfdc) {
            ctx->pc = 0x3ED028u;
            goto label_3ed028;
        }
    }
    ctx->pc = 0x3ECFE4u;
label_3ecfe4:
    // 0x3ecfe4: 0x2072823  subu        $a1, $s0, $a3
    ctx->pc = 0x3ecfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x3ecfe8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3ecfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3ecfec: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x3ecfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x3ecff0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ecff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ecff4: 0x94c40008  lhu         $a0, 0x8($a2)
    ctx->pc = 0x3ecff4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3ecff8: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x3ecff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ecffc: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x3ecffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3ed000: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ed000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ed004: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3ed004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3ed008: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ed008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ed00c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed014: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3ed014u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3ed018: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ed018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ed01c: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x3ed01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_3ed020:
    // 0x3ed020: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ed020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed024: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x3ed024u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ed028:
    // 0x3ed028: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ed028u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3ed02c: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x3ed02cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x3ed030: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ed030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ed034: 0x10400365  beqz        $v0, . + 4 + (0x365 << 2)
    ctx->pc = 0x3ED034u;
    {
        const bool branch_taken_0x3ed034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED034u;
        // 0x3ed038: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed034) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ED03Cu;
    // 0x3ed03c: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x3ed03cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3ed040:
    // 0x3ed040: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x3ed040u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed044: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x3ed044u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_3ed048:
    // 0x3ed048: 0x91a70001  lbu         $a3, 0x1($t5)
    ctx->pc = 0x3ed048u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x3ed04c: 0x14f00004  bne         $a3, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED04Cu;
    {
        const bool branch_taken_0x3ed04c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 16));
        if (branch_taken_0x3ed04c) {
            ctx->pc = 0x3ED060u;
            goto label_3ed060;
        }
    }
    ctx->pc = 0x3ED054u;
    // 0x3ed054: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3ed054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ed058: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3ED058u;
    {
        const bool branch_taken_0x3ed058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED058u;
        // 0x3ed05c: 0x1c21021  addu        $v0, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed058) {
            ctx->pc = 0x3ED0B0u;
            goto label_3ed0b0;
        }
    }
    ctx->pc = 0x3ED060u;
label_3ed060:
    // 0x3ed060: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED060u;
    {
        const bool branch_taken_0x3ed060 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED060u;
        // 0x3ed064: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed060) {
            ctx->pc = 0x3ED074u;
            goto label_3ed074;
        }
    }
    ctx->pc = 0x3ED068u;
    // 0x3ed068: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ed068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ed06c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3ED06Cu;
    {
        const bool branch_taken_0x3ed06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED06Cu;
        // 0x3ed070: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed06c) {
            ctx->pc = 0x3ED0B8u;
            goto label_3ed0b8;
        }
    }
    ctx->pc = 0x3ED074u;
label_3ed074:
    // 0x3ed074: 0x2072823  subu        $a1, $s0, $a3
    ctx->pc = 0x3ed074u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x3ed078: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x3ed078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3ed07c: 0x94440008  lhu         $a0, 0x8($v0)
    ctx->pc = 0x3ed07cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3ed080: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x3ed080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x3ed084: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ed084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ed088: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x3ed088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3ed08c: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x3ed08cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ed090: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ed090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ed094: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3ed094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3ed098: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ed098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ed09c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed0a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed0a4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3ed0a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3ed0a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ed0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ed0ac: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x3ed0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_3ed0b0:
    // 0x3ed0b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ed0b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed0b4: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x3ed0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ed0b8:
    // 0x3ed0b8: 0x91a70003  lbu         $a3, 0x3($t5)
    ctx->pc = 0x3ed0b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x3ed0bc: 0x14f00004  bne         $a3, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED0BCu;
    {
        const bool branch_taken_0x3ed0bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 16));
        if (branch_taken_0x3ed0bc) {
            ctx->pc = 0x3ED0D0u;
            goto label_3ed0d0;
        }
    }
    ctx->pc = 0x3ED0C4u;
    // 0x3ed0c4: 0x91820002  lbu         $v0, 0x2($t4)
    ctx->pc = 0x3ed0c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x3ed0c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3ED0C8u;
    {
        const bool branch_taken_0x3ed0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED0C8u;
        // 0x3ed0cc: 0x1c21021  addu        $v0, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed0c8) {
            ctx->pc = 0x3ED120u;
            goto label_3ed120;
        }
    }
    ctx->pc = 0x3ED0D0u;
label_3ed0d0:
    // 0x3ed0d0: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED0D0u;
    {
        const bool branch_taken_0x3ed0d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED0D0u;
        // 0x3ed0d4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed0d0) {
            ctx->pc = 0x3ED0E4u;
            goto label_3ed0e4;
        }
    }
    ctx->pc = 0x3ED0D8u;
    // 0x3ed0d8: 0x92e20008  lbu         $v0, 0x8($s7)
    ctx->pc = 0x3ed0d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ed0dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3ED0DCu;
    {
        const bool branch_taken_0x3ed0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED0DCu;
        // 0x3ed0e0: 0xa1220001  sb          $v0, 0x1($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed0dc) {
            ctx->pc = 0x3ED128u;
            goto label_3ed128;
        }
    }
    ctx->pc = 0x3ED0E4u;
label_3ed0e4:
    // 0x3ed0e4: 0x2072823  subu        $a1, $s0, $a3
    ctx->pc = 0x3ed0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x3ed0e8: 0x91830002  lbu         $v1, 0x2($t4)
    ctx->pc = 0x3ed0e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x3ed0ec: 0x94440008  lhu         $a0, 0x8($v0)
    ctx->pc = 0x3ed0ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3ed0f0: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x3ed0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x3ed0f4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ed0f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ed0f8: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x3ed0f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3ed0fc: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x3ed0fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ed100: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ed100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ed104: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3ed104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3ed108: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ed108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ed10c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed114: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3ed114u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3ed118: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ed118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ed11c: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x3ed11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_3ed120:
    // 0x3ed120: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ed120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed124: 0xa1230001  sb          $v1, 0x1($t1)
    ctx->pc = 0x3ed124u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
label_3ed128:
    // 0x3ed128: 0x67de0002  daddiu      $fp, $fp, 0x2
    ctx->pc = 0x3ed128u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
    // 0x3ed12c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x3ed12cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x3ed130: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x3ed130u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x3ed134: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ed134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ed138: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x3ED138u;
    {
        const bool branch_taken_0x3ed138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED138u;
        // 0x3ed13c: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed138) {
            ctx->pc = 0x3ED048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ed048;
        }
    }
    ctx->pc = 0x3ED140u;
    // 0x3ed140: 0x10000323  b           . + 4 + (0x323 << 2)
    ctx->pc = 0x3ED140u;
    {
        const bool branch_taken_0x3ed140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED140u;
        // 0x3ed144: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed140) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3ED148u;
label_3ed148:
    // 0x3ed148: 0x13200320  beqz        $t9, . + 4 + (0x320 << 2)
    ctx->pc = 0x3ED148u;
    {
        const bool branch_taken_0x3ed148 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED148u;
        // 0x3ed14c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed148) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ED150u;
    // 0x3ed150: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x3ed150u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ed154: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x3ed154u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed158: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3ed158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed15c: 0x1b200003  blez        $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ED15Cu;
    {
        const bool branch_taken_0x3ed15c = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3ED160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED15Cu;
        // 0x3ed160: 0x33220001  andi        $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed15c) {
            ctx->pc = 0x3ED16Cu;
            goto label_3ed16c;
        }
    }
    ctx->pc = 0x3ED164u;
    // 0x3ed164: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3ED164u;
    {
        const bool branch_taken_0x3ed164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED164u;
        // 0x3ed168: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed164) {
            ctx->pc = 0x3ED1D0u;
            goto label_3ed1d0;
        }
    }
    ctx->pc = 0x3ED16Cu;
label_3ed16c:
    // 0x3ed16c: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x3ed16cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3ed170: 0x50ac0012  beql        $a1, $t4, . + 4 + (0x12 << 2)
    ctx->pc = 0x3ED170u;
    {
        const bool branch_taken_0x3ed170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 12));
        if (branch_taken_0x3ed170) {
            ctx->pc = 0x3ED174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED170u;
            // 0x3ed174: 0x67de0001  daddiu      $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED1BCu;
            goto label_3ed1bc;
        }
    }
    ctx->pc = 0x3ED178u;
    // 0x3ed178: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ED178u;
    {
        const bool branch_taken_0x3ed178 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED178u;
        // 0x3ed17c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed178) {
            ctx->pc = 0x3ED188u;
            goto label_3ed188;
        }
    }
    ctx->pc = 0x3ED180u;
    // 0x3ed180: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3ED180u;
    {
        const bool branch_taken_0x3ed180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED180u;
        // 0x3ed184: 0x92e20008  lbu         $v0, 0x8($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed180) {
            ctx->pc = 0x3ED1B4u;
            goto label_3ed1b4;
        }
    }
    ctx->pc = 0x3ED188u;
label_3ed188:
    // 0x3ed188: 0x1852023  subu        $a0, $t4, $a1
    ctx->pc = 0x3ed188u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3ed18c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3ed18cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ed190: 0x94c30008  lhu         $v1, 0x8($a2)
    ctx->pc = 0x3ed190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3ed194: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3ed194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ed198: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3ed198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ed19c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed1a0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3ed1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3ed1a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ed1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ed1a8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed1ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed1b0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3ed1b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_3ed1b4:
    // 0x3ed1b4: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3ed1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed1b8: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ed1b8u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
label_3ed1bc:
    // 0x3ed1bc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3ed1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3ed1c0: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ed1c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ed1c4: 0x10400301  beqz        $v0, . + 4 + (0x301 << 2)
    ctx->pc = 0x3ED1C4u;
    {
        const bool branch_taken_0x3ed1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED1C4u;
        // 0x3ed1c8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed1c4) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ED1CCu;
    // 0x3ed1cc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3ed1ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ed1d0:
    // 0x3ed1d0: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x3ed1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed1d4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x3ed1d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3ed1d8:
    // 0x3ed1d8: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x3ed1d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3ed1dc: 0x14ac0003  bne         $a1, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ED1DCu;
    {
        const bool branch_taken_0x3ed1dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 12));
        if (branch_taken_0x3ed1dc) {
            ctx->pc = 0x3ED1ECu;
            goto label_3ed1ec;
        }
    }
    ctx->pc = 0x3ED1E4u;
    // 0x3ed1e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3ED1E4u;
    {
        const bool branch_taken_0x3ed1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED1E4u;
        // 0x3ed1e8: 0x91220000  lbu         $v0, 0x0($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed1e4) {
            ctx->pc = 0x3ED228u;
            goto label_3ed228;
        }
    }
    ctx->pc = 0x3ED1ECu;
label_3ed1ec:
    // 0x3ed1ec: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ED1ECu;
    {
        const bool branch_taken_0x3ed1ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED1ECu;
        // 0x3ed1f0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed1ec) {
            ctx->pc = 0x3ED1FCu;
            goto label_3ed1fc;
        }
    }
    ctx->pc = 0x3ED1F4u;
    // 0x3ed1f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3ED1F4u;
    {
        const bool branch_taken_0x3ed1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED1F4u;
        // 0x3ed1f8: 0x92e20008  lbu         $v0, 0x8($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed1f4) {
            ctx->pc = 0x3ED228u;
            goto label_3ed228;
        }
    }
    ctx->pc = 0x3ED1FCu;
label_3ed1fc:
    // 0x3ed1fc: 0x1852023  subu        $a0, $t4, $a1
    ctx->pc = 0x3ed1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3ed200: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ed200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ed204: 0x94c30008  lhu         $v1, 0x8($a2)
    ctx->pc = 0x3ed204u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3ed208: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3ed208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ed20c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3ed20cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ed210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed214: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3ed214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3ed218: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ed218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ed21c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed224: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3ed224u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_3ed228:
    // 0x3ed228: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3ed228u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed22c: 0x91650003  lbu         $a1, 0x3($t3)
    ctx->pc = 0x3ed22cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x3ed230: 0x14ac0003  bne         $a1, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ED230u;
    {
        const bool branch_taken_0x3ed230 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 12));
        if (branch_taken_0x3ed230) {
            ctx->pc = 0x3ED240u;
            goto label_3ed240;
        }
    }
    ctx->pc = 0x3ED238u;
    // 0x3ed238: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3ED238u;
    {
        const bool branch_taken_0x3ed238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED238u;
        // 0x3ed23c: 0x91220002  lbu         $v0, 0x2($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed238) {
            ctx->pc = 0x3ED27Cu;
            goto label_3ed27c;
        }
    }
    ctx->pc = 0x3ED240u;
label_3ed240:
    // 0x3ed240: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ED240u;
    {
        const bool branch_taken_0x3ed240 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED240u;
        // 0x3ed244: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed240) {
            ctx->pc = 0x3ED250u;
            goto label_3ed250;
        }
    }
    ctx->pc = 0x3ED248u;
    // 0x3ed248: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3ED248u;
    {
        const bool branch_taken_0x3ed248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED248u;
        // 0x3ed24c: 0x92e20008  lbu         $v0, 0x8($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed248) {
            ctx->pc = 0x3ED27Cu;
            goto label_3ed27c;
        }
    }
    ctx->pc = 0x3ED250u;
label_3ed250:
    // 0x3ed250: 0x1852023  subu        $a0, $t4, $a1
    ctx->pc = 0x3ed250u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3ed254: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x3ed254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3ed258: 0x94c30008  lhu         $v1, 0x8($a2)
    ctx->pc = 0x3ed258u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3ed25c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3ed25cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ed260: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3ed260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ed264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed268: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3ed268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3ed26c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ed26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ed270: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed270u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed278: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3ed278u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_3ed27c:
    // 0x3ed27c: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x3ed27cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed280: 0x67de0002  daddiu      $fp, $fp, 0x2
    ctx->pc = 0x3ed280u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
    // 0x3ed284: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3ed284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3ed288: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3ed288u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3ed28c: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ed28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ed290: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3ED290u;
    {
        const bool branch_taken_0x3ed290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED290u;
        // 0x3ed294: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed290) {
            ctx->pc = 0x3ED1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ed1d8;
        }
    }
    ctx->pc = 0x3ED298u;
    // 0x3ed298: 0x100002cd  b           . + 4 + (0x2CD << 2)
    ctx->pc = 0x3ED298u;
    {
        const bool branch_taken_0x3ed298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED298u;
        // 0x3ed29c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed298) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3ED2A0u;
label_3ed2a0:
    // 0x3ed2a0: 0x12c00053  beqz        $s6, . + 4 + (0x53 << 2)
    ctx->pc = 0x3ED2A0u;
    {
        const bool branch_taken_0x3ed2a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED2A0u;
        // 0x3ed2a4: 0x8fa200c8  lw          $v0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed2a0) {
            ctx->pc = 0x3ED3F0u;
            goto label_3ed3f0;
        }
    }
    ctx->pc = 0x3ED2A8u;
    // 0x3ed2a8: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3ED2A8u;
    {
        const bool branch_taken_0x3ed2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED2A8u;
        // 0x3ed2ac: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed2a8) {
            ctx->pc = 0x3ED3F0u;
            goto label_3ed3f0;
        }
    }
    ctx->pc = 0x3ED2B0u;
    // 0x3ed2b0: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x3ED2B0u;
    {
        const bool branch_taken_0x3ed2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED2B0u;
        // 0x3ed2b4: 0x180902d  daddu       $s2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed2b0) {
            ctx->pc = 0x3ED3F0u;
            goto label_3ed3f0;
        }
    }
    ctx->pc = 0x3ED2B8u;
    // 0x3ed2b8: 0x132002c4  beqz        $t9, . + 4 + (0x2C4 << 2)
    ctx->pc = 0x3ED2B8u;
    {
        const bool branch_taken_0x3ed2b8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED2B8u;
        // 0x3ed2bc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed2b8) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ED2C0u;
    // 0x3ed2c0: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x3ed2c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed2c4: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x3ed2c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_3ed2c8:
    // 0x3ed2c8: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x3ed2c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3ed2cc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3ed2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3ed2d0: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x3ed2d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3ed2d4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ed2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ed2d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ed2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ed2dc: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x3ED2DCu;
    {
        const bool branch_taken_0x3ed2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ed2dc) {
            ctx->pc = 0x3ED318u;
            goto label_3ed318;
        }
    }
    ctx->pc = 0x3ED2E4u;
    // 0x3ed2e4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3ed2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3ed2e8: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3ed2e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ed2ec: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3ed2ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3ed2f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ed2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ed2f4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ed2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ed2f8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3ed2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3ed2fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ed2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed300: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ed300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ed304: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3ed304u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ed308: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed308u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed30c: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x3ed30cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed310: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3ED310u;
    {
        const bool branch_taken_0x3ed310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED310u;
        // 0x3ed314: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed310) {
            ctx->pc = 0x3ED3D4u;
            goto label_3ed3d4;
        }
    }
    ctx->pc = 0x3ED318u;
label_3ed318:
    // 0x3ed318: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3ED318u;
    {
        const bool branch_taken_0x3ed318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed318) {
            ctx->pc = 0x3ED31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED318u;
            // 0x3ed31c: 0x92420001  lbu         $v0, 0x1($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED338u;
            goto label_3ed338;
        }
    }
    ctx->pc = 0x3ED320u;
    // 0x3ed320: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ed320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ed324: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ed324u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed328: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ed328u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed32c: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ed32cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ed330: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3ED330u;
    {
        const bool branch_taken_0x3ed330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED330u;
        // 0x3ed334: 0xa2630001  sb          $v1, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed330) {
            ctx->pc = 0x3ED3D4u;
            goto label_3ed3d4;
        }
    }
    ctx->pc = 0x3ED338u;
label_3ed338:
    // 0x3ed338: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x3ed338u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3ed33c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x3ed33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3ed340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ed340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed344: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3ed344u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3ed348: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x3ed348u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ed34c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ed34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ed350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed354: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3ed354u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3ed358: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ed358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed35c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3ed35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3ed360: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x3ed360u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ed364: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3ED364u;
    SET_GPR_U32(ctx, 31, 0x3ED36Cu);
    ctx->pc = 0x3ED368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED364u;
    // 0x3ed368: 0x7fb90010  sq          $t9, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3ED364u, 0x3ED36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED36Cu;
label_3ed36c:
    // 0x3ed36c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3ed36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3ed370: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x3ed370u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3ed374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ed374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed378: 0x94a40008  lhu         $a0, 0x8($a1)
    ctx->pc = 0x3ed378u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ed37c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3ED37Cu;
    SET_GPR_U32(ctx, 31, 0x3ED384u);
    ctx->pc = 0x3ED380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED37Cu;
    // 0x3ed380: 0xd1282f  dsubu       $a1, $a2, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) - GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3ED37Cu, 0x3ED384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED384u;
label_3ed384:
    // 0x3ed384: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3ed384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3ed388: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3ed388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3ed38c: 0x214802d  daddu       $s0, $s0, $s4
    ctx->pc = 0x3ed38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 20));
    // 0x3ed390: 0x10143a  dsrl        $v0, $s0, 16
    ctx->pc = 0x3ed390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 16);
    // 0x3ed394: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3ed394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3ed398: 0x10843a  dsrl        $s0, $s0, 16
    ctx->pc = 0x3ed398u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 16);
    // 0x3ed39c: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3ed39cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3ed3a0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3ed3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3ed3a4: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3ed3a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3ed3a8: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x3ed3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3ed3ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ed3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ed3b0: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x3ed3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3ed3b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed3b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ed3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed3bc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3ed3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3ed3c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3ed3c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ed3c4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed3c8: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x3ed3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed3cc: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x3ed3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ed3d0: 0x7bb90010  lq          $t9, 0x10($sp)
    ctx->pc = 0x3ed3d0u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed3d4:
    // 0x3ed3d4: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ed3d4u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3ed3d8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3ed3d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3ed3dc: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ed3dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ed3e0: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x3ED3E0u;
    {
        const bool branch_taken_0x3ed3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED3E0u;
        // 0x3ed3e4: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed3e0) {
            ctx->pc = 0x3ED2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ed2c8;
        }
    }
    ctx->pc = 0x3ED3E8u;
    // 0x3ed3e8: 0x10000279  b           . + 4 + (0x279 << 2)
    ctx->pc = 0x3ED3E8u;
    {
        const bool branch_taken_0x3ed3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED3E8u;
        // 0x3ed3ec: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed3e8) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3ED3F0u;
label_3ed3f0:
    // 0x3ed3f0: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x3ed3f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed3f4: 0x13200275  beqz        $t9, . + 4 + (0x275 << 2)
    ctx->pc = 0x3ED3F4u;
    {
        const bool branch_taken_0x3ed3f4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED3F4u;
        // 0x3ed3f8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed3f4) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ED3FCu;
    // 0x3ed3fc: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x3ed3fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed400: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x3ed400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed404: 0x1b200003  blez        $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ED404u;
    {
        const bool branch_taken_0x3ed404 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3ED408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED404u;
        // 0x3ed408: 0x33220001  andi        $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed404) {
            ctx->pc = 0x3ED414u;
            goto label_3ed414;
        }
    }
    ctx->pc = 0x3ED40Cu;
    // 0x3ed40c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3ED40Cu;
    {
        const bool branch_taken_0x3ed40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED40Cu;
        // 0x3ed410: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed40c) {
            ctx->pc = 0x3ED4C8u;
            goto label_3ed4c8;
        }
    }
    ctx->pc = 0x3ED414u;
label_3ed414:
    // 0x3ed414: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x3ed414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3ed418: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3ed418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3ed41c: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x3ed41cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3ed420: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ed420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ed424: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ed424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ed428: 0x50640022  beql        $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3ED428u;
    {
        const bool branch_taken_0x3ed428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3ed428) {
            ctx->pc = 0x3ED42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED428u;
            // 0x3ed42c: 0x67de0001  daddiu      $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED4B4u;
            goto label_3ed4b4;
        }
    }
    ctx->pc = 0x3ED430u;
    // 0x3ed430: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3ED430u;
    {
        const bool branch_taken_0x3ed430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed430) {
            ctx->pc = 0x3ED434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED430u;
            // 0x3ed434: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED450u;
            goto label_3ed450;
        }
    }
    ctx->pc = 0x3ED438u;
    // 0x3ed438: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ed438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ed43c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ed43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed440: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3ed440u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed444: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ed444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ed448: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3ED448u;
    {
        const bool branch_taken_0x3ed448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED448u;
        // 0x3ed44c: 0xa2430001  sb          $v1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed448) {
            ctx->pc = 0x3ED4B0u;
            goto label_3ed4b0;
        }
    }
    ctx->pc = 0x3ED450u;
label_3ed450:
    // 0x3ed450: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x3ed450u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3ed454: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3ed454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3ed458: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ed458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed45c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3ed45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3ed460: 0x7fb90010  sq          $t9, 0x10($sp)
    ctx->pc = 0x3ed460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 25));
    // 0x3ed464: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3ED464u;
    SET_GPR_U32(ctx, 31, 0x3ED46Cu);
    ctx->pc = 0x3ED468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED464u;
    // 0x3ed468: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3ED464u, 0x3ED46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED46Cu;
label_3ed46c:
    // 0x3ed46c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3ed46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3ed470: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x3ed470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3ed474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ed474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed478: 0x94a40008  lhu         $a0, 0x8($a1)
    ctx->pc = 0x3ed478u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ed47c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3ED47Cu;
    SET_GPR_U32(ctx, 31, 0x3ED484u);
    ctx->pc = 0x3ED480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED47Cu;
    // 0x3ed480: 0xd1282f  dsubu       $a1, $a2, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) - GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3ED47Cu, 0x3ED484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED484u;
label_3ed484:
    // 0x3ed484: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3ed484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3ed488: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3ed488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3ed48c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3ed48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3ed490: 0x10143a  dsrl        $v0, $s0, 16
    ctx->pc = 0x3ed490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 16);
    // 0x3ed494: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3ed494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3ed498: 0x10843a  dsrl        $s0, $s0, 16
    ctx->pc = 0x3ed498u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 16);
    // 0x3ed49c: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3ed49cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3ed4a0: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x3ed4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3ed4a4: 0xa2500001  sb          $s0, 0x1($s2)
    ctx->pc = 0x3ed4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x3ed4a8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3ed4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed4ac: 0x7bb90010  lq          $t9, 0x10($sp)
    ctx->pc = 0x3ed4acu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed4b0:
    // 0x3ed4b0: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ed4b0u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
label_3ed4b4:
    // 0x3ed4b4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3ed4b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3ed4b8: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ed4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ed4bc: 0x10400243  beqz        $v0, . + 4 + (0x243 << 2)
    ctx->pc = 0x3ED4BCu;
    {
        const bool branch_taken_0x3ed4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED4BCu;
        // 0x3ed4c0: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed4bc) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ED4C4u;
    // 0x3ed4c4: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x3ed4c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ed4c8:
    // 0x3ed4c8: 0xafb50008  sw          $s5, 0x8($sp)
    ctx->pc = 0x3ed4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
    // 0x3ed4cc: 0xafb4000c  sw          $s4, 0xC($sp)
    ctx->pc = 0x3ed4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 20));
    // 0x3ed4d0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x3ed4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed4d4: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x3ed4d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ed4d8:
    // 0x3ed4d8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3ed4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3ed4dc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3ed4dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3ed4e0: 0x92c20002  lbu         $v0, 0x2($s6)
    ctx->pc = 0x3ed4e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x3ed4e4: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x3ed4e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3ed4e8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ed4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ed4ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ed4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ed4f0: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3ED4F0u;
    {
        const bool branch_taken_0x3ed4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3ed4f0) {
            ctx->pc = 0x3ED50Cu;
            goto label_3ed50c;
        }
    }
    ctx->pc = 0x3ED4F8u;
    // 0x3ed4f8: 0x82660000  lb          $a2, 0x0($s3)
    ctx->pc = 0x3ed4f8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3ed4fc: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x3ed4fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x3ed500: 0xa2460000  sb          $a2, 0x0($s2)
    ctx->pc = 0x3ed500u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ed504: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3ED504u;
    {
        const bool branch_taken_0x3ed504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED504u;
        // 0x3ed508: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed504) {
            ctx->pc = 0x3ED590u;
            goto label_3ed590;
        }
    }
    ctx->pc = 0x3ED50Cu;
label_3ed50c:
    // 0x3ed50c: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ED50Cu;
    {
        const bool branch_taken_0x3ed50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed50c) {
            ctx->pc = 0x3ED510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED50Cu;
            // 0x3ed510: 0x92640000  lbu         $a0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED530u;
            goto label_3ed530;
        }
    }
    ctx->pc = 0x3ED514u;
    // 0x3ed514: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ed514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ed518: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ed518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed51c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3ed51cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed520: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ed520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ed524: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3ed524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ed528: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3ED528u;
    {
        const bool branch_taken_0x3ed528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED528u;
        // 0x3ed52c: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed528) {
            ctx->pc = 0x3ED590u;
            goto label_3ed590;
        }
    }
    ctx->pc = 0x3ED530u;
label_3ed530:
    // 0x3ed530: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x3ed530u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3ed534: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x3ed534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3ed538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ed538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed53c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3ed53cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3ed540: 0x7fb90010  sq          $t9, 0x10($sp)
    ctx->pc = 0x3ed540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 25));
    // 0x3ed544: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3ED544u;
    SET_GPR_U32(ctx, 31, 0x3ED54Cu);
    ctx->pc = 0x3ED548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED544u;
    // 0x3ed548: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3ED544u, 0x3ED54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED54Cu;
label_3ed54c:
    // 0x3ed54c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3ed54cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3ed550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ed550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed554: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3ed554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3ed558: 0x94c40008  lhu         $a0, 0x8($a2)
    ctx->pc = 0x3ed558u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3ed55c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3ED55Cu;
    SET_GPR_U32(ctx, 31, 0x3ED564u);
    ctx->pc = 0x3ED560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED55Cu;
    // 0x3ed560: 0x51282f  dsubu       $a1, $v0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3ED55Cu, 0x3ED564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED564u;
label_3ed564:
    // 0x3ed564: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3ed564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3ed568: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3ed568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3ed56c: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x3ed56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3ed570: 0x10143a  dsrl        $v0, $s0, 16
    ctx->pc = 0x3ed570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 16);
    // 0x3ed574: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3ed574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3ed578: 0x10843a  dsrl        $s0, $s0, 16
    ctx->pc = 0x3ed578u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 16);
    // 0x3ed57c: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3ed57cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3ed580: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x3ed580u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3ed584: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3ed584u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed588: 0xa2b00001  sb          $s0, 0x1($s5)
    ctx->pc = 0x3ed588u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x3ed58c: 0x7bb90010  lq          $t9, 0x10($sp)
    ctx->pc = 0x3ed58cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed590:
    // 0x3ed590: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3ed590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3ed594: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3ed594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3ed598: 0x92c20006  lbu         $v0, 0x6($s6)
    ctx->pc = 0x3ed598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x3ed59c: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x3ed59cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3ed5a0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ed5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ed5a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ed5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ed5a8: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3ED5A8u;
    {
        const bool branch_taken_0x3ed5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3ed5a8) {
            ctx->pc = 0x3ED5C8u;
            goto label_3ed5c8;
        }
    }
    ctx->pc = 0x3ED5B0u;
    // 0x3ed5b0: 0x82660004  lb          $a2, 0x4($s3)
    ctx->pc = 0x3ed5b0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3ed5b4: 0x82620005  lb          $v0, 0x5($s3)
    ctx->pc = 0x3ed5b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x3ed5b8: 0xa2460002  sb          $a2, 0x2($s2)
    ctx->pc = 0x3ed5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ed5bc: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x3ed5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed5c0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3ED5C0u;
    {
        const bool branch_taken_0x3ed5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED5C0u;
        // 0x3ed5c4: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed5c0) {
            ctx->pc = 0x3ED650u;
            goto label_3ed650;
        }
    }
    ctx->pc = 0x3ED5C8u;
label_3ed5c8:
    // 0x3ed5c8: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ED5C8u;
    {
        const bool branch_taken_0x3ed5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed5c8) {
            ctx->pc = 0x3ED5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED5C8u;
            // 0x3ed5cc: 0x92640004  lbu         $a0, 0x4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED5ECu;
            goto label_3ed5ec;
        }
    }
    ctx->pc = 0x3ED5D0u;
    // 0x3ed5d0: 0x96e20008  lhu         $v0, 0x8($s7)
    ctx->pc = 0x3ed5d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ed5d4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ed5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed5d8: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x3ed5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed5dc: 0x92e30008  lbu         $v1, 0x8($s7)
    ctx->pc = 0x3ed5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3ed5e0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3ed5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ed5e4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3ED5E4u;
    {
        const bool branch_taken_0x3ed5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED5E4u;
        // 0x3ed5e8: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed5e4) {
            ctx->pc = 0x3ED64Cu;
            goto label_3ed64c;
        }
    }
    ctx->pc = 0x3ED5ECu;
label_3ed5ec:
    // 0x3ed5ec: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x3ed5ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3ed5f0: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x3ed5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x3ed5f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ed5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed5f8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3ed5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3ed5fc: 0x7fb90010  sq          $t9, 0x10($sp)
    ctx->pc = 0x3ed5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 25));
    // 0x3ed600: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3ED600u;
    SET_GPR_U32(ctx, 31, 0x3ED608u);
    ctx->pc = 0x3ED604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED600u;
    // 0x3ed604: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3ED600u, 0x3ED608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED608u;
label_3ed608:
    // 0x3ed608: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3ed608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3ed60c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ed60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed610: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3ed610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3ed614: 0x94c40008  lhu         $a0, 0x8($a2)
    ctx->pc = 0x3ed614u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3ed618: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3ED618u;
    SET_GPR_U32(ctx, 31, 0x3ED620u);
    ctx->pc = 0x3ED61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED618u;
    // 0x3ed61c: 0x51282f  dsubu       $a1, $v0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3ED618u, 0x3ED620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED620u;
label_3ed620:
    // 0x3ed620: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3ed620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3ed624: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3ed624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3ed628: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x3ed628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3ed62c: 0x10143a  dsrl        $v0, $s0, 16
    ctx->pc = 0x3ed62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 16);
    // 0x3ed630: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3ed630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3ed634: 0x10843a  dsrl        $s0, $s0, 16
    ctx->pc = 0x3ed634u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 16);
    // 0x3ed638: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3ed638u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3ed63c: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x3ed63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3ed640: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x3ed640u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed644: 0xa2b00003  sb          $s0, 0x3($s5)
    ctx->pc = 0x3ed644u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x3ed648: 0x7bb90010  lq          $t9, 0x10($sp)
    ctx->pc = 0x3ed648u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed64c:
    // 0x3ed64c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3ed64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3ed650:
    // 0x3ed650: 0x67de0002  daddiu      $fp, $fp, 0x2
    ctx->pc = 0x3ed650u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)2);
    // 0x3ed654: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3ed654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ed658: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x3ed658u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x3ed65c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3ed65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3ed660: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ed660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3ed664: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3ed664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3ed668: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x3ed668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x3ed66c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x3ed66cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x3ed670: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x3ed670u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x3ed674: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3ed674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3ed678: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ed678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ed67c: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x3ED67Cu;
    {
        const bool branch_taken_0x3ed67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED67Cu;
        // 0x3ed680: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed67c) {
            ctx->pc = 0x3ED4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ed4d8;
        }
    }
    ctx->pc = 0x3ED684u;
    // 0x3ed684: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x3ED684u;
    {
        const bool branch_taken_0x3ed684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED684u;
        // 0x3ed688: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed684) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3ED68Cu;
label_3ed68c:
    // 0x3ed68c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3ed68cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ed690: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ed690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ed694: 0x90c30011  lbu         $v1, 0x11($a2)
    ctx->pc = 0x3ed694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17)));
    // 0x3ed698: 0x1462009e  bne         $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x3ED698u;
    {
        const bool branch_taken_0x3ed698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ed698) {
            ctx->pc = 0x3ED914u;
            goto label_3ed914;
        }
    }
    ctx->pc = 0x3ED6A0u;
    // 0x3ed6a0: 0x1160005c  beqz        $t3, . + 4 + (0x5C << 2)
    ctx->pc = 0x3ED6A0u;
    {
        const bool branch_taken_0x3ed6a0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED6A0u;
        // 0x3ed6a4: 0x180902d  daddu       $s2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed6a0) {
            ctx->pc = 0x3ED814u;
            goto label_3ed814;
        }
    }
    ctx->pc = 0x3ED6A8u;
    // 0x3ed6a8: 0x11e0005a  beqz        $t7, . + 4 + (0x5A << 2)
    ctx->pc = 0x3ED6A8u;
    {
        const bool branch_taken_0x3ed6a8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed6a8) {
            ctx->pc = 0x3ED814u;
            goto label_3ed814;
        }
    }
    ctx->pc = 0x3ED6B0u;
    // 0x3ed6b0: 0x11c00058  beqz        $t6, . + 4 + (0x58 << 2)
    ctx->pc = 0x3ED6B0u;
    {
        const bool branch_taken_0x3ed6b0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed6b0) {
            ctx->pc = 0x3ED814u;
            goto label_3ed814;
        }
    }
    ctx->pc = 0x3ED6B8u;
    // 0x3ed6b8: 0x132001c4  beqz        $t9, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x3ED6B8u;
    {
        const bool branch_taken_0x3ed6b8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED6B8u;
        // 0x3ed6bc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed6b8) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ED6C0u;
    // 0x3ed6c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ed6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed6c4: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x3ed6c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ed6c8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3ed6c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed6cc: 0x0  nop
    ctx->pc = 0x3ed6ccu;
    // NOP
label_3ed6d0:
    // 0x3ed6d0: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x3ed6d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3ed6d4: 0x144d000c  bne         $v0, $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x3ED6D4u;
    {
        const bool branch_taken_0x3ed6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        ctx->pc = 0x3ED6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED6D4u;
        // 0x3ed6d8: 0x40602d  daddu       $t4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed6d4) {
            ctx->pc = 0x3ED708u;
            goto label_3ed708;
        }
    }
    ctx->pc = 0x3ED6DCu;
    // 0x3ed6dc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3ed6dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ed6e0: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ed6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ed6e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ed6e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed6e8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3ed6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ed6ec: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x3ed6ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3ed6f0: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3ed6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3ed6f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ed6f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed6f8: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3ed6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ed6fc: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x3ed6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3ed700: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3ED700u;
    {
        const bool branch_taken_0x3ed700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED700u;
        // 0x3ed704: 0x1c21021  addu        $v0, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed700) {
            ctx->pc = 0x3ED7F0u;
            goto label_3ed7f0;
        }
    }
    ctx->pc = 0x3ED708u;
label_3ed708:
    // 0x3ed708: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ED708u;
    {
        const bool branch_taken_0x3ed708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED708u;
        // 0x3ed70c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed708) {
            ctx->pc = 0x3ED72Cu;
            goto label_3ed72c;
        }
    }
    ctx->pc = 0x3ED710u;
    // 0x3ed710: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x3ed710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ed714: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ed714u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed718: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3ed718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ed71c: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3ed71cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ed720: 0x92e20006  lbu         $v0, 0x6($s7)
    ctx->pc = 0x3ed720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ed724: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3ED724u;
    {
        const bool branch_taken_0x3ed724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED724u;
        // 0x3ed728: 0xa0c20002  sb          $v0, 0x2($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed724) {
            ctx->pc = 0x3ED7F8u;
            goto label_3ed7f8;
        }
    }
    ctx->pc = 0x3ED72Cu;
label_3ed72c:
    // 0x3ed72c: 0x1ac5023  subu        $t2, $t5, $t4
    ctx->pc = 0x3ed72cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x3ed730: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3ed730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ed734: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x3ed734u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3ed738: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x3ed738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x3ed73c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ed73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ed740: 0x8a2018  mult        $a0, $a0, $t2
    ctx->pc = 0x3ed740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3ed744: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x3ed744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ed748: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ed748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ed74c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3ed74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3ed750: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ed750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ed754: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed754u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed758: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed75c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3ed75cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3ed760: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ed760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ed764: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x3ed764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3ed768: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ed768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed76c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3ed76cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ed770: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3ed770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3ed774: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x3ed774u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3ed778: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x3ed778u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3ed77c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x3ed77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x3ed780: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ed780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ed784: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x3ed784u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ed788: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x3ed788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ed78c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed790: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3ed790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3ed794: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ed794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ed798: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed798u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed79c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed7a0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3ed7a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3ed7a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ed7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ed7a8: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x3ed7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3ed7ac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ed7acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed7b0: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3ed7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ed7b4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3ed7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3ed7b8: 0x91040002  lbu         $a0, 0x2($t0)
    ctx->pc = 0x3ed7b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3ed7bc: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x3ed7bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x3ed7c0: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x3ed7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x3ed7c4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ed7c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ed7c8: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x3ed7c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ed7cc: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x3ed7ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ed7d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed7d4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3ed7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3ed7d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ed7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ed7dc: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed7e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed7e4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3ed7e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3ed7e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ed7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ed7ec: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x3ed7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_3ed7f0:
    // 0x3ed7f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ed7f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed7f4: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3ed7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
label_3ed7f8:
    // 0x3ed7f8: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ed7f8u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3ed7fc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3ed7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3ed800: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ed800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ed804: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x3ED804u;
    {
        const bool branch_taken_0x3ed804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED804u;
        // 0x3ed808: 0x24c60003  addiu       $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed804) {
            ctx->pc = 0x3ED6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ed6d0;
        }
    }
    ctx->pc = 0x3ED80Cu;
    // 0x3ed80c: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x3ED80Cu;
    {
        const bool branch_taken_0x3ed80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED80Cu;
        // 0x3ed810: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed80c) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3ED814u;
label_3ed814:
    // 0x3ed814: 0x1320016d  beqz        $t9, . + 4 + (0x16D << 2)
    ctx->pc = 0x3ED814u;
    {
        const bool branch_taken_0x3ed814 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED814u;
        // 0x3ed818: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed814) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ED81Cu;
    // 0x3ed81c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ed81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed820: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x3ed820u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ed824: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3ed824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ed828:
    // 0x3ed828: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x3ed828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3ed82c: 0x144b0008  bne         $v0, $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ED82Cu;
    {
        const bool branch_taken_0x3ed82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x3ED830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED82Cu;
        // 0x3ed830: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed82c) {
            ctx->pc = 0x3ED850u;
            goto label_3ed850;
        }
    }
    ctx->pc = 0x3ED834u;
    // 0x3ed834: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ed834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ed838: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ed838u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed83c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3ed83cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3ed840: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x3ed840u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ed844: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x3ed844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3ed848: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3ED848u;
    {
        const bool branch_taken_0x3ed848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED848u;
        // 0x3ed84c: 0xa0820002  sb          $v0, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed848) {
            ctx->pc = 0x3ED8F8u;
            goto label_3ed8f8;
        }
    }
    ctx->pc = 0x3ED850u;
label_3ed850:
    // 0x3ed850: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ED850u;
    {
        const bool branch_taken_0x3ed850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed850) {
            ctx->pc = 0x3ED854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED850u;
            // 0x3ed854: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED874u;
            goto label_3ed874;
        }
    }
    ctx->pc = 0x3ED858u;
    // 0x3ed858: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x3ed858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ed85c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ed85cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed860: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3ed860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ed864: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x3ed864u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ed868: 0x92e20006  lbu         $v0, 0x6($s7)
    ctx->pc = 0x3ed868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ed86c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3ED86Cu;
    {
        const bool branch_taken_0x3ed86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED86Cu;
        // 0x3ed870: 0xa0820002  sb          $v0, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed86c) {
            ctx->pc = 0x3ED8F8u;
            goto label_3ed8f8;
        }
    }
    ctx->pc = 0x3ED874u;
label_3ed874:
    // 0x3ed874: 0x1685023  subu        $t2, $t3, $t0
    ctx->pc = 0x3ed874u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x3ed878: 0x96e20002  lhu         $v0, 0x2($s7)
    ctx->pc = 0x3ed878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ed87c: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x3ed87cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ed880: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x3ed880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ed884: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ed884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ed888: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x3ed888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x3ed88c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3ed88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3ed890: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x3ed890u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3ed894: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ed894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ed898: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3ed898u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3ed89c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ed89cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ed8a0: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3ed8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3ed8a4: 0x96e30004  lhu         $v1, 0x4($s7)
    ctx->pc = 0x3ed8a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3ed8a8: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x3ed8a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ed8ac: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x3ed8acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ed8b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed8b4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3ed8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3ed8b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ed8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ed8bc: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed8c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed8c4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3ed8c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3ed8c8: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3ed8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed8cc: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x3ed8ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3ed8d0: 0x96e20006  lhu         $v0, 0x6($s7)
    ctx->pc = 0x3ed8d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3ed8d4: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x3ed8d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ed8d8: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x3ed8d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ed8dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ed8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ed8e0: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x3ed8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x3ed8e4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3ed8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3ed8e8: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x3ed8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3ed8ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ed8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ed8f0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3ed8f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3ed8f4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3ed8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3ed8f8:
    // 0x3ed8f8: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3ed8f8u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3ed8fc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3ed8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3ed900: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3ed900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3ed904: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3ED904u;
    {
        const bool branch_taken_0x3ed904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED904u;
        // 0x3ed908: 0x24840003  addiu       $a0, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed904) {
            ctx->pc = 0x3ED828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ed828;
        }
    }
    ctx->pc = 0x3ED90Cu;
    // 0x3ed90c: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x3ED90Cu;
    {
        const bool branch_taken_0x3ed90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED90Cu;
        // 0x3ed910: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed90c) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3ED914u;
label_3ed914:
    // 0x3ed914: 0x12c000bf  beqz        $s6, . + 4 + (0xBF << 2)
    ctx->pc = 0x3ED914u;
    {
        const bool branch_taken_0x3ed914 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED914u;
        // 0x3ed918: 0x8fa200c8  lw          $v0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed914) {
            ctx->pc = 0x3EDC14u;
            goto label_3edc14;
        }
    }
    ctx->pc = 0x3ED91Cu;
    // 0x3ed91c: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x3ED91Cu;
    {
        const bool branch_taken_0x3ed91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED91Cu;
        // 0x3ed920: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed91c) {
            ctx->pc = 0x3EDC14u;
            goto label_3edc14;
        }
    }
    ctx->pc = 0x3ED924u;
    // 0x3ed924: 0x106000bb  beqz        $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x3ED924u;
    {
        const bool branch_taken_0x3ed924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED924u;
        // 0x3ed928: 0x180902d  daddu       $s2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed924) {
            ctx->pc = 0x3EDC14u;
            goto label_3edc14;
        }
    }
    ctx->pc = 0x3ED92Cu;
    // 0x3ed92c: 0x13200127  beqz        $t9, . + 4 + (0x127 << 2)
    ctx->pc = 0x3ED92Cu;
    {
        const bool branch_taken_0x3ed92c = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED92Cu;
        // 0x3ed930: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed92c) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3ED934u;
    // 0x3ed934: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x3ed934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed938: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x3ed938u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed93c: 0x0  nop
    ctx->pc = 0x3ed93cu;
    // NOP
label_3ed940:
    // 0x3ed940: 0x92820006  lbu         $v0, 0x6($s4)
    ctx->pc = 0x3ed940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x3ed944: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3ed944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3ed948: 0x92830007  lbu         $v1, 0x7($s4)
    ctx->pc = 0x3ed948u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7)));
    // 0x3ed94c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3ed94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ed950: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x3ed950u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ed954: 0x16240026  bne         $s1, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3ED954u;
    {
        const bool branch_taken_0x3ed954 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ed954) {
            ctx->pc = 0x3ED9F0u;
            goto label_3ed9f0;
        }
    }
    ctx->pc = 0x3ED95Cu;
    // 0x3ed95c: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x3ed95cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3ed960: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x3ed960u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3ed964: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3ed964u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3ed968: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ed968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ed96c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ed96cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ed970: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3ed970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3ed974: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ed974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed978: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ed978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ed97c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3ed97cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ed980: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed980u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed984: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x3ed984u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed988: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x3ed988u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ed98c: 0x92820003  lbu         $v0, 0x3($s4)
    ctx->pc = 0x3ed98cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x3ed990: 0x92840002  lbu         $a0, 0x2($s4)
    ctx->pc = 0x3ed990u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x3ed994: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3ed994u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3ed998: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ed998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ed99c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ed99cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ed9a0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3ed9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3ed9a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ed9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed9a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ed9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ed9ac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3ed9acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ed9b0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed9b4: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x3ed9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed9b8: 0xa2630002  sb          $v1, 0x2($s3)
    ctx->pc = 0x3ed9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ed9bc: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x3ed9bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x3ed9c0: 0x92840004  lbu         $a0, 0x4($s4)
    ctx->pc = 0x3ed9c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3ed9c4: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3ed9c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3ed9c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ed9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ed9cc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ed9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ed9d0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3ed9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3ed9d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ed9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed9d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ed9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ed9dc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3ed9dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ed9e0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ed9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ed9e4: 0xa2620005  sb          $v0, 0x5($s3)
    ctx->pc = 0x3ed9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed9e8: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x3ED9E8u;
    {
        const bool branch_taken_0x3ed9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED9E8u;
        // 0x3ed9ec: 0xa2630004  sb          $v1, 0x4($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed9e8) {
            ctx->pc = 0x3EDBF8u;
            goto label_3edbf8;
        }
    }
    ctx->pc = 0x3ED9F0u;
label_3ed9f0:
    // 0x3ed9f0: 0x56200011  bnel        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3ED9F0u;
    {
        const bool branch_taken_0x3ed9f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed9f0) {
            ctx->pc = 0x3ED9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED9F0u;
            // 0x3ed9f4: 0x92830001  lbu         $v1, 0x1($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDA38u;
            goto label_3eda38;
        }
    }
    ctx->pc = 0x3ED9F8u;
    // 0x3ed9f8: 0x96e20002  lhu         $v0, 0x2($s7)
    ctx->pc = 0x3ed9f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3ed9fc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ed9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3eda00: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eda00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eda04: 0x92e30002  lbu         $v1, 0x2($s7)
    ctx->pc = 0x3eda04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3eda08: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x3eda08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eda0c: 0x96e20004  lhu         $v0, 0x4($s7)
    ctx->pc = 0x3eda0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3eda10: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3eda10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3eda14: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x3eda14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eda18: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3eda18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3eda1c: 0xa2630003  sb          $v1, 0x3($s3)
    ctx->pc = 0x3eda1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eda20: 0x96e20006  lhu         $v0, 0x6($s7)
    ctx->pc = 0x3eda20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3eda24: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3eda24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3eda28: 0xa2620004  sb          $v0, 0x4($s3)
    ctx->pc = 0x3eda28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eda2c: 0x92e30006  lbu         $v1, 0x6($s7)
    ctx->pc = 0x3eda2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3eda30: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3EDA30u;
    {
        const bool branch_taken_0x3eda30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA30u;
        // 0x3eda34: 0xa2630005  sb          $v1, 0x5($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eda30) {
            ctx->pc = 0x3EDBF8u;
            goto label_3edbf8;
        }
    }
    ctx->pc = 0x3EDA38u;
label_3eda38:
    // 0x3eda38: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x3eda38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3eda3c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x3eda3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3eda40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3eda40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3eda44: 0x2a31807  srav        $v1, $v1, $s5
    ctx->pc = 0x3eda44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x3eda48: 0x92860000  lbu         $a2, 0x0($s4)
    ctx->pc = 0x3eda48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3eda4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3eda4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3eda50: 0x51902f  dsubu       $s2, $v0, $s1
    ctx->pc = 0x3eda50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) - GPR_U64(ctx, 17));
    // 0x3eda54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3eda54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3eda58: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3eda58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3eda5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eda5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eda60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3eda60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eda64: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3eda64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3eda68: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x3eda68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eda6c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EDA6Cu;
    SET_GPR_U32(ctx, 31, 0x3EDA74u);
    ctx->pc = 0x3EDA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDA6Cu;
    // 0x3eda70: 0x7fb90010  sq          $t9, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EDA6Cu, 0x3EDA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDA74u;
label_3eda74:
    // 0x3eda74: 0x96e40002  lhu         $a0, 0x2($s7)
    ctx->pc = 0x3eda74u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3eda78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eda78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eda7c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EDA7Cu;
    SET_GPR_U32(ctx, 31, 0x3EDA84u);
    ctx->pc = 0x3EDA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDA7Cu;
    // 0x3eda80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EDA7Cu, 0x3EDA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDA84u;
label_3eda84:
    // 0x3eda84: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eda84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3eda88: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x3eda88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3eda8c: 0x206802d  daddu       $s0, $s0, $a2
    ctx->pc = 0x3eda8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3eda90: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3eda90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3eda94: 0x10143a  dsrl        $v0, $s0, 16
    ctx->pc = 0x3eda94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 16);
    // 0x3eda98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3eda98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eda9c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3eda9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3edaa0: 0x10843a  dsrl        $s0, $s0, 16
    ctx->pc = 0x3edaa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 16);
    // 0x3edaa4: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3edaa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3edaa8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3edaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3edaac: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3edaacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3edab0: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x3edab0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3edab4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3edab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3edab8: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x3edab8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3edabc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3edabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3edac0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3edac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edac4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3edac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3edac8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3edac8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3edacc: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3edaccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3edad0: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x3edad0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3edad4: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x3edad4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3edad8: 0x92820003  lbu         $v0, 0x3($s4)
    ctx->pc = 0x3edad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x3edadc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x3edadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3edae0: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3edae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3edae4: 0x92860002  lbu         $a2, 0x2($s4)
    ctx->pc = 0x3edae4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x3edae8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3edae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3edaec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3edaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3edaf0: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3edaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3edaf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3edaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edaf8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3edaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3edafc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EDAFCu;
    SET_GPR_U32(ctx, 31, 0x3EDB04u);
    ctx->pc = 0x3EDB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDAFCu;
    // 0x3edb00: 0x94c40000  lhu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EDAFCu, 0x3EDB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDB04u;
label_3edb04:
    // 0x3edb04: 0x96e40004  lhu         $a0, 0x4($s7)
    ctx->pc = 0x3edb04u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3edb08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3edb08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edb0c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EDB0Cu;
    SET_GPR_U32(ctx, 31, 0x3EDB14u);
    ctx->pc = 0x3EDB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDB0Cu;
    // 0x3edb10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EDB0Cu, 0x3EDB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDB14u;
label_3edb14:
    // 0x3edb14: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3edb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3edb18: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x3edb18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3edb1c: 0x206802d  daddu       $s0, $s0, $a2
    ctx->pc = 0x3edb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3edb20: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3edb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3edb24: 0x10143a  dsrl        $v0, $s0, 16
    ctx->pc = 0x3edb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 16);
    // 0x3edb28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3edb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edb2c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3edb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3edb30: 0x10843a  dsrl        $s0, $s0, 16
    ctx->pc = 0x3edb30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 16);
    // 0x3edb34: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3edb34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3edb38: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3edb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3edb3c: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3edb3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3edb40: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x3edb40u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3edb44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3edb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3edb48: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x3edb48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3edb4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3edb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3edb50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3edb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edb54: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3edb54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3edb58: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3edb58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3edb5c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3edb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3edb60: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x3edb60u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3edb64: 0xa2630002  sb          $v1, 0x2($s3)
    ctx->pc = 0x3edb64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3edb68: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x3edb68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x3edb6c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x3edb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3edb70: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3edb70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3edb74: 0x92860004  lbu         $a2, 0x4($s4)
    ctx->pc = 0x3edb74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3edb78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3edb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3edb7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3edb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3edb80: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3edb80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3edb84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3edb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edb88: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3edb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3edb8c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EDB8Cu;
    SET_GPR_U32(ctx, 31, 0x3EDB94u);
    ctx->pc = 0x3EDB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDB8Cu;
    // 0x3edb90: 0x94c40000  lhu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EDB8Cu, 0x3EDB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDB94u;
label_3edb94:
    // 0x3edb94: 0x96e40006  lhu         $a0, 0x6($s7)
    ctx->pc = 0x3edb94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3edb98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3edb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edb9c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EDB9Cu;
    SET_GPR_U32(ctx, 31, 0x3EDBA4u);
    ctx->pc = 0x3EDBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDB9Cu;
    // 0x3edba0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EDB9Cu, 0x3EDBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDBA4u;
label_3edba4:
    // 0x3edba4: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3edba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3edba8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3edba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3edbac: 0x205802d  daddu       $s0, $s0, $a1
    ctx->pc = 0x3edbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3edbb0: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x3edbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3edbb4: 0x10143a  dsrl        $v0, $s0, 16
    ctx->pc = 0x3edbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 16);
    // 0x3edbb8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3edbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3edbbc: 0x10843a  dsrl        $s0, $s0, 16
    ctx->pc = 0x3edbbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 16);
    // 0x3edbc0: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3edbc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3edbc4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3edbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3edbc8: 0x2a21007  srav        $v0, $v0, $s5
    ctx->pc = 0x3edbc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x3edbcc: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x3edbccu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3edbd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3edbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3edbd4: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x3edbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3edbd8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3edbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3edbdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3edbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edbe0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3edbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3edbe4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3edbe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3edbe8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3edbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3edbec: 0xa2620005  sb          $v0, 0x5($s3)
    ctx->pc = 0x3edbecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3edbf0: 0xa2630004  sb          $v1, 0x4($s3)
    ctx->pc = 0x3edbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3edbf4: 0x7bb90010  lq          $t9, 0x10($sp)
    ctx->pc = 0x3edbf4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3edbf8:
    // 0x3edbf8: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3edbf8u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3edbfc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x3edbfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x3edc00: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3edc00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3edc04: 0x1440ff4e  bnez        $v0, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x3EDC04u;
    {
        const bool branch_taken_0x3edc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC04u;
        // 0x3edc08: 0x26730006  addiu       $s3, $s3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edc04) {
            ctx->pc = 0x3ED940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ed940;
        }
    }
    ctx->pc = 0x3EDC0Cu;
    // 0x3edc0c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3EDC0Cu;
    {
        const bool branch_taken_0x3edc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC0Cu;
        // 0x3edc10: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edc0c) {
            ctx->pc = 0x3EDDD0u;
            goto label_3eddd0;
        }
    }
    ctx->pc = 0x3EDC14u;
label_3edc14:
    // 0x3edc14: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x3edc14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edc18: 0x1320006c  beqz        $t9, . + 4 + (0x6C << 2)
    ctx->pc = 0x3EDC18u;
    {
        const bool branch_taken_0x3edc18 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC18u;
        // 0x3edc1c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edc18) {
            ctx->pc = 0x3EDDCCu;
            goto label_3eddcc;
        }
    }
    ctx->pc = 0x3EDC20u;
    // 0x3edc20: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x3edc20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edc24: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x3edc24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3edc28:
    // 0x3edc28: 0x92c20006  lbu         $v0, 0x6($s6)
    ctx->pc = 0x3edc28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x3edc2c: 0x92c30007  lbu         $v1, 0x7($s6)
    ctx->pc = 0x3edc2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
    // 0x3edc30: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3edc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3edc34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3edc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3edc38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3edc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3edc3c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3EDC3Cu;
    {
        const bool branch_taken_0x3edc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3edc3c) {
            ctx->pc = 0x3EDC68u;
            goto label_3edc68;
        }
    }
    ctx->pc = 0x3EDC44u;
    // 0x3edc44: 0x8ac30003  lwl         $v1, 0x3($s6)
    ctx->pc = 0x3edc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3edc48: 0x9ac30000  lwr         $v1, 0x0($s6)
    ctx->pc = 0x3edc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3edc4c: 0x82c40004  lb          $a0, 0x4($s6)
    ctx->pc = 0x3edc4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x3edc50: 0x82c50005  lb          $a1, 0x5($s6)
    ctx->pc = 0x3edc50u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 5)));
    // 0x3edc54: 0xaaa30003  swl         $v1, 0x3($s5)
    ctx->pc = 0x3edc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3edc58: 0xbaa30000  swr         $v1, 0x0($s5)
    ctx->pc = 0x3edc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3edc5c: 0xa2a40004  sb          $a0, 0x4($s5)
    ctx->pc = 0x3edc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x3edc60: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x3EDC60u;
    {
        const bool branch_taken_0x3edc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC60u;
        // 0x3edc64: 0xa2a50005  sb          $a1, 0x5($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edc60) {
            ctx->pc = 0x3EDDB8u;
            goto label_3eddb8;
        }
    }
    ctx->pc = 0x3EDC68u;
label_3edc68:
    // 0x3edc68: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3EDC68u;
    {
        const bool branch_taken_0x3edc68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3edc68) {
            ctx->pc = 0x3EDC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDC68u;
            // 0x3edc6c: 0x92c20002  lbu         $v0, 0x2($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDCB0u;
            goto label_3edcb0;
        }
    }
    ctx->pc = 0x3EDC70u;
    // 0x3edc70: 0x96e20002  lhu         $v0, 0x2($s7)
    ctx->pc = 0x3edc70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3edc74: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3edc74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3edc78: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x3edc78u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3edc7c: 0x92e30002  lbu         $v1, 0x2($s7)
    ctx->pc = 0x3edc7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3edc80: 0xa2a30001  sb          $v1, 0x1($s5)
    ctx->pc = 0x3edc80u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3edc84: 0x96e20004  lhu         $v0, 0x4($s7)
    ctx->pc = 0x3edc84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3edc88: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3edc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3edc8c: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x3edc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3edc90: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x3edc90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3edc94: 0xa2a30003  sb          $v1, 0x3($s5)
    ctx->pc = 0x3edc94u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3edc98: 0x96e20006  lhu         $v0, 0x6($s7)
    ctx->pc = 0x3edc98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3edc9c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3edc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3edca0: 0xa2a20004  sb          $v0, 0x4($s5)
    ctx->pc = 0x3edca0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3edca4: 0x92e30006  lbu         $v1, 0x6($s7)
    ctx->pc = 0x3edca4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3edca8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3EDCA8u;
    {
        const bool branch_taken_0x3edca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDCA8u;
        // 0x3edcac: 0xa2a30005  sb          $v1, 0x5($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edca8) {
            ctx->pc = 0x3EDDB8u;
            goto label_3eddb8;
        }
    }
    ctx->pc = 0x3EDCB0u;
label_3edcb0:
    // 0x3edcb0: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x3edcb0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3edcb4: 0x92d10003  lbu         $s1, 0x3($s6)
    ctx->pc = 0x3edcb4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x3edcb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3edcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edcbc: 0x92c40000  lbu         $a0, 0x0($s6)
    ctx->pc = 0x3edcbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3edcc0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3edcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3edcc4: 0x92c30004  lbu         $v1, 0x4($s6)
    ctx->pc = 0x3edcc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x3edcc8: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3edcc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3edccc: 0x92c60001  lbu         $a2, 0x1($s6)
    ctx->pc = 0x3edcccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x3edcd0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3edcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3edcd4: 0x92d20005  lbu         $s2, 0x5($s6)
    ctx->pc = 0x3edcd4u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 5)));
    // 0x3edcd8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3edcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3edcdc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3edcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3edce0: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x3edce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3edce4: 0x7fb90010  sq          $t9, 0x10($sp)
    ctx->pc = 0x3edce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 25));
    // 0x3edce8: 0x53a02f  dsubu       $s4, $v0, $s3
    ctx->pc = 0x3edce8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) - GPR_U64(ctx, 19));
    // 0x3edcec: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EDCECu;
    SET_GPR_U32(ctx, 31, 0x3EDCF4u);
    ctx->pc = 0x3EDCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDCECu;
    // 0x3edcf0: 0x2439025  or          $s2, $s2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EDCECu, 0x3EDCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDCF4u;
label_3edcf4:
    // 0x3edcf4: 0x96e40002  lhu         $a0, 0x2($s7)
    ctx->pc = 0x3edcf4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x3edcf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3edcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edcfc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EDCFCu;
    SET_GPR_U32(ctx, 31, 0x3EDD04u);
    ctx->pc = 0x3EDD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDCFCu;
    // 0x3edd00: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EDCFCu, 0x3EDD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDD04u;
label_3edd04:
    // 0x3edd04: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3edd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3edd08: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3edd08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3edd0c: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x3edd0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3edd10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3edd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edd14: 0x10143a  dsrl        $v0, $s0, 16
    ctx->pc = 0x3edd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 16);
    // 0x3edd18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3edd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edd1c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3edd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3edd20: 0x10843a  dsrl        $s0, $s0, 16
    ctx->pc = 0x3edd20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 16);
    // 0x3edd24: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3edd24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3edd28: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x3edd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3edd2c: 0xa2b00001  sb          $s0, 0x1($s5)
    ctx->pc = 0x3edd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x3edd30: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EDD30u;
    SET_GPR_U32(ctx, 31, 0x3EDD38u);
    ctx->pc = 0x3EDD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDD30u;
    // 0x3edd34: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EDD30u, 0x3EDD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDD38u;
label_3edd38:
    // 0x3edd38: 0x96e40004  lhu         $a0, 0x4($s7)
    ctx->pc = 0x3edd38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3edd3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3edd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edd40: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EDD40u;
    SET_GPR_U32(ctx, 31, 0x3EDD48u);
    ctx->pc = 0x3EDD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDD40u;
    // 0x3edd44: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EDD40u, 0x3EDD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDD48u;
label_3edd48:
    // 0x3edd48: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3edd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3edd4c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3edd4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3edd50: 0x205802d  daddu       $s0, $s0, $a1
    ctx->pc = 0x3edd50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3edd54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3edd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edd58: 0x10143a  dsrl        $v0, $s0, 16
    ctx->pc = 0x3edd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 16);
    // 0x3edd5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3edd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edd60: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3edd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3edd64: 0x10843a  dsrl        $s0, $s0, 16
    ctx->pc = 0x3edd64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 16);
    // 0x3edd68: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3edd68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3edd6c: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x3edd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3edd70: 0xa2b00003  sb          $s0, 0x3($s5)
    ctx->pc = 0x3edd70u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x3edd74: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EDD74u;
    SET_GPR_U32(ctx, 31, 0x3EDD7Cu);
    ctx->pc = 0x3EDD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDD74u;
    // 0x3edd78: 0xa2a20002  sb          $v0, 0x2($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EDD74u, 0x3EDD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDD7Cu;
label_3edd7c:
    // 0x3edd7c: 0x96e40006  lhu         $a0, 0x6($s7)
    ctx->pc = 0x3edd7cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x3edd80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3edd80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edd84: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EDD84u;
    SET_GPR_U32(ctx, 31, 0x3EDD8Cu);
    ctx->pc = 0x3EDD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDD84u;
    // 0x3edd88: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EDD84u, 0x3EDD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDD8Cu;
label_3edd8c:
    // 0x3edd8c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3edd8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3edd90: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x3edd90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3edd94: 0x206802d  daddu       $s0, $s0, $a2
    ctx->pc = 0x3edd94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3edd98: 0x10143a  dsrl        $v0, $s0, 16
    ctx->pc = 0x3edd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 16);
    // 0x3edd9c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3edd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3edda0: 0x10843a  dsrl        $s0, $s0, 16
    ctx->pc = 0x3edda0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 16);
    // 0x3edda4: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3edda4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3edda8: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x3edda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3eddac: 0xa2b00005  sb          $s0, 0x5($s5)
    ctx->pc = 0x3eddacu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 16));
    // 0x3eddb0: 0xa2a20004  sb          $v0, 0x4($s5)
    ctx->pc = 0x3eddb0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eddb4: 0x7bb90010  lq          $t9, 0x10($sp)
    ctx->pc = 0x3eddb4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eddb8:
    // 0x3eddb8: 0x67de0001  daddiu      $fp, $fp, 0x1
    ctx->pc = 0x3eddb8u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)1);
    // 0x3eddbc: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x3eddbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x3eddc0: 0x3d9102b  sltu        $v0, $fp, $t9
    ctx->pc = 0x3eddc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x3eddc4: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x3EDDC4u;
    {
        const bool branch_taken_0x3eddc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDDC4u;
        // 0x3eddc8: 0x26b50006  addiu       $s5, $s5, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eddc4) {
            ctx->pc = 0x3EDC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3edc28;
        }
    }
    ctx->pc = 0x3EDDCCu;
label_3eddcc:
    // 0x3eddcc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3eddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3eddd0:
    // 0x3eddd0: 0x90450010  lbu         $a1, 0x10($v0)
    ctx->pc = 0x3eddd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_3eddd4:
    // 0x3eddd4: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x3eddd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3eddd8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3EDDD8u;
    {
        const bool branch_taken_0x3eddd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDDD8u;
        // 0x3edddc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eddd8) {
            ctx->pc = 0x3EDE20u;
            goto label_3ede20;
        }
    }
    ctx->pc = 0x3EDDE0u;
    // 0x3edde0: 0x30a500fb  andi        $a1, $a1, 0xFB
    ctx->pc = 0x3edde0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)251);
    // 0x3edde4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3edde4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3edde8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x3edde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eddec: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x3eddecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x3eddf0: 0x90630011  lbu         $v1, 0x11($v1)
    ctx->pc = 0x3eddf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x3eddf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3eddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3eddf8: 0xa0c50010  sb          $a1, 0x10($a2)
    ctx->pc = 0x3eddf8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x3eddfc: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x3eddfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ede00: 0xa0c20012  sb          $v0, 0x12($a2)
    ctx->pc = 0x3ede00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ede04: 0xa0c30013  sb          $v1, 0x13($a2)
    ctx->pc = 0x3ede04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ede08: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3EDE08u;
    SET_GPR_U32(ctx, 31, 0x3EDE10u);
    ctx->pc = 0x3EDE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDE08u;
    // 0x3ede0c: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3EDE08u, 0x3EDE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDE10u;
label_3ede10:
    // 0x3ede10: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3ede10u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x3ede14: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3ede14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ede18: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3ede18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3ede1c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x3ede1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
label_3ede20:
    // 0x3ede20: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3ede20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ede24:
    // 0x3ede24: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3ede24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ede28:
    // 0x3ede28: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3ede28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ede2c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3ede2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ede30: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3ede30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ede34: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3ede34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ede38: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3ede38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ede3c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3ede3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ede40: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3ede40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ede44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ede44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ede48: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE48u;
        // 0x3ede4c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDE50u;
}
