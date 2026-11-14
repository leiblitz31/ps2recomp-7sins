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

// Function: entry_2f2118
// Address: 0x2f2118 - 0x2f3030
void entry_2f2118_0x2f3030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2f2118_0x2f3030");
#endif

    switch (ctx->pc) {
        case 0x2f2160u: goto label_2f2160;
        case 0x2f21c8u: goto label_2f21c8;
        case 0x2f2210u: goto label_2f2210;
        case 0x2f22a0u: goto label_2f22a0;
        case 0x2f22f0u: goto label_2f22f0;
        case 0x2f2310u: goto label_2f2310;
        case 0x2f2448u: goto label_2f2448;
        case 0x2f2494u: goto label_2f2494;
        case 0x2f2548u: goto label_2f2548;
        case 0x2f2568u: goto label_2f2568;
        case 0x2f2598u: goto label_2f2598;
        case 0x2f25acu: goto label_2f25ac;
        case 0x2f25c4u: goto label_2f25c4;
        case 0x2f25d4u: goto label_2f25d4;
        case 0x2f25e4u: goto label_2f25e4;
        case 0x2f261cu: goto label_2f261c;
        case 0x2f263cu: goto label_2f263c;
        case 0x2f2678u: goto label_2f2678;
        case 0x2f2694u: goto label_2f2694;
        case 0x2f26e8u: goto label_2f26e8;
        case 0x2f2778u: goto label_2f2778;
        case 0x2f27b0u: goto label_2f27b0;
        case 0x2f27ccu: goto label_2f27cc;
        case 0x2f2814u: goto label_2f2814;
        case 0x2f2828u: goto label_2f2828;
        case 0x2f2840u: goto label_2f2840;
        case 0x2f2850u: goto label_2f2850;
        case 0x2f2860u: goto label_2f2860;
        case 0x2f2868u: goto label_2f2868;
        case 0x2f286cu: goto label_2f286c;
        case 0x2f2888u: goto label_2f2888;
        case 0x2f2894u: goto label_2f2894;
        case 0x2f28a4u: goto label_2f28a4;
        case 0x2f28c8u: goto label_2f28c8;
        case 0x2f28d8u: goto label_2f28d8;
        case 0x2f28e4u: goto label_2f28e4;
        case 0x2f28f4u: goto label_2f28f4;
        case 0x2f2908u: goto label_2f2908;
        case 0x2f29e0u: goto label_2f29e0;
        case 0x2f29f0u: goto label_2f29f0;
        case 0x2f2a04u: goto label_2f2a04;
        case 0x2f2a20u: goto label_2f2a20;
        case 0x2f2a38u: goto label_2f2a38;
        case 0x2f2aacu: goto label_2f2aac;
        case 0x2f2adcu: goto label_2f2adc;
        case 0x2f2af0u: goto label_2f2af0;
        case 0x2f2b10u: goto label_2f2b10;
        case 0x2f2b30u: goto label_2f2b30;
        case 0x2f2b44u: goto label_2f2b44;
        case 0x2f2b8cu: goto label_2f2b8c;
        case 0x2f2b9cu: goto label_2f2b9c;
        case 0x2f2bacu: goto label_2f2bac;
        case 0x2f2c48u: goto label_2f2c48;
        case 0x2f2c64u: goto label_2f2c64;
        case 0x2f2c70u: goto label_2f2c70;
        case 0x2f2c78u: goto label_2f2c78;
        case 0x2f2c94u: goto label_2f2c94;
        case 0x2f2ca4u: goto label_2f2ca4;
        case 0x2f2cb4u: goto label_2f2cb4;
        case 0x2f2cc4u: goto label_2f2cc4;
        case 0x2f2cf4u: goto label_2f2cf4;
        case 0x2f2cfcu: goto label_2f2cfc;
        case 0x2f2d0cu: goto label_2f2d0c;
        case 0x2f2d40u: goto label_2f2d40;
        case 0x2f2d5cu: goto label_2f2d5c;
        case 0x2f2d84u: goto label_2f2d84;
        case 0x2f2d98u: goto label_2f2d98;
        case 0x2f2da4u: goto label_2f2da4;
        case 0x2f2db0u: goto label_2f2db0;
        case 0x2f2dbcu: goto label_2f2dbc;
        case 0x2f2dccu: goto label_2f2dcc;
        case 0x2f2decu: goto label_2f2dec;
        case 0x2f2e00u: goto label_2f2e00;
        case 0x2f2e10u: goto label_2f2e10;
        case 0x2f2eb8u: goto label_2f2eb8;
        case 0x2f2eccu: goto label_2f2ecc;
        case 0x2f2edcu: goto label_2f2edc;
        case 0x2f2ef4u: goto label_2f2ef4;
        case 0x2f2f0cu: goto label_2f2f0c;
        case 0x2f2f24u: goto label_2f2f24;
        case 0x2f2f40u: goto label_2f2f40;
        case 0x2f2f54u: goto label_2f2f54;
        case 0x2f2f6cu: goto label_2f2f6c;
        case 0x2f2fa0u: goto label_2f2fa0;
        case 0x2f2facu: goto label_2f2fac;
        case 0x2f2fb8u: goto label_2f2fb8;
        case 0x2f2fc4u: goto label_2f2fc4;
        case 0x2f2fd0u: goto label_2f2fd0;
        case 0x2f2ffcu: goto label_2f2ffc;
        default: break;
    }

    ctx->pc = 0x2f2118u;

    // 0x2f2118: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2f2118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2f211c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f211cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2120: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2f2120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2f2124: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f2124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2128: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2f2128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2f212c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2f212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2f2130: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2f2130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2f2134: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2f2134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x2f2138: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x2f2138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x2f213c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2f213cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x2f2140: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2f2140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2f2144: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2f2144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2f2148: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2f2148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2f214c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f214cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2150: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2f2150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2f2154: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2f2154u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2158: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2f2158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2f215c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2f215cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f2160:
    // 0x2f2160: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x2f2160u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f2164: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x2f2164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x2f2168: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F2168u;
    {
        const bool branch_taken_0x2f2168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2168u;
        // 0x2f216c: 0x92c40000  lbu         $a0, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2168) {
            ctx->pc = 0x2F21B0u;
            goto label_2f21b0;
        }
    }
    ctx->pc = 0x2F2170u;
    // 0x2f2170: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f2170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f2174: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f2174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f2178: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f2178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f217c: 0x8c6392a0  lw          $v1, -0x6D60($v1)
    ctx->pc = 0x2f217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939296)));
    // 0x2f2180: 0x600008  jr          $v1
    ctx->pc = 0x2F2180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2188u: goto label_2f2188;
            case 0x2F2190u: goto label_2f2190;
            case 0x2F21A8u: goto label_2f21a8;
            case 0x2F21B0u: goto label_2f21b0;
            case 0x2F250Cu: goto label_2f250c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2180u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F2188u;
label_2f2188:
    // 0x2f2188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f218c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2f218cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_2f2190:
    // 0x2f2190: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f2190u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2f2194: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x2f2194u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f2198: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2198u;
    {
        const bool branch_taken_0x2f2198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2198u;
        // 0x2f219c: 0x92c40000  lbu         $a0, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2198) {
            ctx->pc = 0x2F21B0u;
            goto label_2f21b0;
        }
    }
    ctx->pc = 0x2F21A0u;
    // 0x2f21a0: 0x1000038b  b           . + 4 + (0x38B << 2)
    ctx->pc = 0x2F21A0u;
    {
        const bool branch_taken_0x2f21a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21A0u;
        // 0x2f21a4: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f21a0) {
            ctx->pc = 0x2F2FD0u;
            goto label_2f2fd0;
        }
    }
    ctx->pc = 0x2F21A8u;
label_2f21a8:
    // 0x2f21a8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2F21A8u;
    {
        const bool branch_taken_0x2f21a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21A8u;
        // 0x2f21ac: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f21a8) {
            ctx->pc = 0x2F2160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2160;
        }
    }
    ctx->pc = 0x2F21B0u;
label_2f21b0:
    // 0x2f21b0: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2f21b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2f21b4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2f21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f21b8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f21b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f21bc: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F21BCu;
    {
        const bool branch_taken_0x2f21bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F21C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21BCu;
        // 0x2f21c0: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f21bc) {
            ctx->pc = 0x2F21ECu;
            goto label_2f21ec;
        }
    }
    ctx->pc = 0x2F21C4u;
    // 0x2f21c4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2f21c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f21c8:
    // 0x2f21c8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f21c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2f21cc: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x2f21ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f21d0: 0x0  nop
    ctx->pc = 0x2f21d0u;
    // NOP
    // 0x2f21d4: 0x0  nop
    ctx->pc = 0x2f21d4u;
    // NOP
    // 0x2f21d8: 0x0  nop
    ctx->pc = 0x2f21d8u;
    // NOP
    // 0x2f21dc: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F21DCu;
    {
        const bool branch_taken_0x2f21dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F21E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21DCu;
        // 0x2f21e0: 0x92c40000  lbu         $a0, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f21dc) {
            ctx->pc = 0x2F21C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f21c8;
        }
    }
    ctx->pc = 0x2F21E4u;
    // 0x2f21e4: 0x1040037a  beqz        $v0, . + 4 + (0x37A << 2)
    ctx->pc = 0x2F21E4u;
    {
        const bool branch_taken_0x2f21e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21E4u;
        // 0x2f21e8: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f21e4) {
            ctx->pc = 0x2F2FD0u;
            goto label_2f2fd0;
        }
    }
    ctx->pc = 0x2F21ECu;
label_2f21ec:
    // 0x2f21ec: 0xafb60018  sw          $s6, 0x18($sp)
    ctx->pc = 0x2f21ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
    // 0x2f21f0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2f21f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f21f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f21f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21f8: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x2f21f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2f21fc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2f21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2f2200: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f2200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2204: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F2204u;
    {
        const bool branch_taken_0x2f2204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2204u;
        // 0x2f2208: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2204) {
            ctx->pc = 0x2F2264u;
            goto label_2f2264;
        }
    }
    ctx->pc = 0x2F220Cu;
    // 0x2f220c: 0x0  nop
    ctx->pc = 0x2f220cu;
    // NOP
label_2f2210:
    // 0x2f2210: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2210u;
    {
        const bool branch_taken_0x2f2210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2210u;
        // 0x2f2214: 0x2a420010  slti        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2210) {
            ctx->pc = 0x2F2238u;
            goto label_2f2238;
        }
    }
    ctx->pc = 0x2F2218u;
    // 0x2f2218: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2f2218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f221c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f221cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f2220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f2220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f2224: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f2224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f2228: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f2228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f222c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2f222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2f2230: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2230u;
    {
        const bool branch_taken_0x2f2230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2230u;
        // 0x2f2234: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2230) {
            ctx->pc = 0x2F2254u;
            goto label_2f2254;
        }
    }
    ctx->pc = 0x2F2238u;
label_2f2238:
    // 0x2f2238: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2238u;
    {
        const bool branch_taken_0x2f2238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2238) {
            ctx->pc = 0x2F223Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2238u;
            // 0x2f223c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2258u;
            goto label_2f2258;
        }
    }
    ctx->pc = 0x2F2240u;
    // 0x2f2240: 0x1110b8  dsll        $v0, $s1, 2
    ctx->pc = 0x2f2240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 2);
    // 0x2f2244: 0x51102d  daddu       $v0, $v0, $s1
    ctx->pc = 0x2f2244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
    // 0x2f2248: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2f2248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2f224c: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x2f224cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2f2250: 0x6451ffd0  daddiu      $s1, $v0, -0x30
    ctx->pc = 0x2f2250u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_2f2254:
    // 0x2f2254: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f2254u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2f2258:
    // 0x2f2258: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f2258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f225c: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x2f225cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f2260: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x2f2260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
