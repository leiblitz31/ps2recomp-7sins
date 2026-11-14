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

// Function: sub_00379180
// Address: 0x379180 - 0x3792c8
void sub_00379180_0x379180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379180_0x379180");
#endif

    switch (ctx->pc) {
        case 0x3791c4u: goto label_3791c4;
        case 0x3791f4u: goto label_3791f4;
        case 0x37920cu: goto label_37920c;
        case 0x379224u: goto label_379224;
        case 0x379238u: goto label_379238;
        case 0x379254u: goto label_379254;
        case 0x379264u: goto label_379264;
        case 0x379280u: goto label_379280;
        case 0x379294u: goto label_379294;
        default: break;
    }

    ctx->pc = 0x379180u;

    // 0x379180: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x379180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x379184: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x379184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x379188: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x379188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x37918c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x37918cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x379190: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x379190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x379194: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x379194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379198: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x379198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x37919c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3791a0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3791a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3791a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3791a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3791a8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3791a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3791ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3791acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3791b0: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3791B0u;
    {
        const bool branch_taken_0x3791b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3791B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3791B0u;
        // 0x3791b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3791b0) {
            ctx->pc = 0x379288u;
            goto label_379288;
        }
    }
    ctx->pc = 0x3791B8u;
    // 0x3791b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3791b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791bc: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3791BCu;
    SET_GPR_U32(ctx, 31, 0x3791C4u);
    ctx->pc = 0x3791C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3791BCu;
    // 0x3791c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3791BCu, 0x3791C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3791C4u;
label_3791c4:
    // 0x3791c4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3791C4u;
    {
        const bool branch_taken_0x3791c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3791C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3791C4u;
        // 0x3791c8: 0x93b20001  lbu         $s2, 0x1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3791c4) {
            ctx->pc = 0x379270u;
            goto label_379270;
        }
    }
    ctx->pc = 0x3791CCu;
    // 0x3791cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3791ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791d0: 0x93b50002  lbu         $s5, 0x2($sp)
    ctx->pc = 0x3791d0u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x3791d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3791d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791d8: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x3791d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x3791dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3791dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791e0: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x3791e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3791e4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3791e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3791e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791ec: 0xc0de296  jal         func_378A58
    ctx->pc = 0x3791ECu;
    SET_GPR_U32(ctx, 31, 0x3791F4u);
    ctx->pc = 0x3791F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3791ECu;
    // 0x3791f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378A58u, 0x3791ECu, 0x3791F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3791F4u;
label_3791f4:
    // 0x3791f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3791f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791f8: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3791F8u;
    {
        const bool branch_taken_0x3791f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3791FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3791F8u;
        // 0x3791fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3791f8) {
            ctx->pc = 0x379270u;
            goto label_379270;
        }
    }
    ctx->pc = 0x379200u;
    // 0x379200: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x379200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x379204: 0xc10480a  jal         func_412028
    ctx->pc = 0x379204u;
    SET_GPR_U32(ctx, 31, 0x37920Cu);
    ctx->pc = 0x379208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379204u;
    // 0x379208: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x379204u, 0x37920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37920Cu;
label_37920c:
    // 0x37920c: 0x14520025  bne         $v0, $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x37920Cu;
    {
        const bool branch_taken_0x37920c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x379210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37920Cu;
        // 0x379210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37920c) {
            ctx->pc = 0x3792A4u;
            goto label_3792a4;
        }
    }
    ctx->pc = 0x379214u;
    // 0x379214: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x379214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x379218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x379218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37921c: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x37921Cu;
    SET_GPR_U32(ctx, 31, 0x379224u);
    ctx->pc = 0x379220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37921Cu;
    // 0x379220: 0x133080  sll         $a2, $s3, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x37921Cu, 0x379224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379224u;
