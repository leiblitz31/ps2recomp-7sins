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

// Function: sub_00444110
// Address: 0x444110 - 0x4442a0
void sub_00444110_0x444110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444110_0x444110");
#endif

    switch (ctx->pc) {
        case 0x444238u: goto label_444238;
        case 0x444244u: goto label_444244;
        case 0x444258u: goto label_444258;
        case 0x444278u: goto label_444278;
        case 0x444284u: goto label_444284;
        default: break;
    }

    ctx->pc = 0x444110u;

    // 0x444110: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x444110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x444114: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x444114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x444118: 0x8f88bf18  lw          $t0, -0x40E8($gp)
    ctx->pc = 0x444118u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x44411c: 0x2449e880  addiu       $t1, $v0, -0x1780
    ctx->pc = 0x44411cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444120: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x444120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x444124: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x444124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444128: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x444128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44412c: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x44412cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x444130: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x444130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x444134: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x444134u;
    {
        const bool branch_taken_0x444134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444134u;
        // 0x444138: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444134) {
            ctx->pc = 0x444268u;
            goto label_444268;
        }
    }
    ctx->pc = 0x44413Cu;
    // 0x44413c: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x44413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x444140: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x444140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x444144: 0x2450004c  addiu       $s0, $v0, 0x4C
    ctx->pc = 0x444144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x444148: 0x2cc30005  sltiu       $v1, $a2, 0x5
    ctx->pc = 0x444148u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x44414c: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x44414cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x444150: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x444150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x444154: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x444154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x444158: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x444158u;
    {
        const bool branch_taken_0x444158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444158u;
        // 0x44415c: 0xae07002c  sw          $a3, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444158) {
            ctx->pc = 0x444224u;
            goto label_444224;
        }
    }
    ctx->pc = 0x444160u;
    // 0x444160: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x444160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x444164: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x444164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x444168: 0x24421720  addiu       $v0, $v0, 0x1720
    ctx->pc = 0x444168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5920));
    // 0x44416c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44416cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444170: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x444170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x444174: 0x800008  jr          $a0
    ctx->pc = 0x444174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x44417Cu: goto label_44417c;
            case 0x4441B0u: goto label_4441b0;
            case 0x4441C8u: goto label_4441c8;
            case 0x4441E0u: goto label_4441e0;
            case 0x44420Cu: goto label_44420c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444174u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x44417Cu;
label_44417c:
    // 0x44417c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x44417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x444180: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x444180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444184: 0xe5001a  div         $zero, $a3, $a1
    ctx->pc = 0x444184u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x444188: 0x2543e880  addiu       $v1, $t2, -0x1780
    ctx->pc = 0x444188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961280));
    // 0x44418c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x444190: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x444190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x444194: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x444194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x444198: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x444198u;
    {
        const bool branch_taken_0x444198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x444198) {
            ctx->pc = 0x44419Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444198u;
            // 0x44419c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4441A0u;
            goto label_4441a0;
        }
    }
    ctx->pc = 0x4441A0u;
label_4441a0:
    // 0x4441a0: 0x3010  mfhi        $a2
    ctx->pc = 0x4441a0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x4441a4: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x4441a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x4441a8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x4441A8u;
    {
        const bool branch_taken_0x4441a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4441ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4441A8u;
        // 0x4441ac: 0xae06002c  sw          $a2, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4441a8) {
            ctx->pc = 0x444248u;
            goto label_444248;
        }
    }
    ctx->pc = 0x4441B0u;
label_4441b0:
    // 0x4441b0: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x4441b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4441b4: 0x2543e880  addiu       $v1, $t2, -0x1780
    ctx->pc = 0x4441b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961280));
    // 0x4441b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4441b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4441bc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4441bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4441c0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x4441C0u;
    {
        const bool branch_taken_0x4441c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4441C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4441C0u;
        // 0x4441c4: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4441c0) {
            ctx->pc = 0x444248u;
            goto label_444248;
        }
    }
    ctx->pc = 0x4441C8u;