label_2f2264:
    // 0x2f2264: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2264u;
    {
        const bool branch_taken_0x2f2264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2264u;
        // 0x2f2268: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2264) {
            ctx->pc = 0x2F227Cu;
            goto label_2f227c;
        }
    }
    ctx->pc = 0x2F226Cu;
    // 0x2f226c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x2f226cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2f2270: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2F2270u;
    {
        const bool branch_taken_0x2f2270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2270u;
        // 0x2f2274: 0x2a420009  slti        $v0, $s2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2270) {
            ctx->pc = 0x2F2210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2210;
        }
    }
    ctx->pc = 0x2F2278u;
    // 0x2f2278: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2f2278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_2f227c:
    // 0x2f227c: 0x14820051  bne         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2F227Cu;
    {
        const bool branch_taken_0x2f227c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F227Cu;
        // 0x2f2280: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f227c) {
            ctx->pc = 0x2F23C4u;
            goto label_2f23c4;
        }
    }
    ctx->pc = 0x2F2284u;
    // 0x2f2284: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f2284u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2f2288: 0x16400015  bnez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F2288u;
    {
        const bool branch_taken_0x2f2288 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2288u;
        // 0x2f228c: 0x82c40000  lb          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2288) {
            ctx->pc = 0x2F22E0u;
            goto label_2f22e0;
        }
    }
    ctx->pc = 0x2F2290u;
    // 0x2f2290: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2f2290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f2294: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F2294u;
    {
        const bool branch_taken_0x2f2294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2294) {
            ctx->pc = 0x2F2298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2294u;
            // 0x2f2298: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F22C0u;
            goto label_2f22c0;
        }
    }
    ctx->pc = 0x2F229Cu;
    // 0x2f229c: 0x0  nop
    ctx->pc = 0x2f229cu;
    // NOP
label_2f22a0:
    // 0x2f22a0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f22a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2f22a4: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x2f22a4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f22a8: 0x0  nop
    ctx->pc = 0x2f22a8u;
    // NOP
    // 0x2f22ac: 0x0  nop
    ctx->pc = 0x2f22acu;
    // NOP
    // 0x2f22b0: 0x0  nop
    ctx->pc = 0x2f22b0u;
    // NOP
    // 0x2f22b4: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F22B4u;
    {
        const bool branch_taken_0x2f22b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22B4u;
        // 0x2f22b8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22b4) {
            ctx->pc = 0x2F22A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f22a0;
        }
    }
    ctx->pc = 0x2F22BCu;
    // 0x2f22bc: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x2f22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_2f22c0:
    // 0x2f22c0: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2f22c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f22c4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2F22C4u;
    {
        const bool branch_taken_0x2f22c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22C4u;
        // 0x2f22c8: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22c4) {
            ctx->pc = 0x2F23C8u;
            goto label_2f23c8;
        }
    }
    ctx->pc = 0x2F22CCu;
    // 0x2f22cc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f22ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f22d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22d4: 0x2486ffd0  addiu       $a2, $a0, -0x30
    ctx->pc = 0x2f22d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2f22d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F22D8u;
    {
        const bool branch_taken_0x2f22d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22D8u;
        // 0x2f22dc: 0xafb60018  sw          $s6, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22d8) {
            ctx->pc = 0x2F22F0u;
            goto label_2f22f0;
        }
    }
    ctx->pc = 0x2F22E0u;
label_2f22e0:
    // 0x2f22e0: 0x2486ffd0  addiu       $a2, $a0, -0x30
    ctx->pc = 0x2f22e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2f22e4: 0x2cc2000a  sltiu       $v0, $a2, 0xA
    ctx->pc = 0x2f22e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f22e8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2F22E8u;
    {
        const bool branch_taken_0x2f22e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22E8u;
        // 0x2f22ec: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22e8) {
            ctx->pc = 0x2F23C8u;
            goto label_2f23c8;
        }
    }
    ctx->pc = 0x2F22F0u;
label_2f22f0:
    // 0x2f22f0: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F22F0u;
    {
        const bool branch_taken_0x2f22f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22F0u;
        // 0x2f22f4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22f0) {
            ctx->pc = 0x2F23A8u;
            goto label_2f23a8;
        }
    }
    ctx->pc = 0x2F22F8u;
    // 0x2f22f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f22f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f22fc: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2f22fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2f2300: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F2300u;
    {
        const bool branch_taken_0x2f2300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2300u;
        // 0x2f2304: 0x1074021  addu        $t0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2300) {
            ctx->pc = 0x2F235Cu;
            goto label_2f235c;
        }
    }
    ctx->pc = 0x2F2308u;
    // 0x2f2308: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x2f2308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2f230c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2f230cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f2310:
    // 0x2f2310: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2f2310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f2314: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2314u;
    {
        const bool branch_taken_0x2f2314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2314u;
        // 0x2f2318: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2314) {
            ctx->pc = 0x2F2338u;
            goto label_2f2338;
        }
    }
    ctx->pc = 0x2F231Cu;
    // 0x2f231c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2f231cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2320: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f2320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f2324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f2324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f2328: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f2328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f232c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F232Cu;
    {
        const bool branch_taken_0x2f232c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F232Cu;
        // 0x2f2330: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f232c) {
            ctx->pc = 0x2F2350u;
            goto label_2f2350;
        }
    }
    ctx->pc = 0x2F2334u;
    // 0x2f2334: 0x0  nop
    ctx->pc = 0x2f2334u;
    // NOP
label_2f2338:
    // 0x2f2338: 0x2a420011  slti        $v0, $s2, 0x11
    ctx->pc = 0x2f2338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f233c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F233Cu;
    {
        const bool branch_taken_0x2f233c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f233c) {
            ctx->pc = 0x2F2340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F233Cu;
            // 0x2f2340: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2354u;
            goto label_2f2354;
        }
    }
    ctx->pc = 0x2F2344u;
    // 0x2f2344: 0x1110b8  dsll        $v0, $s1, 2
    ctx->pc = 0x2f2344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 2);
    // 0x2f2348: 0x51102d  daddu       $v0, $v0, $s1
    ctx->pc = 0x2f2348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
    // 0x2f234c: 0x28878  dsll        $s1, $v0, 1
    ctx->pc = 0x2f234cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << 1);
label_2f2350:
    // 0x2f2350: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2f2350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2f2354:
    // 0x2f2354: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2F2354u;
    {
        const bool branch_taken_0x2f2354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2354u;
        // 0x2f2358: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2354) {
            ctx->pc = 0x2F2310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2310;
        }
    }
    ctx->pc = 0x2F235Cu;
label_2f235c:
    // 0x2f235c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2f235cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2360: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2f2360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f2364: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2364u;
    {
        const bool branch_taken_0x2f2364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2364u;
        // 0x2f2368: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2364) {
            ctx->pc = 0x2F2388u;
            goto label_2f2388;
        }
    }
    ctx->pc = 0x2F236Cu;
    // 0x2f236c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2f236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2370: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2f2370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f2374: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f2374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f2378: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f2378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f237c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2f237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2f2380: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2380u;
    {
        const bool branch_taken_0x2f2380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2380u;
        // 0x2f2384: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2380) {
            ctx->pc = 0x2F23A4u;
            goto label_2f23a4;
        }
    }
    ctx->pc = 0x2F2388u;
label_2f2388:
    // 0x2f2388: 0x2a420011  slti        $v0, $s2, 0x11
    ctx->pc = 0x2f2388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f238c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F238Cu;
    {
        const bool branch_taken_0x2f238c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F238Cu;
        // 0x2f2390: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f238c) {
            ctx->pc = 0x2F23A8u;
            goto label_2f23a8;
        }
    }
    ctx->pc = 0x2F2394u;
    // 0x2f2394: 0x1110b8  dsll        $v0, $s1, 2
    ctx->pc = 0x2f2394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 2);
    // 0x2f2398: 0x51102d  daddu       $v0, $v0, $s1
    ctx->pc = 0x2f2398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
    // 0x2f239c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2f239cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2f23a0: 0xc2882d  daddu       $s1, $a2, $v0
    ctx->pc = 0x2f23a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_2f23a4:
    // 0x2f23a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f23a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f23a8:
    // 0x2f23a8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f23a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2f23ac: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x2f23acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f23b0: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x2f23b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2f23b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f23b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f23b8: 0x2cc3000a  sltiu       $v1, $a2, 0xA
    ctx->pc = 0x2f23b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f23bc: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2F23BCu;
    {
        const bool branch_taken_0x2f23bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f23bc) {
            ctx->pc = 0x2F22F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f22f0;
        }
    }
    ctx->pc = 0x2F23C4u;
label_2f23c4:
    // 0x2f23c4: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2f23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2f23c8:
    // 0x2f23c8: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F23C8u;
    {
        const bool branch_taken_0x2f23c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23C8u;
        // 0x2f23cc: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f23c8) {
            ctx->pc = 0x2F23DCu;
            goto label_2f23dc;
        }
    }
    ctx->pc = 0x2F23D0u;
    // 0x2f23d0: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x2f23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2f23d4: 0x14820047  bne         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2F23D4u;
    {
        const bool branch_taken_0x2f23d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f23d4) {
            ctx->pc = 0x2F24F4u;
            goto label_2f24f4;
        }
    }
    ctx->pc = 0x2F23DCu;
label_2f23dc:
    // 0x2f23dc: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F23DCu;
    {
        const bool branch_taken_0x2f23dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f23dc) {
            ctx->pc = 0x2F23E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F23DCu;
            // 0x2f23e0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F23F8u;
            goto label_2f23f8;
        }
    }
    ctx->pc = 0x2F23E4u;
    // 0x2f23e4: 0x54e00004  bnel        $a3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F23E4u;
    {
        const bool branch_taken_0x2f23e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f23e4) {
            ctx->pc = 0x2F23E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F23E4u;
            // 0x2f23e8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F23F8u;
            goto label_2f23f8;
        }
    }
    ctx->pc = 0x2F23ECu;
    // 0x2f23ec: 0x514002f8  beql        $t2, $zero, . + 4 + (0x2F8 << 2)
    ctx->pc = 0x2F23ECu;
    {
        const bool branch_taken_0x2f23ec = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f23ec) {
            ctx->pc = 0x2F23F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F23ECu;
            // 0x2f23f0: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2FD0u;
            goto label_2f2fd0;
        }
    }
    ctx->pc = 0x2F23F4u;
    // 0x2f23f4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2f23f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f23f8:
    // 0x2f23f8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f23f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2f23fc: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x2f23fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f2400: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x2f2400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2f2404: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2404u;
    {
        const bool branch_taken_0x2f2404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2404u;
        // 0x2f2408: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2404) {
            ctx->pc = 0x2F241Cu;
            goto label_2f241c;
        }
    }
    ctx->pc = 0x2F240Cu;
    // 0x2f240c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2f240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2f2410: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2410u;
    {
        const bool branch_taken_0x2f2410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2410u;
        // 0x2f2414: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2410) {
            ctx->pc = 0x2F2428u;
            goto label_2f2428;
        }
    }
    ctx->pc = 0x2F2418u;
    // 0x2f2418: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2f2418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f241c:
    // 0x2f241c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f241cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2f2420: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x2f2420u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f2424: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x2f2424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_2f2428:
    // 0x2f2428: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2f2428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f242c: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x2F242Cu;
    {
        const bool branch_taken_0x2f242c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f242c) {
            ctx->pc = 0x2F2430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F242Cu;
            // 0x2f2430: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F24F4u;
            goto label_2f24f4;
        }
    }
    ctx->pc = 0x2F2434u;
    // 0x2f2434: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2f2434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f2438: 0x5482000b  bnel        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F2438u;
    {
        const bool branch_taken_0x2f2438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2438) {
            ctx->pc = 0x2F243Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2438u;
            // 0x2f243c: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2468u;
            goto label_2f2468;
        }
    }
    ctx->pc = 0x2F2440u;
    // 0x2f2440: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f2440u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2f2444: 0x0  nop
    ctx->pc = 0x2f2444u;
    // NOP
