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

// Function: sub_00430530
// Address: 0x430530 - 0x430810
void sub_00430530_0x430530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430530_0x430530");
#endif

    switch (ctx->pc) {
        case 0x430570u: goto label_430570;
        case 0x430578u: goto label_430578;
        case 0x430620u: goto label_430620;
        case 0x430680u: goto label_430680;
        case 0x430690u: goto label_430690;
        case 0x4306a0u: goto label_4306a0;
        default: break;
    }

    ctx->pc = 0x430530u;

    // 0x430530: 0x27bdef60  addiu       $sp, $sp, -0x10A0
    ctx->pc = 0x430530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963040));
    // 0x430534: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x430534u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430538: 0x7fb01090  sq          $s0, 0x1090($sp)
    ctx->pc = 0x430538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4240), GPR_VEC(ctx, 16));
    // 0x43053c: 0x7fb11080  sq          $s1, 0x1080($sp)
    ctx->pc = 0x43053cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4224), GPR_VEC(ctx, 17));
    // 0x430540: 0x7fb21070  sq          $s2, 0x1070($sp)
    ctx->pc = 0x430540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4208), GPR_VEC(ctx, 18));
    // 0x430544: 0x7fb31060  sq          $s3, 0x1060($sp)
    ctx->pc = 0x430544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4192), GPR_VEC(ctx, 19));
    // 0x430548: 0x7fb41050  sq          $s4, 0x1050($sp)
    ctx->pc = 0x430548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4176), GPR_VEC(ctx, 20));
    // 0x43054c: 0x7fb51040  sq          $s5, 0x1040($sp)
    ctx->pc = 0x43054cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4160), GPR_VEC(ctx, 21));
    // 0x430550: 0x8dc20010  lw          $v0, 0x10($t6)
    ctx->pc = 0x430550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x430554: 0x184000a5  blez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x430554u;
    {
        const bool branch_taken_0x430554 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x430558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430554u;
        // 0x430558: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430554) {
            ctx->pc = 0x4307ECu;
            goto label_4307ec;
        }
    }
    ctx->pc = 0x43055Cu;
    // 0x43055c: 0x8dcc000c  lw          $t4, 0xC($t6)
    ctx->pc = 0x43055cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x430560: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x430560u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430564: 0x27b31000  addiu       $s3, $sp, 0x1000
    ctx->pc = 0x430564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
    // 0x430568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x430568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43056c: 0x0  nop
    ctx->pc = 0x43056cu;
    // NOP