label_379224:
    // 0x379224: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x379224u;
    {
        const bool branch_taken_0x379224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379224u;
        // 0x379228: 0x133100  sll         $a2, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379224) {
            ctx->pc = 0x379270u;
            goto label_379270;
        }
    }
    ctx->pc = 0x37922Cu;
    // 0x37922c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x37922cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x379230: 0xc103454  jal         func_40D150
    ctx->pc = 0x379230u;
    SET_GPR_U32(ctx, 31, 0x379238u);
    ctx->pc = 0x379234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379230u;
    // 0x379234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x379230u, 0x379238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379238u;
label_379238:
    // 0x379238: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x379238u;
    {
        const bool branch_taken_0x379238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379238u;
        // 0x37923c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379238) {
            ctx->pc = 0x379270u;
            goto label_379270;
        }
    }
    ctx->pc = 0x379240u;
    // 0x379240: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x379240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x379244: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x379244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x379248: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x379248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37924c: 0xc103454  jal         func_40D150
    ctx->pc = 0x37924Cu;
    SET_GPR_U32(ctx, 31, 0x379254u);
    ctx->pc = 0x379250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37924Cu;
    // 0x379250: 0x63180  sll         $a2, $a2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x37924Cu, 0x379254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379254u;
label_379254:
    // 0x379254: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x379254u;
    {
        const bool branch_taken_0x379254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379254u;
        // 0x379258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379254) {
            ctx->pc = 0x379270u;
            goto label_379270;
        }
    }
    ctx->pc = 0x37925Cu;
    // 0x37925c: 0xc0de1a2  jal         func_378688
    ctx->pc = 0x37925Cu;
    SET_GPR_U32(ctx, 31, 0x379264u);
    ctx->pc = 0x379260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37925Cu;
    // 0x379260: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378688u, 0x37925Cu, 0x379264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379264u;
label_379264:
    // 0x379264: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x379264u;
    {
        const bool branch_taken_0x379264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379264u;
        // 0x379268: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379264) {
            ctx->pc = 0x379278u;
            goto label_379278;
        }
    }
    ctx->pc = 0x37926Cu;
    // 0x37926c: 0x0  nop
    ctx->pc = 0x37926cu;
    // NOP
label_379270:
    // 0x379270: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x379270u;
    {
        const bool branch_taken_0x379270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379270u;
        // 0x379274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379270) {
            ctx->pc = 0x3792A4u;
            goto label_3792a4;
        }
    }
    ctx->pc = 0x379278u;
label_379278:
    // 0x379278: 0xc0de5f8  jal         func_3797E0
    ctx->pc = 0x379278u;
    SET_GPR_U32(ctx, 31, 0x379280u);
    ctx->pc = 0x37927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379278u;
    // 0x37927c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3797E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3797E0u, 0x379278u, 0x379280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379280u;
label_379280:
    // 0x379280: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x379280u;
    {
        const bool branch_taken_0x379280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379280u;
        // 0x379284: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379280) {
            ctx->pc = 0x3792A4u;
            goto label_3792a4;
        }
    }
    ctx->pc = 0x379288u;
label_379288:
    // 0x379288: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x379288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37928c: 0xc0de890  jal         func_37A240
    ctx->pc = 0x37928Cu;
    SET_GPR_U32(ctx, 31, 0x379294u);
    ctx->pc = 0x379290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37928Cu;
    // 0x379290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A240u, 0x37928Cu, 0x379294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379294u;
label_379294:
    // 0x379294: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x379294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379298: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x379298u;
    {
        const bool branch_taken_0x379298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379298u;
        // 0x37929c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379298) {
            ctx->pc = 0x3792A4u;
            goto label_3792a4;
        }
    }
    ctx->pc = 0x3792A0u;
    // 0x3792a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3792a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3792a4:
    // 0x3792a4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3792a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3792a8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3792a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3792ac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3792acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3792b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3792b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3792b4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3792b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3792b8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3792b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3792bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3792bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3792c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3792C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3792C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792C0u;
        // 0x3792c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3792C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3792C8u;
}