label_2f2448:
    // 0x2f2448: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x2f2448u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f244c: 0x0  nop
    ctx->pc = 0x2f244cu;
    // NOP
    // 0x2f2450: 0x0  nop
    ctx->pc = 0x2f2450u;
    // NOP
    // 0x2f2454: 0x0  nop
    ctx->pc = 0x2f2454u;
    // NOP
    // 0x2f2458: 0x0  nop
    ctx->pc = 0x2f2458u;
    // NOP
    // 0x2f245c: 0x5082fffa  beql        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F245Cu;
    {
        const bool branch_taken_0x2f245c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f245c) {
            ctx->pc = 0x2F2460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F245Cu;
            // 0x2f2460: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2448;
        }
    }
    ctx->pc = 0x2F2464u;
    // 0x2f2464: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x2f2464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_2f2468:
    // 0x2f2468: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2f2468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f246c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F246Cu;
    {
        const bool branch_taken_0x2f246c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f246c) {
            ctx->pc = 0x2F2470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F246Cu;
            // 0x2f2470: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F24F4u;
            goto label_2f24f4;
        }
    }
    ctx->pc = 0x2F2474u;
    // 0x2f2474: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x2f2474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2f2478: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2f2478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f247c: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2f247cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x2f2480: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f2480u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2f2484: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x2f2484u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f2488: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x2f2488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2f248c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F248Cu;
    {
        const bool branch_taken_0x2f248c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f248c) {
            ctx->pc = 0x2F2490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F248Cu;
            // 0x2f2490: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F24D0u;
            goto label_2f24d0;
        }
    }
    ctx->pc = 0x2F2494u;
label_2f2494:
    // 0x2f2494: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x2f2494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2f2498: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2F2498u;
    {
        const bool branch_taken_0x2f2498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2498) {
            ctx->pc = 0x2F249Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2498u;
            // 0x2f249c: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F24D0u;
            goto label_2f24d0;
        }
    }
    ctx->pc = 0x2F24A0u;
    // 0x2f24a0: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x2f24a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f24a4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f24a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2f24a8: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x2f24a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x2f24ac: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2f24acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2f24b0: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2f24b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2f24b4: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x2f24b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2f24b8: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x2f24b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f24bc: 0x6442ffd0  daddiu      $v0, $v0, -0x30
    ctx->pc = 0x2f24bcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
    // 0x2f24c0: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x2f24c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2f24c4: 0x1060fff3  beqz        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F24C4u;
    {
        const bool branch_taken_0x2f24c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F24C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24C4u;
        // 0x2f24c8: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24c4) {
            ctx->pc = 0x2F2494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2494;
        }
    }
    ctx->pc = 0x2F24CCu;
    // 0x2f24cc: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2f24ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f24d0:
    // 0x2f24d0: 0x2c61023  subu        $v0, $s6, $a2
    ctx->pc = 0x2f24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x2f24d4: 0x3c030098  lui         $v1, 0x98
    ctx->pc = 0x2f24d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)152 << 16));
    // 0x2f24d8: 0x3463967f  ori         $v1, $v1, 0x967F
    ctx->pc = 0x2f24d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38527);
    // 0x2f24dc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2f24dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f24e0: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2f24e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2f24e4: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F24E4u;
    {
        const bool branch_taken_0x2f24e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F24E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24E4u;
        // 0x2f24e8: 0xffa40010  sd          $a0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24e4) {
            ctx->pc = 0x2F24F4u;
            goto label_2f24f4;
        }
    }
    ctx->pc = 0x2F24ECu;
    // 0x2f24ec: 0x4202f  dsubu       $a0, $zero, $a0
    ctx->pc = 0x2f24ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x2f24f0: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2f24f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_2f24f4:
    // 0x2f24f4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F24F4u;
    {
        const bool branch_taken_0x2f24f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F24F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24F4u;
        // 0x2f24f8: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24f4) {
            ctx->pc = 0x2F2518u;
            goto label_2f2518;
        }
    }
    ctx->pc = 0x2F24FCu;
    // 0x2f24fc: 0x14e002b5  bnez        $a3, . + 4 + (0x2B5 << 2)
    ctx->pc = 0x2F24FCu;
    {
        const bool branch_taken_0x2f24fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24FCu;
        // 0x2f2500: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24fc) {
            ctx->pc = 0x2F2FD4u;
            goto label_2f2fd4;
        }
    }
    ctx->pc = 0x2F2504u;
    // 0x2f2504: 0x154002b3  bnez        $t2, . + 4 + (0x2B3 << 2)
    ctx->pc = 0x2F2504u;
    {
        const bool branch_taken_0x2f2504 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2504) {
            ctx->pc = 0x2F2FD4u;
            goto label_2f2fd4;
        }
    }
    ctx->pc = 0x2F250Cu;
label_2f250c:
    // 0x2f250c: 0x100002b0  b           . + 4 + (0x2B0 << 2)
    ctx->pc = 0x2F250Cu;
    {
        const bool branch_taken_0x2f250c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F250Cu;
        // 0x2f2510: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f250c) {
            ctx->pc = 0x2F2FD0u;
            goto label_2f2fd0;
        }
    }
    ctx->pc = 0x2F2514u;
    // 0x2f2514: 0x0  nop
    ctx->pc = 0x2f2514u;
    // NOP
label_2f2518:
    // 0x2f2518: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x2f2518u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f251c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2f251cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2520: 0x257b80a  movz        $s7, $s2, $s7
    ctx->pc = 0x2f2520u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 18));
    // 0x2f2524: 0x48102f  dsubu       $v0, $v0, $t0
    ctx->pc = 0x2f2524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 8));
    // 0x2f2528: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2f2528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2f252c: 0x2a420011  slti        $v0, $s2, 0x11
    ctx->pc = 0x2f252cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f2530: 0x242a00b  movn        $s4, $s2, $v0
    ctx->pc = 0x2f2530u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 18));
    // 0x2f2534: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x2f2534u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2538: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f2538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f253c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f253cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f2540: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x2F2540u;
    SET_GPR_U32(ctx, 31, 0x2F2548u);
    ctx->pc = 0x2F2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2540u;
    // 0x2f2544: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x2F2540u, 0x2F2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2548u;
label_2f2548:
    // 0x2f2548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f254c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2f254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2550: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2550u;
    {
        const bool branch_taken_0x2f2550 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2550u;
        // 0x2f2554: 0x8fb00048  lw          $s0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2550) {
            ctx->pc = 0x2F256Cu;
            goto label_2f256c;
        }
    }
    ctx->pc = 0x2F2558u;
    // 0x2f2558: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x2f2558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x2f255c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2f255cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2f2560: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2F2560u;
    SET_GPR_U32(ctx, 31, 0x2F2568u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2F2560u, 0x2F2568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2568u;
label_2f2568:
    // 0x2f2568: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f256c:
    // 0x2f256c: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x2f256cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f2570: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f2570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2574: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F2574u;
    {
        const bool branch_taken_0x2f2574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2574u;
        // 0x2f2578: 0x2541023  subu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2574) {
            ctx->pc = 0x2F25ECu;
            goto label_2f25ec;
        }
    }
    ctx->pc = 0x2F257Cu;
    // 0x2f257c: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x2f257cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2f2580: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f2580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2584: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f2584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f2588: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f2588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f258c: 0xdc849100  ld          $a0, -0x6F00($a0)
    ctx->pc = 0x2f258cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294938880)));
    // 0x2f2590: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F2590u;
    SET_GPR_U32(ctx, 31, 0x2F2598u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F2590u, 0x2F2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2598u;
label_2f2598:
    // 0x2f2598: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f2598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f259c: 0x6220006  bltzl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F259Cu;
    {
        const bool branch_taken_0x2f259c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2f259c) {
            ctx->pc = 0x2F25A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F259Cu;
            // 0x2f25a0: 0x11107a  dsrl        $v0, $s1, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F25B8u;
            goto label_2f25b8;
        }
    }
    ctx->pc = 0x2F25A4u;
    // 0x2f25a4: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x2F25A4u;
    SET_GPR_U32(ctx, 31, 0x2F25ACu);
    ctx->pc = 0x2F25A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25A4u;
    // 0x2f25a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x2F25A4u, 0x2F25ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25ACu;
label_2f25ac:
    // 0x2f25ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F25ACu;
    {
        const bool branch_taken_0x2f25ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f25ac) {
            ctx->pc = 0x2F25D4u;
            goto label_2f25d4;
        }
    }
    ctx->pc = 0x2F25B4u;
    // 0x2f25b4: 0x0  nop
    ctx->pc = 0x2f25b4u;
    // NOP
label_2f25b8:
    // 0x2f25b8: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x2f25b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2f25bc: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x2F25BCu;
    SET_GPR_U32(ctx, 31, 0x2F25C4u);
    ctx->pc = 0x2F25C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25BCu;
    // 0x2f25c0: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x2F25BCu, 0x2F25C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25C4u;