label_430570:
    // 0x430570: 0x25b40004  addiu       $s4, $t5, 0x4
    ctx->pc = 0x430570u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x430574: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x430574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430578:
    // 0x430578: 0x19800036  blez        $t4, . + 4 + (0x36 << 2)
    ctx->pc = 0x430578u;
    {
        const bool branch_taken_0x430578 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x43057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430578u;
        // 0x43057c: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430578) {
            ctx->pc = 0x430654u;
            goto label_430654;
        }
    }
    ctx->pc = 0x430580u;
    // 0x430580: 0x8dc40018  lw          $a0, 0x18($t6)
    ctx->pc = 0x430580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x430584: 0x1a61821  addu        $v1, $t5, $a2
    ctx->pc = 0x430584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x430588: 0x8dc50004  lw          $a1, 0x4($t6)
    ctx->pc = 0x430588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x43058c: 0x61280  sll         $v0, $a2, 10
    ctx->pc = 0x43058cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
    // 0x430590: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x430590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x430594: 0x5d3821  addu        $a3, $v0, $sp
    ctx->pc = 0x430594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x430598: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x430598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43059c: 0x3184003f  andi        $a0, $t4, 0x3F
    ctx->pc = 0x43059cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x4305a0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4305a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4305a4: 0x19800015  blez        $t4, . + 4 + (0x15 << 2)
    ctx->pc = 0x4305A4u;
    {
        const bool branch_taken_0x4305a4 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x4305A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4305A4u;
        // 0x4305a8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4305a4) {
            ctx->pc = 0x4305FCu;
            goto label_4305fc;
        }
    }
    ctx->pc = 0x4305ACu;
    // 0x4305ac: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4305ACu;
    {
        const bool branch_taken_0x4305ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4305B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4305ACu;
        // 0x4305b0: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4305ac) {
            ctx->pc = 0x430618u;
            goto label_430618;
        }
    }
    ctx->pc = 0x4305B4u;
    // 0x4305b4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x4305B4u;
    {
        const bool branch_taken_0x4305b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4305b4) {
            ctx->pc = 0x4305B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4305B4u;
            // 0x4305b8: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430600u;
            goto label_430600;
        }
    }
    ctx->pc = 0x4305BCu;
    // 0x4305bc: 0x28820021  slti        $v0, $a0, 0x21
    ctx->pc = 0x4305bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x4305c0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4305C0u;
    {
        const bool branch_taken_0x4305c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4305c0) {
            ctx->pc = 0x4305C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4305C0u;
            // 0x4305c4: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4305ECu;
            goto label_4305ec;
        }
    }
    ctx->pc = 0x4305C8u;
    // 0x4305c8: 0x28820031  slti        $v0, $a0, 0x31
    ctx->pc = 0x4305c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x4305cc: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x4305CCu;
    {
        const bool branch_taken_0x4305cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4305cc) {
            ctx->pc = 0x4305D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4305CCu;
            // 0x4305d0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43061Cu;
            goto label_43061c;
        }
    }
    ctx->pc = 0x4305D4u;
    // 0x4305d4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4305d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4305d8: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x4305d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x4305dc: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x4305dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4305e0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x4305e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4305e4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x4305e4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x4305e8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x4305e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_4305ec:
    // 0x4305ec: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4305ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4305f0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4305f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4305f4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4305f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4305f8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4305f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_4305fc:
    // 0x4305fc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x4305fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_430600:
    // 0x430600: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x430600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x430604: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x430604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x430608: 0x10c382a  slt         $a3, $t0, $t4
    ctx->pc = 0x430608u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x43060c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x43060cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x430610: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x430610u;
    {
        const bool branch_taken_0x430610 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x430614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430610u;
        // 0x430614: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430610) {
            ctx->pc = 0x430654u;
            goto label_430654;
        }
    }
    ctx->pc = 0x430618u;
label_430618:
    // 0x430618: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x430618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_43061c:
    // 0x43061c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x43061cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_430620:
    // 0x430620: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x430620u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430624: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x430624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x430628: 0x10c382a  slt         $a3, $t0, $t4
    ctx->pc = 0x430628u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x43062c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x43062cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x430630: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x430630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x430634: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x430634u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x430638: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x430638u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x43063c: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x43063cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x430640: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x430640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x430644: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x430644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x430648: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x430648u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x43064c: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x43064Cu;
    {
        const bool branch_taken_0x43064c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x430650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43064Cu;
        // 0x430650: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43064c) {
            ctx->pc = 0x430620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430620;
        }
    }
    ctx->pc = 0x430654u;
label_430654:
    // 0x430654: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x430654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430658: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x430658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x43065c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x43065Cu;
    {
        const bool branch_taken_0x43065c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43065Cu;
        // 0x430660: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43065c) {
            ctx->pc = 0x430578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430578;
        }
    }
    ctx->pc = 0x430664u;
    // 0x430664: 0x8dc2000c  lw          $v0, 0xC($t6)
    ctx->pc = 0x430664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x430668: 0x5840005d  blezl       $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x430668u;
    {
        const bool branch_taken_0x430668 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x430668) {
            ctx->pc = 0x43066Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430668u;
            // 0x43066c: 0x280682d  daddu       $t5, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4307E0u;
            goto label_4307e0;
        }
    }
    ctx->pc = 0x430670u;
    // 0x430670: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x430670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430674: 0x31b00004  andi        $s0, $t5, 0x4
    ctx->pc = 0x430674u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x430678: 0x25b10002  addiu       $s1, $t5, 0x2
    ctx->pc = 0x430678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x43067c: 0x0  nop
    ctx->pc = 0x43067cu;
    // NOP