label_4441c8:
    // 0x4441c8: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x4441c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4441cc: 0x2543e880  addiu       $v1, $t2, -0x1780
    ctx->pc = 0x4441ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961280));
    // 0x4441d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4441d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4441d4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4441d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4441d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4441D8u;
    {
        const bool branch_taken_0x4441d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4441DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4441D8u;
        // 0x4441dc: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4441d8) {
            ctx->pc = 0x444248u;
            goto label_444248;
        }
    }
    ctx->pc = 0x4441E0u;
label_4441e0:
    // 0x4441e0: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x4441e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4441e4: 0x2544e880  addiu       $a0, $t2, -0x1780
    ctx->pc = 0x4441e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961280));
    // 0x4441e8: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x4441e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x4441ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4441ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4441f0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4441f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4441f4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x4441f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4441f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4441f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4441fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4441fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x444200: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x444200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x444204: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x444204u;
    {
        const bool branch_taken_0x444204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444204u;
        // 0x444208: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444204) {
            ctx->pc = 0x444248u;
            goto label_444248;
        }
    }
    ctx->pc = 0x44420Cu;
label_44420c:
    // 0x44420c: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x44420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444210: 0x2543e880  addiu       $v1, $t2, -0x1780
    ctx->pc = 0x444210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961280));
    // 0x444214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x444214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x444218: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x444218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x44421c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x44421Cu;
    {
        const bool branch_taken_0x44421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44421Cu;
        // 0x444220: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44421c) {
            ctx->pc = 0x444248u;
            goto label_444248;
        }
    }
    ctx->pc = 0x444224u;
label_444224:
    // 0x444224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x444224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x444228: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x444228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44422c: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x44422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x444230: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x444230u;
    SET_GPR_U32(ctx, 31, 0x444238u);
    ctx->pc = 0x444234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444230u;
    // 0x444234: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x444230u, 0x444238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444238u;
label_444238:
    // 0x444238: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x444238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44423c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x44423Cu;
    SET_GPR_U32(ctx, 31, 0x444244u);
    ctx->pc = 0x444240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44423Cu;
    // 0x444240: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44423Cu, 0x444244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444244u;
label_444244:
    // 0x444244: 0x0  nop
    ctx->pc = 0x444244u;
    // NOP
label_444248:
    // 0x444248: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x444248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x44424c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44424cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444250: 0xc111718  jal         func_445C60
    ctx->pc = 0x444250u;
    SET_GPR_U32(ctx, 31, 0x444258u);
    ctx->pc = 0x444254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444250u;
    // 0x444254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x444250u, 0x444258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444258u;
label_444258:
    // 0x444258: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x444258u;
    {
        const bool branch_taken_0x444258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444258u;
        // 0x44425c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444258) {
            ctx->pc = 0x444288u;
            goto label_444288;
        }
    }
    ctx->pc = 0x444260u;
    // 0x444260: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x444260u;
    {
        const bool branch_taken_0x444260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444260u;
        // 0x444264: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444260) {
            ctx->pc = 0x444290u;
            goto label_444290;
        }
    }
    ctx->pc = 0x444268u;
label_444268:
    // 0x444268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x444268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44426c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x44426cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x444270: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x444270u;
    SET_GPR_U32(ctx, 31, 0x444278u);
    ctx->pc = 0x444274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444270u;
    // 0x444274: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x444270u, 0x444278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444278u;
label_444278:
    // 0x444278: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x444278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x44427c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x44427Cu;
    SET_GPR_U32(ctx, 31, 0x444284u);
    ctx->pc = 0x444280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44427Cu;
    // 0x444280: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44427Cu, 0x444284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444284u;
label_444284:
    // 0x444284: 0x0  nop
    ctx->pc = 0x444284u;
    // NOP
label_444288:
    // 0x444288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x444288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44428c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x44428cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_444290:
    // 0x444290: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x444290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x444294: 0x3e00008  jr          $ra
    ctx->pc = 0x444294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444294u;
        // 0x444298: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44429Cu;
    // 0x44429c: 0x0  nop
    ctx->pc = 0x44429cu;
    // NOP
    ctx->pc = 0x4442a0u;
}