label_2f25c4:
    // 0x2f25c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f25c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f25c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f25c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f25cc: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2F25CCu;
    SET_GPR_U32(ctx, 31, 0x2F25D4u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2F25CCu, 0x2F25D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25D4u;
label_2f25d4:
    // 0x2f25d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f25d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f25d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f25d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f25dc: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2F25DCu;
    SET_GPR_U32(ctx, 31, 0x2F25E4u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2F25DCu, 0x2F25E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25E4u;
label_2f25e4:
    // 0x2f25e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f25e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f25e8: 0x2541023  subu        $v0, $s2, $s4
    ctx->pc = 0x2f25e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_2f25ec:
    // 0x2f25ec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2f25ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f25f0: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2F25F0u;
    {
        const bool branch_taken_0x2f25f0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2F25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25F0u;
        // 0x2f25f4: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25f0) {
            ctx->pc = 0x2F2748u;
            goto label_2f2748;
        }
    }
    ctx->pc = 0x2F25F8u;
    // 0x2f25f8: 0x3204000f  andi        $a0, $s0, 0xF
    ctx->pc = 0x2f25f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2f25fc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F25FCu;
    {
        const bool branch_taken_0x2f25fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25FCu;
        // 0x2f2600: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25fc) {
            ctx->pc = 0x2F2620u;
            goto label_2f2620;
        }
    }
    ctx->pc = 0x2F2604u;
    // 0x2f2604: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2608: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f2608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f260c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f260cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f2610: 0xdc849148  ld          $a0, -0x6EB8($a0)
    ctx->pc = 0x2f2610u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294938952)));
    // 0x2f2614: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F2614u;
    SET_GPR_U32(ctx, 31, 0x2F261Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F2614u, 0x2F261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F261Cu;
label_2f261c:
    // 0x2f261c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f261cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2620:
    // 0x2f2620: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2f2620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2f2624: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2f2624u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2f2628: 0x120000a1  beqz        $s0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2F2628u;
    {
        const bool branch_taken_0x2f2628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2628u;
        // 0x2f262c: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2628) {
            ctx->pc = 0x2F28B0u;
            goto label_2f28b0;
        }
    }
    ctx->pc = 0x2F2630u;
    // 0x2f2630: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2F2630u;
    {
        const bool branch_taken_0x2f2630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2630) {
            ctx->pc = 0x2F2634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2630u;
            // 0x2f2634: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2660u;
            goto label_2f2660;
        }
    }
    ctx->pc = 0x2F2638u;
    // 0x2f2638: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2f2638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2f263c:
    // 0x2f263c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f263cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f2640: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2f2640u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2f2644: 0xdc739260  ld          $s3, -0x6DA0($v1)
    ctx->pc = 0x2f2644u;
    SET_GPR_U64(ctx, 19, FAST_READ64(0x5F9260u));
    // 0x2f2648: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2f2648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f264c: 0x10600261  beqz        $v1, . + 4 + (0x261 << 2)
    ctx->pc = 0x2F264Cu;
    {
        const bool branch_taken_0x2f264c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F264Cu;
        // 0x2f2650: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f264c) {
            ctx->pc = 0x2F2FD4u;
            goto label_2f2fd4;
        }
    }
    ctx->pc = 0x2F2654u;
    // 0x2f2654: 0x10000250  b           . + 4 + (0x250 << 2)
    ctx->pc = 0x2F2654u;
    {
        const bool branch_taken_0x2f2654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2654u;
        // 0x2f2658: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2654) {
            ctx->pc = 0x2F2F98u;
            goto label_2f2f98;
        }
    }
    ctx->pc = 0x2F265Cu;
    // 0x2f265c: 0x0  nop
    ctx->pc = 0x2f265cu;
    // NOP
label_2f2660:
    // 0x2f2660: 0x12000093  beqz        $s0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2F2660u;
    {
        const bool branch_taken_0x2f2660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2660u;
        // 0x2f2664: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2660) {
            ctx->pc = 0x2F28B0u;
            goto label_2f28b0;
        }
    }
    ctx->pc = 0x2F2668u;
    // 0x2f2668: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F2668u;
    {
        const bool branch_taken_0x2f2668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2668u;
        // 0x2f266c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2668) {
            ctx->pc = 0x2F26B0u;
            goto label_2f26b0;
        }
    }
    ctx->pc = 0x2F2670u;
    // 0x2f2670: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2f2670u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2f2674: 0x26b19210  addiu       $s1, $s5, -0x6DF0
    ctx->pc = 0x2f2674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939152));
label_2f2678:
    // 0x2f2678: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2f2678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2f267c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F267Cu;
    {
        const bool branch_taken_0x2f267c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F267Cu;
        // 0x2f2680: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f267c) {
            ctx->pc = 0x2F2698u;
            goto label_2f2698;
        }
    }
    ctx->pc = 0x2F2684u;
    // 0x2f2684: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x2f2684u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f2688: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f268c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F268Cu;
    SET_GPR_U32(ctx, 31, 0x2F2694u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F268Cu, 0x2F2694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2694u;
label_2f2694:
    // 0x2f2694: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f2694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2698:
    // 0x2f2698: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2f2698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2f269c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2f269cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f26a0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F26A0u;
    {
        const bool branch_taken_0x2f26a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F26A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26A0u;
        // 0x2f26a4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26a0) {
            ctx->pc = 0x2F2678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2678;
        }
    }
    ctx->pc = 0x2F26A8u;
    // 0x2f26a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F26A8u;
    {
        const bool branch_taken_0x2f26a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26A8u;
        // 0x2f26ac: 0x26a49210  addiu       $a0, $s5, -0x6DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26a8) {
            ctx->pc = 0x2F26B8u;
            goto label_2f26b8;
        }
    }
    ctx->pc = 0x2F26B0u;
label_2f26b0:
    // 0x2f26b0: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2f26b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2f26b4: 0x26a49210  addiu       $a0, $s5, -0x6DF0
    ctx->pc = 0x2f26b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939152));
label_2f26b8:
    // 0x2f26b8: 0x13283f  dsra32      $a1, $s3, 0
    ctx->pc = 0x2f26b8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x2f26bc: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x2f26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x2f26c0: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x2f26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2f26c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f26c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f26c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2f26c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f26cc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2f26ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2f26d0: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2f26d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2f26d4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2f26d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f26d8: 0x2709824  and         $s3, $s3, $s0
    ctx->pc = 0x2f26d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x2f26dc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2f26dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2f26e0: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F26E0u;
    SET_GPR_U32(ctx, 31, 0x2F26E8u);
    ctx->pc = 0x2F26E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26E0u;
    // 0x2f26e4: 0x2652825  or          $a1, $s3, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F26E0u, 0x2F26E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26E8u;
label_2f26e8:
    // 0x2f26e8: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2f26e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2f26ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f26ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f26f0: 0x3c027ca0  lui         $v0, 0x7CA0
    ctx->pc = 0x2f26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31904 << 16));
    // 0x2f26f4: 0x13203f  dsra32      $a0, $s3, 0
    ctx->pc = 0x2f26f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x2f26f8: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x2f26f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2f26fc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2f26fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2f2700: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2F2700u;
    {
        const bool branch_taken_0x2f2700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2700u;
        // 0x2f2704: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2700) {
            ctx->pc = 0x2F263Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f263c;
        }
    }
    ctx->pc = 0x2F2708u;
    // 0x2f2708: 0x3c027c90  lui         $v0, 0x7C90
    ctx->pc = 0x2f2708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
    // 0x2f270c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2f270cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2f2710: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2710u;
    {
        const bool branch_taken_0x2f2710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2710u;
        // 0x2f2714: 0x2709824  and         $s3, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2710) {
            ctx->pc = 0x2F2730u;
            goto label_2f2730;
        }
    }
    ctx->pc = 0x2F2718u;
    // 0x2f2718: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x2f2718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x2f271c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f271cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f2720: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2724: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2f2724u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2f2728: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2F2728u;
    {
        const bool branch_taken_0x2f2728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2728u;
        // 0x2f272c: 0x2709825  or          $s3, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2728) {
            ctx->pc = 0x2F28B0u;
            goto label_2f28b0;
        }
    }
    ctx->pc = 0x2F2730u;
label_2f2730:
    // 0x2f2730: 0x3c020350  lui         $v0, 0x350
    ctx->pc = 0x2f2730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
    // 0x2f2734: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f2734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f2738: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f273c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2F273Cu;
    {
        const bool branch_taken_0x2f273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F273Cu;
        // 0x2f2740: 0x2629825  or          $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f273c) {
            ctx->pc = 0x2F28B0u;
            goto label_2f28b0;
        }
    }
    ctx->pc = 0x2F2744u;
    // 0x2f2744: 0x0  nop
    ctx->pc = 0x2f2744u;
    // NOP
label_2f2748:
    // 0x2f2748: 0x601005a  bgez        $s0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2F2748u;
    {
        const bool branch_taken_0x2f2748 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2F274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2748u;
        // 0x2f274c: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2748) {
            ctx->pc = 0x2F28B4u;
            goto label_2f28b4;
        }
    }
    ctx->pc = 0x2F2750u;
    // 0x2f2750: 0x108023  negu        $s0, $s0
    ctx->pc = 0x2f2750u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x2f2754: 0x3204000f  andi        $a0, $s0, 0xF
    ctx->pc = 0x2f2754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2f2758: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2758u;
    {
        const bool branch_taken_0x2f2758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2758u;
        // 0x2f275c: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2758) {
            ctx->pc = 0x2F277Cu;
            goto label_2f277c;
        }
    }
    ctx->pc = 0x2F2760u;
    // 0x2f2760: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2764: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2f2764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2f2768: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2f2768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f276c: 0xdca59148  ld          $a1, -0x6EB8($a1)
    ctx->pc = 0x2f276cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294938952)));
    // 0x2f2770: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x2F2770u;
    SET_GPR_U32(ctx, 31, 0x2F2778u);
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x2F2770u, 0x2F2778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2778u;
label_2f2778:
    // 0x2f2778: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f2778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f277c:
    // 0x2f277c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2f277cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2f2780: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2f2780u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2f2784: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2F2784u;
    {
        const bool branch_taken_0x2f2784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2784u;
        // 0x2f2788: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2784) {
            ctx->pc = 0x2F28B0u;
            goto label_2f28b0;
        }
    }
    ctx->pc = 0x2F278Cu;
    // 0x2f278c: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x2f278cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2f2790: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2F2790u;
    {
        const bool branch_taken_0x2f2790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2790u;
        // 0x2f2794: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2790) {
            ctx->pc = 0x2F286Cu;
            goto label_2f286c;
        }
    }
    ctx->pc = 0x2F2798u;
    // 0x2f2798: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2f2798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f279c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F279Cu;
    {
        const bool branch_taken_0x2f279c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F279Cu;
        // 0x2f27a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f279c) {
            ctx->pc = 0x2F27E8u;
            goto label_2f27e8;
        }
    }
    ctx->pc = 0x2F27A4u;
    // 0x2f27a4: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2f27a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2f27a8: 0x26b19238  addiu       $s1, $s5, -0x6DC8
    ctx->pc = 0x2f27a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939192));
    // 0x2f27ac: 0x0  nop
    ctx->pc = 0x2f27acu;
    // NOP
label_2f27b0:
    // 0x2f27b0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2f27b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2f27b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F27B4u;
    {
        const bool branch_taken_0x2f27b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27B4u;
        // 0x2f27b8: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f27b4) {
            ctx->pc = 0x2F27D0u;
            goto label_2f27d0;
        }
    }
    ctx->pc = 0x2F27BCu;
    // 0x2f27bc: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x2f27bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f27c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f27c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f27c4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F27C4u;
    SET_GPR_U32(ctx, 31, 0x2F27CCu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F27C4u, 0x2F27CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F27CCu;
label_2f27cc:
    // 0x2f27cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f27ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f27d0:
    // 0x2f27d0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2f27d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2f27d4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2f27d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f27d8: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F27D8u;
    {
        const bool branch_taken_0x2f27d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27D8u;
        // 0x2f27dc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f27d8) {
            ctx->pc = 0x2F27B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f27b0;
        }
    }
    ctx->pc = 0x2F27E0u;
    // 0x2f27e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F27E0u;
    {
        const bool branch_taken_0x2f27e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27E0u;
        // 0x2f27e4: 0x26a29238  addiu       $v0, $s5, -0x6DC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f27e0) {
            ctx->pc = 0x2F27F0u;
            goto label_2f27f0;
        }
    }
    ctx->pc = 0x2F27E8u;
label_2f27e8:
    // 0x2f27e8: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x2f27e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x2f27ec: 0x26a29238  addiu       $v0, $s5, -0x6DC8
    ctx->pc = 0x2f27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939192));