label_430680:
    // 0x430680: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x430680u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430684: 0x25190010  addiu       $t9, $t0, 0x10
    ctx->pc = 0x430684u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x430688: 0x8c040  sll         $t8, $t0, 1
    ctx->pc = 0x430688u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x43068c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x43068cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430690:
    // 0x430690: 0x254f0010  addiu       $t7, $t2, 0x10
    ctx->pc = 0x430690u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x430694: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x430694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430698: 0xa4827  nor         $t1, $zero, $t2
    ctx->pc = 0x430698u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x43069c: 0x0  nop
    ctx->pc = 0x43069cu;
    // NOP
label_4306a0:
    // 0x4306a0: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4306A0u;
    {
        const bool branch_taken_0x4306a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4306A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4306A0u;
        // 0x4306a4: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4306a0) {
            ctx->pc = 0x4306FCu;
            goto label_4306fc;
        }
    }
    ctx->pc = 0x4306A8u;
    // 0x4306a8: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x4306a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x4306ac: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4306acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4306b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4306b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4306b4: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x4306b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x4306b8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4306b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4306bc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4306bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4306c0: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x4306c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x4306c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4306c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4306c8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4306c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4306cc: 0x30e60020  andi        $a2, $a3, 0x20
    ctx->pc = 0x4306ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x4306d0: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x4306d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4306d4: 0x31250001  andi        $a1, $t1, 0x1
    ctx->pc = 0x4306d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x4306d8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4306d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4306dc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4306dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4306e0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x4306e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x4306e4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x4306e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x4306e8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4306e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4306ec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4306ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4306f0: 0x14b2821  addu        $a1, $t2, $t3
    ctx->pc = 0x4306f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x4306f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4306F4u;
    {
        const bool branch_taken_0x4306f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4306F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4306F4u;
        // 0x4306f8: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4306f4) {
            ctx->pc = 0x430748u;
            goto label_430748;
        }
    }
    ctx->pc = 0x4306FCu;