label_2f27f0:
    // 0x2f27f0: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x2f27f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2f27f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f27f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f27f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f27fc: 0xdc700000  ld          $s0, 0x0($v1)
    ctx->pc = 0x2f27fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2800: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f2800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2804: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x2f2804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f280c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F280Cu;
    SET_GPR_U32(ctx, 31, 0x2F2814u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F280Cu, 0x2F2814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2814u;
label_2f2814:
    // 0x2f2814: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f2814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f281c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f281cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2820: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F2820u;
    SET_GPR_U32(ctx, 31, 0x2F2828u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F2820u, 0x2F2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2828u;
label_2f2828:
    // 0x2f2828: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F2828u;
    {
        const bool branch_taken_0x2f2828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2828u;
        // 0x2f282c: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2828) {
            ctx->pc = 0x2F28B4u;
            goto label_2f28b4;
        }
    }
    ctx->pc = 0x2F2830u;
    // 0x2f2830: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f2830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2834: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f2834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2838: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2F2838u;
    SET_GPR_U32(ctx, 31, 0x2F2840u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2F2838u, 0x2F2840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2840u;
label_2f2840:
    // 0x2f2840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2844: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f2844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2848: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F2848u;
    SET_GPR_U32(ctx, 31, 0x2F2850u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F2848u, 0x2F2850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2850u;
label_2f2850:
    // 0x2f2850: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f2850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2858: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F2858u;
    SET_GPR_U32(ctx, 31, 0x2F2860u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F2858u, 0x2F2860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2860u;
label_2f2860:
    // 0x2f2860: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F2860u;
    {
        const bool branch_taken_0x2f2860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2860u;
        // 0x2f2864: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2860) {
            ctx->pc = 0x2F28B0u;
            goto label_2f28b0;
        }
    }
    ctx->pc = 0x2F2868u;
label_2f2868:
    // 0x2f2868: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2f2868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2f286c:
    // 0x2f286c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f286cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2870: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2f2870u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2f2874: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2f2874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f2878: 0x108001d6  beqz        $a0, . + 4 + (0x1D6 << 2)
    ctx->pc = 0x2F2878u;
    {
        const bool branch_taken_0x2f2878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2878u;
        // 0x2f287c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2878) {
            ctx->pc = 0x2F2FD4u;
            goto label_2f2fd4;
        }
    }
    ctx->pc = 0x2F2880u;
    // 0x2f2880: 0x100001c5  b           . + 4 + (0x1C5 << 2)
    ctx->pc = 0x2F2880u;
    {
        const bool branch_taken_0x2f2880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2880u;
        // 0x2f2884: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2880) {
            ctx->pc = 0x2F2F98u;
            goto label_2f2f98;
        }
    }
    ctx->pc = 0x2F2888u;
label_2f2888:
    // 0x2f2888: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f288c: 0xc0bbb04  jal         func_2EEC10
    ctx->pc = 0x2F288Cu;
    SET_GPR_U32(ctx, 31, 0x2F2894u);
    ctx->pc = 0x2EEC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEC10u, 0x2F288Cu, 0x2F2894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2894u;
label_2f2894:
    // 0x2f2894: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f289c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2F289Cu;
    SET_GPR_U32(ctx, 31, 0x2F28A4u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2F289Cu, 0x2F28A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28A4u;
label_2f28a4:
    // 0x2f28a4: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x2F28A4u;
    {
        const bool branch_taken_0x2f28a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28A4u;
        // 0x2f28a8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f28a4) {
            ctx->pc = 0x2F2F94u;
            goto label_2f2f94;
        }
    }
    ctx->pc = 0x2F28ACu;
    // 0x2f28ac: 0x0  nop
    ctx->pc = 0x2f28acu;
    // NOP
label_2f28b0:
    // 0x2f28b0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2f28b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f28b4:
    // 0x2f28b4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2f28b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28b8: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x2f28b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f28bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f28bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28c0: 0xc0bb8c2  jal         func_2EE308
    ctx->pc = 0x2F28C0u;
    SET_GPR_U32(ctx, 31, 0x2F28C8u);
    ctx->pc = 0x2F28C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28C0u;
    // 0x2f28c4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE308u, 0x2F28C0u, 0x2F28C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28C8u;
label_2f28c8:
    // 0x2f28c8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2f28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2f28cc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2f28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2f28d0: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x2F28D0u;
    {
        const bool branch_taken_0x2f28d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28D0u;
        // 0x2f28d4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f28d0) {
            ctx->pc = 0x2F2DBCu;
            goto label_2f2dbc;
        }
    }
    ctx->pc = 0x2F28D8u;
label_2f28d8:
    // 0x2f28d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f28d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28dc: 0xc0bba30  jal         func_2EE8C0
    ctx->pc = 0x2F28DCu;
    SET_GPR_U32(ctx, 31, 0x2F28E4u);
    ctx->pc = 0x2F28E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28DCu;
    // 0x2f28e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8C0u, 0x2F28DCu, 0x2F28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28E4u;
label_2f28e4:
    // 0x2f28e4: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2f28e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2f28e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f28e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28ec: 0xc0bba86  jal         func_2EEA18
    ctx->pc = 0x2F28ECu;
    SET_GPR_U32(ctx, 31, 0x2F28F4u);
    ctx->pc = 0x2F28F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28ECu;
    // 0x2f28f0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA18u, 0x2F28ECu, 0x2F28F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28F4u;
label_2f28f4:
    // 0x2f28f4: 0x184001a8  blez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x2F28F4u;
    {
        const bool branch_taken_0x2f28f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28F4u;
        // 0x2f28f8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f28f4) {
            ctx->pc = 0x2F2F98u;
            goto label_2f2f98;
        }
    }
    ctx->pc = 0x2F28FCu;
    // 0x2f28fc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2F28FCu;
    {
        const bool branch_taken_0x2f28fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f28fc) {
            ctx->pc = 0x2F2974u;
            goto label_2f2974;
        }
    }
    ctx->pc = 0x2F2904u;
    // 0x2f2904: 0x0  nop
    ctx->pc = 0x2f2904u;
    // NOP
label_2f2908:
    // 0x2f2908: 0x14800043  bnez        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2F2908u;
    {
        const bool branch_taken_0x2f2908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2908u;
        // 0x2f290c: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2908) {
            ctx->pc = 0x2F2A18u;
            goto label_2f2a18;
        }
    }
    ctx->pc = 0x2F2910u;
    // 0x2f2910: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F2910u;
    {
        const bool branch_taken_0x2f2910 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2910) {
            ctx->pc = 0x2F2960u;
            goto label_2f2960;
        }
    }
    ctx->pc = 0x2F2918u;
    // 0x2f2918: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f2918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f291c: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x2f291cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x2f2920: 0x2631024  and         $v0, $s3, $v1
    ctx->pc = 0x2f2920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x2f2924: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2F2924u;
    {
        const bool branch_taken_0x2f2924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2924u;
        // 0x2f2928: 0x3c037ff0  lui         $v1, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2924) {
            ctx->pc = 0x2F29B8u;
            goto label_2f29b8;
        }
    }
    ctx->pc = 0x2F292Cu;
    // 0x2f292c: 0x13103f  dsra32      $v0, $s3, 0
    ctx->pc = 0x2f292cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x2f2930: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f2930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f2934: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2f2934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2f2938: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f2938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f293c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x2f293cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x2f2940: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x2f2940u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x2f2944: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x2f2944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2f2948: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f2948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f294c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f294cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f2950: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2954: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2f2954u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2f2958: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x2F2958u;
    {
        const bool branch_taken_0x2f2958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2958u;
        // 0x2f295c: 0x2639824  and         $s3, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2958) {
            ctx->pc = 0x2F2F94u;
            goto label_2f2f94;
        }
    }
    ctx->pc = 0x2F2960u;
label_2f2960:
    // 0x2f2960: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f2960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2964: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2f2964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2f2968: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x2f2968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x2f296c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F296Cu;
    {
        const bool branch_taken_0x2f296c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f296c) {
            ctx->pc = 0x2F29B8u;
            goto label_2f29b8;
        }
    }
    ctx->pc = 0x2F2974u;
label_2f2974:
    // 0x2f2974: 0x13103f  dsra32      $v0, $s3, 0
    ctx->pc = 0x2f2974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x2f2978: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2f2978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2f297c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f297cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f2980: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f2980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2984: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x2f2984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x2f2988: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x2f2988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x2f298c: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x2f298cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x2f2990: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f2990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2f2994: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2f2994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2f2998: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f2998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f299c: 0x2659824  and         $s3, $s3, $a1
    ctx->pc = 0x2f299cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 5));
    // 0x2f29a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f29a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f29a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f29a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f29a8: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x2f29a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x2f29ac: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x2F29ACu;
    {
        const bool branch_taken_0x2f29ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29ACu;
        // 0x2f29b0: 0x2659825  or          $s3, $s3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29ac) {
            ctx->pc = 0x2F2F94u;
            goto label_2f2f94;
        }
    }
    ctx->pc = 0x2F29B4u;
    // 0x2f29b4: 0x0  nop
    ctx->pc = 0x2f29b4u;
    // NOP
label_2f29b8:
    // 0x2f29b8: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x2f29b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2f29bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f29bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f29c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f29c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f29c4: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x2F29C4u;
    {
        const bool branch_taken_0x2f29c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29C4u;
        // 0x2f29c8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29c4) {
            ctx->pc = 0x2F2F98u;
            goto label_2f2f98;
        }
    }
    ctx->pc = 0x2F29CCu;
    // 0x2f29cc: 0x16a0ffae  bnez        $s5, . + 4 + (-0x52 << 2)
    ctx->pc = 0x2F29CCu;
    {
        const bool branch_taken_0x2f29cc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f29cc) {
            ctx->pc = 0x2F2888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2888;
        }
    }
    ctx->pc = 0x2F29D4u;
    // 0x2f29d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f29d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f29d8: 0xc0bbb04  jal         func_2EEC10
    ctx->pc = 0x2F29D8u;
    SET_GPR_U32(ctx, 31, 0x2F29E0u);
    ctx->pc = 0x2EEC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEC10u, 0x2F29D8u, 0x2F29E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29E0u;
label_2f29e0:
    // 0x2f29e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f29e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f29e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f29e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f29e8: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2F29E8u;
    SET_GPR_U32(ctx, 31, 0x2F29F0u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2F29E8u, 0x2F29F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29F0u;
label_2f29f0:
    // 0x2f29f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f29f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f29f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f29f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f29f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f29f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f29fc: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F29FCu;
    SET_GPR_U32(ctx, 31, 0x2F2A04u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F29FCu, 0x2F2A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A04u;
label_2f2a04:
    // 0x2f2a04: 0x1040ff98  beqz        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x2F2A04u;
    {
        const bool branch_taken_0x2f2a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A04u;
        // 0x2f2a08: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a04) {
            ctx->pc = 0x2F2868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2868;
        }
    }
    ctx->pc = 0x2F2A0Cu;
    // 0x2f2a0c: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x2F2A0Cu;
    {
        const bool branch_taken_0x2f2a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2a0c) {
            ctx->pc = 0x2F2F98u;
            goto label_2f2f98;
        }
    }
    ctx->pc = 0x2F2A14u;
    // 0x2f2a14: 0x0  nop
    ctx->pc = 0x2f2a14u;
    // NOP