label_4306fc:
    // 0x4306fc: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x4306fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x430700: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x430700u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x430704: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x430704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x430708: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x430708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x43070c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x43070cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x430710: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x430710u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x430714: 0x30e50010  andi        $a1, $a3, 0x10
    ctx->pc = 0x430714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x430718: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x430718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43071c: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x43071cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x430720: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x430720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x430724: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x430724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x430728: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x430728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x43072c: 0x30e30020  andi        $v1, $a3, 0x20
    ctx->pc = 0x43072cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x430730: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x430730u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x430734: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x430734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x430738: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x430738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x43073c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x43073cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x430740: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x430740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x430744: 0x14b2821  addu        $a1, $t2, $t3
    ctx->pc = 0x430744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_430748:
    // 0x430748: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x430748u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x43074c: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x43074cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x430750: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x430750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x430754: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x430754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x430758: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x430758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x43075c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x43075cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x430760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x430760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x430764: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x430764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x430768: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x430768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x43076c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x43076cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x430770: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x430770u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x430774: 0x29620010  slti        $v0, $t3, 0x10
    ctx->pc = 0x430774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x430778: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x430778u;
    {
        const bool branch_taken_0x430778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430778u;
        // 0x43077c: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430778) {
            ctx->pc = 0x4306A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4306a0;
        }
    }
    ctx->pc = 0x430780u;
    // 0x430780: 0x1e0502d  daddu       $t2, $t7, $zero
    ctx->pc = 0x430780u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430784: 0x29420040  slti        $v0, $t2, 0x40
    ctx->pc = 0x430784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x430788: 0x5440ffc1  bnel        $v0, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x430788u;
    {
        const bool branch_taken_0x430788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430788) {
            ctx->pc = 0x43078Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430788u;
            // 0x43078c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430690;
        }
    }
    ctx->pc = 0x430790u;
    // 0x430790: 0x8dc50018  lw          $a1, 0x18($t6)
    ctx->pc = 0x430790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x430794: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x430794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430798: 0x8dc40004  lw          $a0, 0x4($t6)
    ctx->pc = 0x430798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x43079c: 0x112302a  slt         $a2, $t0, $s2
    ctx->pc = 0x43079cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x4307a0: 0x2253818  mult        $a3, $s1, $a1
    ctx->pc = 0x4307a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4307a4: 0x1a51018  mult        $v0, $t5, $a1
    ctx->pc = 0x4307a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4307a8: 0x7ba31000  lq          $v1, 0x1000($sp)
    ctx->pc = 0x4307a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 4096)));
    // 0x4307ac: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x4307acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x4307b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4307b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4307b4: 0x3052821  addu        $a1, $t8, $a1
    ctx->pc = 0x4307b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x4307b8: 0x3042021  addu        $a0, $t8, $a0
    ctx->pc = 0x4307b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x4307bc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x4307bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x4307c0: 0x7ba21010  lq          $v0, 0x1010($sp)
    ctx->pc = 0x4307c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 4112)));
    // 0x4307c4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4307c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x4307c8: 0x7ba31020  lq          $v1, 0x1020($sp)
    ctx->pc = 0x4307c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 4128)));
    // 0x4307cc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x4307ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x4307d0: 0x7ba21030  lq          $v0, 0x1030($sp)
    ctx->pc = 0x4307d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 4144)));
    // 0x4307d4: 0x14c0ffaa  bnez        $a2, . + 4 + (-0x56 << 2)
    ctx->pc = 0x4307D4u;
    {
        const bool branch_taken_0x4307d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4307D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4307D4u;
        // 0x4307d8: 0x7ca20010  sq          $v0, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4307d4) {
            ctx->pc = 0x430680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430680;
        }
    }
    ctx->pc = 0x4307DCu;
    // 0x4307dc: 0x280682d  daddu       $t5, $s4, $zero
    ctx->pc = 0x4307dcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4307e0:
    // 0x4307e0: 0x1b5102a  slt         $v0, $t5, $s5
    ctx->pc = 0x4307e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x4307e4: 0x1440ff62  bnez        $v0, . + 4 + (-0x9E << 2)
    ctx->pc = 0x4307E4u;
    {
        const bool branch_taken_0x4307e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4307E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4307E4u;
        // 0x4307e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4307e4) {
            ctx->pc = 0x430570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430570;
        }
    }
    ctx->pc = 0x4307ECu;
label_4307ec:
    // 0x4307ec: 0x7bb01090  lq          $s0, 0x1090($sp)
    ctx->pc = 0x4307ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4240)));
    // 0x4307f0: 0x7bb11080  lq          $s1, 0x1080($sp)
    ctx->pc = 0x4307f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4224)));
    // 0x4307f4: 0x7bb21070  lq          $s2, 0x1070($sp)
    ctx->pc = 0x4307f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4208)));
    // 0x4307f8: 0x7bb31060  lq          $s3, 0x1060($sp)
    ctx->pc = 0x4307f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 4192)));
    // 0x4307fc: 0x7bb41050  lq          $s4, 0x1050($sp)
    ctx->pc = 0x4307fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 4176)));
    // 0x430800: 0x7bb51040  lq          $s5, 0x1040($sp)
    ctx->pc = 0x430800u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 4160)));
    // 0x430804: 0x3e00008  jr          $ra
    ctx->pc = 0x430804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430804u;
        // 0x430808: 0x27bd10a0  addiu       $sp, $sp, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43080Cu;
    // 0x43080c: 0x0  nop
    ctx->pc = 0x43080cu;
    // NOP
    ctx->pc = 0x430810u;
}