label_2f2a18:
    // 0x2f2a18: 0xc0bbc00  jal         func_2EF000
    ctx->pc = 0x2F2A18u;
    SET_GPR_U32(ctx, 31, 0x2F2A20u);
    ctx->pc = 0x2F2A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A18u;
    // 0x2f2a1c: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF000u, 0x2F2A18u, 0x2F2A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A20u;
label_2f2a20:
    // 0x2f2a20: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2f2a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2f2a24: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2f2a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2f2a28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2a30: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F2A30u;
    SET_GPR_U32(ctx, 31, 0x2F2A38u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F2A30u, 0x2F2A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A38u;
label_2f2a38:
    // 0x2f2a38: 0x1c40002f  bgtz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2F2A38u;
    {
        const bool branch_taken_0x2f2a38 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2f2a38) {
            ctx->pc = 0x2F2AF8u;
            goto label_2f2af8;
        }
    }
    ctx->pc = 0x2F2A40u;
    // 0x2f2a40: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2A40u;
    {
        const bool branch_taken_0x2f2a40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2a40) {
            ctx->pc = 0x2F2A60u;
            goto label_2f2a60;
        }
    }
    ctx->pc = 0x2F2A48u;
    // 0x2f2a48: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x2f2a48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2f2a4c: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x2f2a4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x2f2a50: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2f2a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2a54: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2F2A54u;
    {
        const bool branch_taken_0x2f2a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2a54) {
            ctx->pc = 0x2F2B48u;
            goto label_2f2b48;
        }
    }
    ctx->pc = 0x2F2A5Cu;
    // 0x2f2a5c: 0x0  nop
    ctx->pc = 0x2f2a5cu;
    // NOP
label_2f2a60:
    // 0x2f2a60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f2a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2a64: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2f2a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2f2a68: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x2f2a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x2f2a6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F2A6Cu;
    {
        const bool branch_taken_0x2f2a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A6Cu;
        // 0x2f2a70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a6c) {
            ctx->pc = 0x2F2A98u;
            goto label_2f2a98;
        }
    }
    ctx->pc = 0x2F2A74u;
    // 0x2f2a74: 0x1262ff7d  beq         $s3, $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x2F2A74u;
    {
        const bool branch_taken_0x2f2a74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A74u;
        // 0x2f2a78: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a74) {
            ctx->pc = 0x2F286Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f286c;
        }
    }
    ctx->pc = 0x2F2A7Cu;
    // 0x2f2a7c: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x2f2a7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2f2a80: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x2f2a80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x2f2a84: 0x3411bff0  ori         $s1, $zero, 0xBFF0
    ctx->pc = 0x2f2a84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x2f2a88: 0x118c3c  dsll32      $s1, $s1, 16
    ctx->pc = 0x2f2a88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2f2a8c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2F2A8Cu;
    {
        const bool branch_taken_0x2f2a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2a8c) {
            ctx->pc = 0x2F2B48u;
            goto label_2f2b48;
        }
    }
    ctx->pc = 0x2F2A94u;
    // 0x2f2a94: 0x0  nop
    ctx->pc = 0x2f2a94u;
    // NOP
label_2f2a98:
    // 0x2f2a98: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2f2a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2f2a9c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2f2a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2f2aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2aa4: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F2AA4u;
    SET_GPR_U32(ctx, 31, 0x2F2AACu);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F2AA4u, 0x2F2AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2AACu;
label_2f2aac:
    // 0x2f2aac: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2AACu;
    {
        const bool branch_taken_0x2f2aac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f2aac) {
            ctx->pc = 0x2F2AC8u;
            goto label_2f2ac8;
        }
    }
    ctx->pc = 0x2F2AB4u;
    // 0x2f2ab4: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x2f2ab4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2f2ab8: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x2f2ab8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x2f2abc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2ABCu;
    {
        const bool branch_taken_0x2f2abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2abc) {
            ctx->pc = 0x2F2AE0u;
            goto label_2f2ae0;
        }
    }
    ctx->pc = 0x2F2AC4u;
    // 0x2f2ac4: 0x0  nop
    ctx->pc = 0x2f2ac4u;
    // NOP
label_2f2ac8:
    // 0x2f2ac8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2f2ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2f2acc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2f2accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2f2ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ad4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F2AD4u;
    SET_GPR_U32(ctx, 31, 0x2F2ADCu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F2AD4u, 0x2F2ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2ADCu;
label_2f2adc:
    // 0x2f2adc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2ae0:
    // 0x2f2ae0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ae8: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2F2AE8u;
    SET_GPR_U32(ctx, 31, 0x2F2AF0u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2F2AE8u, 0x2F2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2AF0u;
label_2f2af0:
    // 0x2f2af0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2F2AF0u;
    {
        const bool branch_taken_0x2f2af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2af0) {
            ctx->pc = 0x2F2B44u;
            goto label_2f2b44;
        }
    }
    ctx->pc = 0x2F2AF8u;
label_2f2af8:
    // 0x2f2af8: 0x3412ff80  ori         $s2, $zero, 0xFF80
    ctx->pc = 0x2f2af8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2f2afc: 0x1293bc  dsll32      $s2, $s2, 14
    ctx->pc = 0x2f2afcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 14));
    // 0x2f2b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f2b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b08: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F2B08u;
    SET_GPR_U32(ctx, 31, 0x2F2B10u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F2B08u, 0x2F2B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B10u;
label_2f2b10:
    // 0x2f2b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f2b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b18: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2B18u;
    {
        const bool branch_taken_0x2f2b18 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b18) {
            ctx->pc = 0x2F2B34u;
            goto label_2f2b34;
        }
    }
    ctx->pc = 0x2F2B20u;
    // 0x2f2b20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b28: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2F2B28u;
    SET_GPR_U32(ctx, 31, 0x2F2B30u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2F2B28u, 0x2F2B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B30u;
label_2f2b30:
    // 0x2f2b30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f2b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b34:
    // 0x2f2b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f2b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b3c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2F2B3Cu;
    SET_GPR_U32(ctx, 31, 0x2F2B44u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2F2B3Cu, 0x2F2B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B44u;
label_2f2b44:
    // 0x2f2b44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f2b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b48:
    // 0x2f2b48: 0x13183f  dsra32      $v1, $s3, 0
    ctx->pc = 0x2f2b48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x2f2b4c: 0x3c177ff0  lui         $s7, 0x7FF0
    ctx->pc = 0x2f2b4cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32752 << 16));
    // 0x2f2b50: 0x772024  and         $a0, $v1, $s7
    ctx->pc = 0x2f2b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x2f2b54: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x2f2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x2f2b58: 0x14820031  bne         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2F2B58u;
    {
        const bool branch_taken_0x2f2b58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B58u;
        // 0x2f2b5c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b58) {
            ctx->pc = 0x2F2C20u;
            goto label_2f2c20;
        }
    }
    ctx->pc = 0x2F2B60u;
    // 0x2f2b60: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x2f2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x2f2b64: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x2f2b64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x2f2b68: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x2f2b68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x2f2b6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f2b70: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x2f2b70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2b78: 0x2729824  and         $s3, $s3, $s2
    ctx->pc = 0x2f2b78u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 18));
    // 0x2f2b7c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2f2b7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2f2b80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b84: 0xc0bbb04  jal         func_2EEC10
    ctx->pc = 0x2F2B84u;
    SET_GPR_U32(ctx, 31, 0x2F2B8Cu);
    ctx->pc = 0x2EEC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEC10u, 0x2F2B84u, 0x2F2B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B8Cu;
label_2f2b8c:
    // 0x2f2b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f2b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b94: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F2B94u;
    SET_GPR_U32(ctx, 31, 0x2F2B9Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F2B94u, 0x2F2B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B9Cu;
label_2f2b9c:
    // 0x2f2b9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ba4: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2F2BA4u;
    SET_GPR_U32(ctx, 31, 0x2F2BACu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2F2BA4u, 0x2F2BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BACu;
label_2f2bac:
    // 0x2f2bac: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x2f2bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x2f2bb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f2bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2bb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f2bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f2bb8: 0x13203f  dsra32      $a0, $s3, 0
    ctx->pc = 0x2f2bb8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x2f2bbc: 0x971024  and         $v0, $a0, $s7
    ctx->pc = 0x2f2bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 23));
    // 0x2f2bc0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2f2bc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f2bc4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F2BC4u;
    {
        const bool branch_taken_0x2f2bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BC4u;
        // 0x2f2bc8: 0x2729824  and         $s3, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2bc4) {
            ctx->pc = 0x2F2C08u;
            goto label_2f2c08;
        }
    }
    ctx->pc = 0x2F2BCCu;
    // 0x2f2bcc: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x2f2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x2f2bd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f2bd4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f2bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f2bd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f2bdc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f2bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f2be0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f2be4: 0x1282fe95  beq         $s4, $v0, . + 4 + (-0x16B << 2)
    ctx->pc = 0x2F2BE4u;
    {
        const bool branch_taken_0x2f2be4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BE4u;
        // 0x2f2be8: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2be4) {
            ctx->pc = 0x2F263Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f263c;
        }
    }
    ctx->pc = 0x2F2BECu;
    // 0x2f2bec: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x2f2becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x2f2bf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f2bf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2bf8: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2f2bf8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2f2bfc: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2F2BFCu;
    {
        const bool branch_taken_0x2f2bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BFCu;
        // 0x2f2c00: 0x2729825  or          $s3, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2bfc) {
            ctx->pc = 0x2F2D8Cu;
            goto label_2f2d8c;
        }
    }
    ctx->pc = 0x2F2C04u;
    // 0x2f2c04: 0x0  nop
    ctx->pc = 0x2f2c04u;
    // NOP
label_2f2c08:
    // 0x2f2c08: 0x3c020350  lui         $v0, 0x350
    ctx->pc = 0x2f2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
    // 0x2f2c0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f2c10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2c14: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2F2C14u;
    {
        const bool branch_taken_0x2f2c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C14u;
        // 0x2f2c18: 0x2629825  or          $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c14) {
            ctx->pc = 0x2F2CC8u;
            goto label_2f2cc8;
        }
    }
    ctx->pc = 0x2F2C1Cu;
    // 0x2f2c1c: 0x0  nop
    ctx->pc = 0x2f2c1cu;
    // NOP
label_2f2c20:
    // 0x2f2c20: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2f2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2c24: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x2f2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x2f2c28: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2f2c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f2c2c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F2C2Cu;
    {
        const bool branch_taken_0x2f2c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2c2c) {
            ctx->pc = 0x2F2C98u;
            goto label_2f2c98;
        }
    }
    ctx->pc = 0x2F2C34u;
    // 0x2f2c34: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2f2c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2f2c38: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2f2c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2f2c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c40: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F2C40u;
    SET_GPR_U32(ctx, 31, 0x2F2C48u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F2C40u, 0x2F2C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C48u;
label_2f2c48:
    // 0x2f2c48: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F2C48u;
    {
        const bool branch_taken_0x2f2c48 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f2c48) {
            ctx->pc = 0x2F2C98u;
            goto label_2f2c98;
        }
    }
    ctx->pc = 0x2F2C50u;
    // 0x2f2c50: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2f2c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2f2c54: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2f2c54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2f2c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c5c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2F2C5Cu;
    SET_GPR_U32(ctx, 31, 0x2F2C64u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2F2C5Cu, 0x2F2C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C64u;
label_2f2c64:
    // 0x2f2c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c68: 0xc0bef18  jal         func_2FBC60
    ctx->pc = 0x2F2C68u;
    SET_GPR_U32(ctx, 31, 0x2F2C70u);
    ctx->pc = 0x2FBC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBC60u, 0x2F2C68u, 0x2F2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C70u;
label_2f2c70:
    // 0x2f2c70: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x2F2C70u;
    SET_GPR_U32(ctx, 31, 0x2F2C78u);
    ctx->pc = 0x2F2C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C70u;
    // 0x2f2c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x2F2C70u, 0x2F2C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C78u;
label_2f2c78:
    // 0x2f2c78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f2c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c7c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2C7Cu;
    {
        const bool branch_taken_0x2f2c7c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2c7c) {
            ctx->pc = 0x2F2C98u;
            goto label_2f2c98;
        }
    }
    ctx->pc = 0x2F2C84u;
    // 0x2f2c84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f2c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c8c: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2F2C8Cu;
    SET_GPR_U32(ctx, 31, 0x2F2C94u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2F2C8Cu, 0x2F2C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C94u;
label_2f2c94:
    // 0x2f2c94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f2c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2c98:
    // 0x2f2c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c9c: 0xc0bbb04  jal         func_2EEC10
    ctx->pc = 0x2F2C9Cu;
    SET_GPR_U32(ctx, 31, 0x2F2CA4u);
    ctx->pc = 0x2EEC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEC10u, 0x2F2C9Cu, 0x2F2CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2CA4u;
label_2f2ca4:
    // 0x2f2ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ca8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f2ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2cac: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2F2CACu;
    SET_GPR_U32(ctx, 31, 0x2F2CB4u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2F2CACu, 0x2F2CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2CB4u;
label_2f2cb4:
    // 0x2f2cb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2cb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2cbc: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2F2CBCu;
    SET_GPR_U32(ctx, 31, 0x2F2CC4u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2F2CBCu, 0x2F2CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2CC4u;
label_2f2cc4:
    // 0x2f2cc4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f2cc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2cc8:
    // 0x2f2cc8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2f2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2ccc: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2f2cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2f2cd0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2f2cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2f2cd4: 0x13203f  dsra32      $a0, $s3, 0
    ctx->pc = 0x2f2cd4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x2f2cd8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f2cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f2cdc: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x2f2cdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2f2ce0: 0x1451002b  bne         $v0, $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2F2CE0u;
    {
        const bool branch_taken_0x2f2ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CE0u;
        // 0x2f2ce4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ce0) {
            ctx->pc = 0x2F2D90u;
            goto label_2f2d90;
        }
    }
    ctx->pc = 0x2F2CE8u;
    // 0x2f2ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2cec: 0xc0beb84  jal         func_2FAE10
    ctx->pc = 0x2F2CECu;
    SET_GPR_U32(ctx, 31, 0x2F2CF4u);
    ctx->pc = 0x2FAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAE10u, 0x2F2CECu, 0x2F2CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2CF4u;
label_2f2cf4:
    // 0x2f2cf4: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x2F2CF4u;
    SET_GPR_U32(ctx, 31, 0x2F2CFCu);
    ctx->pc = 0x2F2CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2CF4u;
    // 0x2f2cf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x2F2CF4u, 0x2F2CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2CFCu;
label_2f2cfc:
    // 0x2f2cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f2d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d04: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2F2D04u;
    SET_GPR_U32(ctx, 31, 0x2F2D0Cu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2F2D04u, 0x2F2D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D0Cu;
label_2f2d0c:
    // 0x2f2d0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d10: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2D10u;
    {
        const bool branch_taken_0x2f2d10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d10) {
            ctx->pc = 0x2F2D2Cu;
            goto label_2f2d2c;
        }
    }
    ctx->pc = 0x2F2D18u;
    // 0x2f2d18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2d1c: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2f2d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2f2d20: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x2f2d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x2f2d24: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F2D24u;
    {
        const bool branch_taken_0x2f2d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d24) {
            ctx->pc = 0x2F2D70u;
            goto label_2f2d70;
        }
    }
    ctx->pc = 0x2F2D2Cu;
label_2f2d2c:
    // 0x2f2d2c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2f2d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2f2d30: 0xdc259358  ld          $a1, -0x6CA8($at)
    ctx->pc = 0x2f2d30u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5F9358u));
    // 0x2f2d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d38: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F2D38u;
    SET_GPR_U32(ctx, 31, 0x2F2D40u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F2D38u, 0x2F2D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D40u;
label_2f2d40:
    // 0x2f2d40: 0x4400095  bltz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x2F2D40u;
    {
        const bool branch_taken_0x2f2d40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D40u;
        // 0x2f2d44: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d40) {
            ctx->pc = 0x2F2F98u;
            goto label_2f2f98;
        }
    }
    ctx->pc = 0x2F2D48u;
    // 0x2f2d48: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2f2d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2f2d4c: 0xdc259360  ld          $a1, -0x6CA0($at)
    ctx->pc = 0x2f2d4cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5F9360u));
    // 0x2f2d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d54: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F2D54u;
    SET_GPR_U32(ctx, 31, 0x2F2D5Cu);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F2D54u, 0x2F2D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D5Cu;
label_2f2d5c:
    // 0x2f2d5c: 0x1c40008e  bgtz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2F2D5Cu;
    {
        const bool branch_taken_0x2f2d5c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F2D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D5Cu;
        // 0x2f2d60: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d5c) {
            ctx->pc = 0x2F2F98u;
            goto label_2f2f98;
        }
    }
    ctx->pc = 0x2F2D64u;
    // 0x2f2d64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F2D64u;
    {
        const bool branch_taken_0x2f2d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d64) {
            ctx->pc = 0x2F2D90u;
            goto label_2f2d90;
        }
    }
    ctx->pc = 0x2F2D6Cu;
    // 0x2f2d6c: 0x0  nop
    ctx->pc = 0x2f2d6cu;
    // NOP
label_2f2d70:
    // 0x2f2d70: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2f2d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2f2d74: 0xdc259368  ld          $a1, -0x6C98($at)
    ctx->pc = 0x2f2d74u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5F9368u));
    // 0x2f2d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d7c: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F2D7Cu;
    SET_GPR_U32(ctx, 31, 0x2F2D84u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F2D7Cu, 0x2F2D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D84u;
label_2f2d84:
    // 0x2f2d84: 0x4400084  bltz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2F2D84u;
    {
        const bool branch_taken_0x2f2d84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F2D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D84u;
        // 0x2f2d88: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d84) {
            ctx->pc = 0x2F2F98u;
            goto label_2f2f98;
        }
    }
    ctx->pc = 0x2F2D8Cu;
label_2f2d8c:
    // 0x2f2d8c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2f2d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2f2d90:
    // 0x2f2d90: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2F2D90u;
    SET_GPR_U32(ctx, 31, 0x2F2D98u);
    ctx->pc = 0x2F2D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D90u;
    // 0x2f2d94: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2F2D90u, 0x2F2D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D98u;
label_2f2d98:
    // 0x2f2d98: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f2d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d9c: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2F2D9Cu;
    SET_GPR_U32(ctx, 31, 0x2F2DA4u);
    ctx->pc = 0x2F2DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D9Cu;
    // 0x2f2da0: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2F2D9Cu, 0x2F2DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DA4u;
label_2f2da4:
    // 0x2f2da4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f2da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2da8: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2F2DA8u;
    SET_GPR_U32(ctx, 31, 0x2F2DB0u);
    ctx->pc = 0x2F2DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DA8u;
    // 0x2f2dac: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2F2DA8u, 0x2F2DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DB0u;
label_2f2db0:
    // 0x2f2db0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f2db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2db4: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2F2DB4u;
    SET_GPR_U32(ctx, 31, 0x2F2DBCu);
    ctx->pc = 0x2F2DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DB4u;
    // 0x2f2db8: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2F2DB4u, 0x2F2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DBCu;
label_2f2dbc:
    // 0x2f2dbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2f2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f2dc0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f2dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2dc4: 0xc0bb84a  jal         func_2EE128
    ctx->pc = 0x2F2DC4u;
    SET_GPR_U32(ctx, 31, 0x2F2DCCu);
    ctx->pc = 0x2F2DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DC4u;
    // 0x2f2dc8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE128u, 0x2F2DC4u, 0x2F2DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DCCu;
label_2f2dcc:
    // 0x2f2dcc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2f2dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2f2dd0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2f2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2f2dd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2f2dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f2dd8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2f2dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2f2ddc: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x2f2ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f2de0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2f2de0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2f2de4: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x2F2DE4u;
    SET_GPR_U32(ctx, 31, 0x2F2DECu);
    ctx->pc = 0x2F2DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DE4u;
    // 0x2f2de8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x2F2DE4u, 0x2F2DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DECu;
label_2f2dec:
    // 0x2f2dec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f2decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2df0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2df4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f2df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2df8: 0xc0bbb9e  jal         func_2EEE78
    ctx->pc = 0x2F2DF8u;
    SET_GPR_U32(ctx, 31, 0x2F2E00u);
    ctx->pc = 0x2F2DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DF8u;
    // 0x2f2dfc: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEE78u, 0x2F2DF8u, 0x2F2E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E00u;
label_2f2e00:
    // 0x2f2e00: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f2e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2e08: 0xc0bb95e  jal         func_2EE578
    ctx->pc = 0x2F2E08u;
    SET_GPR_U32(ctx, 31, 0x2F2E10u);
    ctx->pc = 0x2F2E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2E08u;
    // 0x2f2e0c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE578u, 0x2F2E08u, 0x2F2E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E10u;
label_2f2e10:
    // 0x2f2e10: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2f2e10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2e14: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2E14u;
    {
        const bool branch_taken_0x2f2e14 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2F2E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E14u;
        // 0x2f2e18: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e14) {
            ctx->pc = 0x2F2E30u;
            goto label_2f2e30;
        }
    }
    ctx->pc = 0x2F2E1Cu;
    // 0x2f2e1c: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x2f2e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f2e20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f2e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f2e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2E28u;
    {
        const bool branch_taken_0x2f2e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E28u;
        // 0x2f2e2c: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e28) {
            ctx->pc = 0x2F2E44u;
            goto label_2f2e44;
        }
    }
    ctx->pc = 0x2F2E30u;
label_2f2e30:
    // 0x2f2e30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f2e34: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2f2e34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f2e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e3c: 0x29023  negu        $s2, $v0
    ctx->pc = 0x2f2e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2f2e40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f2e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f2e44:
    // 0x2f2e44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2f2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2e48: 0x4420002  bltzl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2E48u;
    {
        const bool branch_taken_0x2f2e48 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f2e48) {
            ctx->pc = 0x2F2E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2E48u;
            // 0x2f2e4c: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2E54u;
            goto label_2f2e54;
        }
    }
    ctx->pc = 0x2F2E50u;
    // 0x2f2e50: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2f2e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2f2e54:
    // 0x2f2e54: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2f2e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f2e58: 0x24540433  addiu       $s4, $v0, 0x433
    ctx->pc = 0x2f2e58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1075));
    // 0x2f2e5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f2e60: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2f2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f2e64: 0x2883fc02  slti        $v1, $a0, -0x3FE
    ctx->pc = 0x2f2e64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x2f2e68: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2E68u;
    {
        const bool branch_taken_0x2f2e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E68u;
        // 0x2f2e6c: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e68) {
            ctx->pc = 0x2F2E78u;
            goto label_2f2e78;
        }
    }
    ctx->pc = 0x2F2E70u;
    // 0x2f2e70: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2f2e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2f2e74: 0x45a023  subu        $s4, $v0, $a1
    ctx->pc = 0x2f2e74u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2f2e78:
    // 0x2f2e78: 0x2342021  addu        $a0, $s1, $s4
    ctx->pc = 0x2f2e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2f2e7c: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x2f2e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x2f2e80: 0x244182a  slt         $v1, $s2, $a0
    ctx->pc = 0x2f2e80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f2e84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f2e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e88: 0x243200b  movn        $a0, $s2, $v1
    ctx->pc = 0x2f2e88u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
    // 0x2f2e8c: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x2f2e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f2e90: 0x2a2200b  movn        $a0, $s5, $v0
    ctx->pc = 0x2f2e90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
    // 0x2f2e94: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2E94u;
    {
        const bool branch_taken_0x2f2e94 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2f2e94) {
            ctx->pc = 0x2F2EA8u;
            goto label_2f2ea8;
        }
    }
    ctx->pc = 0x2F2E9Cu;
    // 0x2f2e9c: 0x2a4a823  subu        $s5, $s5, $a0
    ctx->pc = 0x2f2e9cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2f2ea0: 0x2449023  subu        $s2, $s2, $a0
    ctx->pc = 0x2f2ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2f2ea4: 0x2248823  subu        $s1, $s1, $a0
    ctx->pc = 0x2f2ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2f2ea8:
    // 0x2f2ea8: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2F2EA8u;
    {
        const bool branch_taken_0x2f2ea8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2F2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EA8u;
        // 0x2f2eac: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ea8) {
            ctx->pc = 0x2F2EE0u;
            goto label_2f2ee0;
        }
    }
    ctx->pc = 0x2F2EB0u;
    // 0x2f2eb0: 0xc0bb9f0  jal         func_2EE7C0
    ctx->pc = 0x2F2EB0u;
    SET_GPR_U32(ctx, 31, 0x2F2EB8u);
    ctx->pc = 0x2F2EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2EB0u;
    // 0x2f2eb4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE7C0u, 0x2F2EB0u, 0x2F2EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2EB8u;
label_2f2eb8:
    // 0x2f2eb8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f2eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ebc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2f2ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2ec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f2ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ec4: 0xc0bb96c  jal         func_2EE5B0
    ctx->pc = 0x2F2EC4u;
    SET_GPR_U32(ctx, 31, 0x2F2ECCu);
    ctx->pc = 0x2F2EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2EC4u;
    // 0x2f2ec8: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5B0u, 0x2F2EC4u, 0x2F2ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2ECCu;
label_2f2ecc:
    // 0x2f2ecc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f2eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ed0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2f2ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2ed4: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2F2ED4u;
    SET_GPR_U32(ctx, 31, 0x2F2EDCu);
    ctx->pc = 0x2F2ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2ED4u;
    // 0x2f2ed8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2F2ED4u, 0x2F2EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2EDCu;
label_2f2edc:
    // 0x2f2edc: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x2f2edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_2f2ee0:
    // 0x2f2ee0: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2EE0u;
    {
        const bool branch_taken_0x2f2ee0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2F2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EE0u;
        // 0x2f2ee4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ee0) {
            ctx->pc = 0x2F2EF8u;
            goto label_2f2ef8;
        }
    }
    ctx->pc = 0x2F2EE8u;
    // 0x2f2ee8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f2ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2eec: 0xc0bba30  jal         func_2EE8C0
    ctx->pc = 0x2F2EECu;
    SET_GPR_U32(ctx, 31, 0x2F2EF4u);
    ctx->pc = 0x2F2EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2EECu;
    // 0x2f2ef0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8C0u, 0x2F2EECu, 0x2F2EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2EF4u;
label_2f2ef4:
    // 0x2f2ef4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2f2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2f2ef8:
    // 0x2f2ef8: 0x1ae00005  blez        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2EF8u;
    {
        const bool branch_taken_0x2f2ef8 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2F2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EF8u;
        // 0x2f2efc: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ef8) {
            ctx->pc = 0x2F2F10u;
            goto label_2f2f10;
        }
    }
    ctx->pc = 0x2F2F00u;
    // 0x2f2f00: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2f2f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2f04: 0xc0bb9f0  jal         func_2EE7C0
    ctx->pc = 0x2F2F04u;
    SET_GPR_U32(ctx, 31, 0x2F2F0Cu);
    ctx->pc = 0x2F2F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F04u;
    // 0x2f2f08: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE7C0u, 0x2F2F04u, 0x2F2F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F0Cu;
label_2f2f0c:
    // 0x2f2f0c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2f2f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_2f2f10:
    // 0x2f2f10: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2F10u;
    {
        const bool branch_taken_0x2f2f10 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2F2F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F10u;
        // 0x2f2f14: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f10) {
            ctx->pc = 0x2F2F28u;
            goto label_2f2f28;
        }
    }
    ctx->pc = 0x2F2F18u;
    // 0x2f2f18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f2f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2f1c: 0xc0bba30  jal         func_2EE8C0
    ctx->pc = 0x2F2F1Cu;
    SET_GPR_U32(ctx, 31, 0x2F2F24u);
    ctx->pc = 0x2F2F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F1Cu;
    // 0x2f2f20: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8C0u, 0x2F2F1Cu, 0x2F2F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F24u;
label_2f2f24:
    // 0x2f2f24: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2f2f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_2f2f28:
    // 0x2f2f28: 0x1aa00007  blez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2F28u;
    {
        const bool branch_taken_0x2f2f28 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2F2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F28u;
        // 0x2f2f2c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f28) {
            ctx->pc = 0x2F2F48u;
            goto label_2f2f48;
        }
    }
    ctx->pc = 0x2F2F30u;
    // 0x2f2f30: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2f2f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2f2f34: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f2f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2f38: 0xc0bba30  jal         func_2EE8C0
    ctx->pc = 0x2F2F38u;
    SET_GPR_U32(ctx, 31, 0x2F2F40u);
    ctx->pc = 0x2F2F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F38u;
    // 0x2f2f3c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8C0u, 0x2F2F38u, 0x2F2F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F40u;
label_2f2f40:
    // 0x2f2f40: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2f2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2f2f44: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2f2f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2f2f48:
    // 0x2f2f48: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f2f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2f4c: 0xc0bbaa0  jal         func_2EEA80
    ctx->pc = 0x2F2F4Cu;
    SET_GPR_U32(ctx, 31, 0x2F2F54u);
    ctx->pc = 0x2F2F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F4Cu;
    // 0x2f2f50: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA80u, 0x2F2F4Cu, 0x2F2F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F54u;
label_2f2f54:
    // 0x2f2f54: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2f2f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2f2f58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2f5c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2f2f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2f2f60: 0x8c55000c  lw          $s5, 0xC($v0)
    ctx->pc = 0x2f2f60u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f2f64: 0xc0bba86  jal         func_2EEA18
    ctx->pc = 0x2F2F64u;
    SET_GPR_U32(ctx, 31, 0x2F2F6Cu);
    ctx->pc = 0x2F2F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F64u;
    // 0x2f2f68: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA18u, 0x2F2F64u, 0x2F2F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F6Cu;
label_2f2f6c:
    // 0x2f2f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2f70: 0x481fe65  bgez        $a0, . + 4 + (-0x19B << 2)
    ctx->pc = 0x2F2F70u;
    {
        const bool branch_taken_0x2f2f70 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2f2f70) {
            ctx->pc = 0x2F2908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2908;
        }
    }
    ctx->pc = 0x2F2F78u;
    // 0x2f2f78: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2F78u;
    {
        const bool branch_taken_0x2f2f78 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F78u;
        // 0x2f2f7c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f78) {
            ctx->pc = 0x2F2F98u;
            goto label_2f2f98;
        }
    }
    ctx->pc = 0x2F2F80u;
    // 0x2f2f80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2f84: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2f2f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2f2f88: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x2f2f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x2f2f8c: 0x1040fe52  beqz        $v0, . + 4 + (-0x1AE << 2)
    ctx->pc = 0x2F2F8Cu;
    {
        const bool branch_taken_0x2f2f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F8Cu;
        // 0x2f2f90: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f8c) {
            ctx->pc = 0x2F28D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f28d8;
        }
    }
    ctx->pc = 0x2F2F94u;
label_2f2f94:
    // 0x2f2f94: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2f2f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2f2f98:
    // 0x2f2f98: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2F2F98u;
    SET_GPR_U32(ctx, 31, 0x2F2FA0u);
    ctx->pc = 0x2F2F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F98u;
    // 0x2f2f9c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2F2F98u, 0x2F2FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FA0u;
label_2f2fa0:
    // 0x2f2fa0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f2fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2fa4: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2F2FA4u;
    SET_GPR_U32(ctx, 31, 0x2F2FACu);
    ctx->pc = 0x2F2FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FA4u;
    // 0x2f2fa8: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2F2FA4u, 0x2F2FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FACu;
label_2f2fac:
    // 0x2f2fac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f2facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2fb0: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2F2FB0u;
    SET_GPR_U32(ctx, 31, 0x2F2FB8u);
    ctx->pc = 0x2F2FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FB0u;
    // 0x2f2fb4: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2F2FB0u, 0x2F2FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FB8u;
label_2f2fb8:
    // 0x2f2fb8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f2fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2fbc: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2F2FBCu;
    SET_GPR_U32(ctx, 31, 0x2F2FC4u);
    ctx->pc = 0x2F2FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FBCu;
    // 0x2f2fc0: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2F2FBCu, 0x2F2FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FC4u;
label_2f2fc4:
    // 0x2f2fc4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f2fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2fc8: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2F2FC8u;
    SET_GPR_U32(ctx, 31, 0x2F2FD0u);
    ctx->pc = 0x2F2FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FC8u;
    // 0x2f2fcc: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2F2FC8u, 0x2F2FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FD0u;
label_2f2fd0:
    // 0x2f2fd0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f2fd4:
    // 0x2f2fd4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2FD4u;
    {
        const bool branch_taken_0x2f2fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2fd4) {
            ctx->pc = 0x2F2FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2FD4u;
            // 0x2f2fd8: 0xac760000  sw          $s6, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2FDCu;
            goto label_2f2fdc;
        }
    }
    ctx->pc = 0x2F2FDCu;
label_2f2fdc:
    // 0x2f2fdc: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f2fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2f2fe0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2f2fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2fe4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2FE4u;
    {
        const bool branch_taken_0x2f2fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FE4u;
        // 0x2f2fe8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fe4) {
            ctx->pc = 0x2F3000u;
            goto label_2f3000;
        }
    }
    ctx->pc = 0x2F2FECu;
    // 0x2f2fec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f2fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ff0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ff4: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2F2FF4u;
    SET_GPR_U32(ctx, 31, 0x2F2FFCu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2F2FF4u, 0x2F2FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FFCu;
label_2f2ffc:
    // 0x2f2ffc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2f2ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f3000:
    // 0x2f3000: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2f3000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f3004: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2f3004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f3008: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2f3008u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2f300c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2f300cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f3010: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2f3010u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f3014: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2f3014u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f3018: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x2f3018u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f301c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2f301cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f3020: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2f3020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f3024: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3024u;
        // 0x2f3028: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F302Cu;
    // 0x2f302c: 0x0  nop
    ctx->pc = 0x2f302cu;
    // NOP
    ctx->pc = 0x2f3030u;
}
