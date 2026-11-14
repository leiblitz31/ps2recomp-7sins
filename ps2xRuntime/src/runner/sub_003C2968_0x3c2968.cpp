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

// Function: sub_003C2968
// Address: 0x3c2968 - 0x3c2ad8
void sub_003C2968_0x3c2968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2968_0x3c2968");
#endif

    switch (ctx->pc) {
        case 0x3c2968u: goto label_3c2968;
        case 0x3c296cu: goto label_3c296c;
        case 0x3c2970u: goto label_3c2970;
        case 0x3c2974u: goto label_3c2974;
        case 0x3c2978u: goto label_3c2978;
        case 0x3c297cu: goto label_3c297c;
        case 0x3c2980u: goto label_3c2980;
        case 0x3c2984u: goto label_3c2984;
        case 0x3c2988u: goto label_3c2988;
        case 0x3c298cu: goto label_3c298c;
        case 0x3c2990u: goto label_3c2990;
        case 0x3c2994u: goto label_3c2994;
        case 0x3c2998u: goto label_3c2998;
        case 0x3c299cu: goto label_3c299c;
        case 0x3c29a0u: goto label_3c29a0;
        case 0x3c29a4u: goto label_3c29a4;
        case 0x3c29a8u: goto label_3c29a8;
        case 0x3c29acu: goto label_3c29ac;
        case 0x3c29b0u: goto label_3c29b0;
        case 0x3c29b4u: goto label_3c29b4;
        case 0x3c29b8u: goto label_3c29b8;
        case 0x3c29bcu: goto label_3c29bc;
        case 0x3c29c0u: goto label_3c29c0;
        case 0x3c29c4u: goto label_3c29c4;
        case 0x3c29c8u: goto label_3c29c8;
        case 0x3c29ccu: goto label_3c29cc;
        case 0x3c29d0u: goto label_3c29d0;
        case 0x3c29d4u: goto label_3c29d4;
        case 0x3c29d8u: goto label_3c29d8;
        case 0x3c29dcu: goto label_3c29dc;
        case 0x3c29e0u: goto label_3c29e0;
        case 0x3c29e4u: goto label_3c29e4;
        case 0x3c29e8u: goto label_3c29e8;
        case 0x3c29ecu: goto label_3c29ec;
        case 0x3c29f0u: goto label_3c29f0;
        case 0x3c29f4u: goto label_3c29f4;
        case 0x3c29f8u: goto label_3c29f8;
        case 0x3c29fcu: goto label_3c29fc;
        case 0x3c2a00u: goto label_3c2a00;
        case 0x3c2a04u: goto label_3c2a04;
        case 0x3c2a08u: goto label_3c2a08;
        case 0x3c2a0cu: goto label_3c2a0c;
        case 0x3c2a10u: goto label_3c2a10;
        case 0x3c2a14u: goto label_3c2a14;
        case 0x3c2a18u: goto label_3c2a18;
        case 0x3c2a1cu: goto label_3c2a1c;
        case 0x3c2a20u: goto label_3c2a20;
        case 0x3c2a24u: goto label_3c2a24;
        case 0x3c2a28u: goto label_3c2a28;
        case 0x3c2a2cu: goto label_3c2a2c;
        case 0x3c2a30u: goto label_3c2a30;
        case 0x3c2a34u: goto label_3c2a34;
        case 0x3c2a38u: goto label_3c2a38;
        case 0x3c2a3cu: goto label_3c2a3c;
        case 0x3c2a40u: goto label_3c2a40;
        case 0x3c2a44u: goto label_3c2a44;
        case 0x3c2a48u: goto label_3c2a48;
        case 0x3c2a4cu: goto label_3c2a4c;
        case 0x3c2a50u: goto label_3c2a50;
        case 0x3c2a54u: goto label_3c2a54;
        case 0x3c2a58u: goto label_3c2a58;
        case 0x3c2a5cu: goto label_3c2a5c;
        case 0x3c2a60u: goto label_3c2a60;
        case 0x3c2a64u: goto label_3c2a64;
        case 0x3c2a68u: goto label_3c2a68;
        case 0x3c2a6cu: goto label_3c2a6c;
        case 0x3c2a70u: goto label_3c2a70;
        case 0x3c2a74u: goto label_3c2a74;
        case 0x3c2a78u: goto label_3c2a78;
        case 0x3c2a7cu: goto label_3c2a7c;
        case 0x3c2a80u: goto label_3c2a80;
        case 0x3c2a84u: goto label_3c2a84;
        case 0x3c2a88u: goto label_3c2a88;
        case 0x3c2a8cu: goto label_3c2a8c;
        case 0x3c2a90u: goto label_3c2a90;
        case 0x3c2a94u: goto label_3c2a94;
        case 0x3c2a98u: goto label_3c2a98;
        case 0x3c2a9cu: goto label_3c2a9c;
        case 0x3c2aa0u: goto label_3c2aa0;
        case 0x3c2aa4u: goto label_3c2aa4;
        case 0x3c2aa8u: goto label_3c2aa8;
        case 0x3c2aacu: goto label_3c2aac;
        case 0x3c2ab0u: goto label_3c2ab0;
        case 0x3c2ab4u: goto label_3c2ab4;
        case 0x3c2ab8u: goto label_3c2ab8;
        case 0x3c2abcu: goto label_3c2abc;
        case 0x3c2ac0u: goto label_3c2ac0;
        case 0x3c2ac4u: goto label_3c2ac4;
        case 0x3c2ac8u: goto label_3c2ac8;
        case 0x3c2accu: goto label_3c2acc;
        case 0x3c2ad0u: goto label_3c2ad0;
        case 0x3c2ad4u: goto label_3c2ad4;
        default: break;
    }

    ctx->pc = 0x3c2968u;

label_3c2968:
    // 0x3c2968: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3c2968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3c296c:
    // 0x3c296c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3c296cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3c2970:
    // 0x3c2970: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3c2970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3c2974:
    // 0x3c2974: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3c2974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2978:
    // 0x3c2978: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3c2978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3c297c:
    // 0x3c297c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c297cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c2980:
    // 0x3c2980: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3c2980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3c2984:
    // 0x3c2984: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c2984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c2988:
    // 0x3c2988: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3c2988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3c298c:
    // 0x3c298c: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x3c298cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3c2990:
    // 0x3c2990: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3c2990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3c2994:
    // 0x3c2994: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3c2994u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2998:
    // 0x3c2998: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3c2998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3c299c:
    // 0x3c299c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c299cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c29a0:
    // 0x3c29a0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3c29a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_3c29a4:
    // 0x3c29a4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3c29a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_3c29a8:
    // 0x3c29a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c29a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c29ac:
    // 0x3c29ac: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x3c29acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_3c29b0:
    // 0x3c29b0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x3c29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3c29b4:
    // 0x3c29b4: 0x40f809  jalr        $v0
label_3c29b8:
    if (ctx->pc == 0x3C29B8u) {
        ctx->pc = 0x3C29B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29B4u;
        // 0x3c29b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C29BCu;
        goto label_3c29bc;
    }
    ctx->pc = 0x3C29B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C29BCu);
        ctx->pc = 0x3C29B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29B4u;
        // 0x3c29b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C29B4u, 0x3C29BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C29BCu;
label_3c29bc:
    // 0x3c29bc: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x3c29bcu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_3c29c0:
    // 0x3c29c0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_3c29c4:
    if (ctx->pc == 0x3C29C4u) {
        ctx->pc = 0x3C29C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29C0u;
        // 0x3c29c4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C29C8u;
        goto label_3c29c8;
    }
    ctx->pc = 0x3C29C0u;
    {
        const bool branch_taken_0x3c29c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c29c0) {
            ctx->pc = 0x3C29C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C29C0u;
            // 0x3c29c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C29C8u;
            goto label_3c29c8;
        }
    }
    ctx->pc = 0x3C29C8u;
label_3c29c8:
    // 0x3c29c8: 0x1012  mflo        $v0
    ctx->pc = 0x3c29c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3c29cc:
    // 0x3c29cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c29ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c29d0:
    // 0x3c29d0: 0x10c00035  beqz        $a2, . + 4 + (0x35 << 2)
label_3c29d4:
    if (ctx->pc == 0x3C29D4u) {
        ctx->pc = 0x3C29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29D0u;
        // 0x3c29d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C29D8u;
        goto label_3c29d8;
    }
    ctx->pc = 0x3C29D0u;
    {
        const bool branch_taken_0x3c29d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29D0u;
        // 0x3c29d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c29d0) {
            ctx->pc = 0x3C2AA8u;
            goto label_3c2aa8;
        }
    }
    ctx->pc = 0x3C29D8u;
label_3c29d8:
    // 0x3c29d8: 0x18c00030  blez        $a2, . + 4 + (0x30 << 2)
label_3c29dc:
    if (ctx->pc == 0x3C29DCu) {
        ctx->pc = 0x3C29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29D8u;
        // 0x3c29dc: 0x2416000a  addiu       $s6, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C29E0u;
        goto label_3c29e0;
    }
    ctx->pc = 0x3C29D8u;
    {
        const bool branch_taken_0x3c29d8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3C29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29D8u;
        // 0x3c29dc: 0x2416000a  addiu       $s6, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c29d8) {
            ctx->pc = 0x3C2A9Cu;
            goto label_3c2a9c;
        }
    }
    ctx->pc = 0x3C29E0u;
label_3c29e0:
    // 0x3c29e0: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x3c29e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c29e4:
    // 0x3c29e4: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x3c29e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c29e8:
    // 0x3c29e8: 0x2417000d  addiu       $s7, $zero, 0xD
    ctx->pc = 0x3c29e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3c29ec:
    // 0x3c29ec: 0x24d0ffff  addiu       $s0, $a2, -0x1
    ctx->pc = 0x3c29ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3c29f0:
    // 0x3c29f0: 0x2912021  addu        $a0, $s4, $s1
    ctx->pc = 0x3c29f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_3c29f4:
    // 0x3c29f4: 0x0  nop
    ctx->pc = 0x3c29f4u;
    // NOP
label_3c29f8:
    // 0x3c29f8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3c29f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c29fc:
    // 0x3c29fc: 0x14560015  bne         $v0, $s6, . + 4 + (0x15 << 2)
label_3c2a00:
    if (ctx->pc == 0x3C2A00u) {
        ctx->pc = 0x3C2A04u;
        goto label_3c2a04;
    }
    ctx->pc = 0x3C29FCu;
    {
        const bool branch_taken_0x3c29fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x3c29fc) {
            ctx->pc = 0x3C2A54u;
            goto label_3c2a54;
        }
    }
    ctx->pc = 0x3C2A04u;
label_3c2a04:
    // 0x3c2a04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c2a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3c2a08:
    // 0x3c2a08: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x3c2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_3c2a0c:
    // 0x3c2a0c: 0x2263023  subu        $a2, $s1, $a2
    ctx->pc = 0x3c2a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_3c2a10:
    // 0x3c2a10: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3c2a10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_3c2a14:
    // 0x3c2a14: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x3c2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3c2a18:
    // 0x3c2a18: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x3c2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_3c2a1c:
    // 0x3c2a1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3c2a20:
    if (ctx->pc == 0x3C2A20u) {
        ctx->pc = 0x3C2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A1Cu;
        // 0x3c2a20: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A24u;
        goto label_3c2a24;
    }
    ctx->pc = 0x3C2A1Cu;
    {
        const bool branch_taken_0x3c2a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A1Cu;
        // 0x3c2a20: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2a1c) {
            ctx->pc = 0x3C2A30u;
            goto label_3c2a30;
        }
    }
    ctx->pc = 0x3C2A24u;
label_3c2a24:
    // 0x3c2a24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c2a28:
    // 0x3c2a28: 0xae7e0040  sw          $fp, 0x40($s3)
    ctx->pc = 0x3c2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 30));
label_3c2a2c:
    // 0x3c2a2c: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x3c2a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
label_3c2a30:
    // 0x3c2a30: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3c2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3c2a34:
    // 0x3c2a34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c2a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c2a38:
    // 0x3c2a38: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3c2a38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_3c2a3c:
    // 0x3c2a3c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3c2a3cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_3c2a40:
    // 0x3c2a40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c2a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c2a44:
    // 0x3c2a44: 0x40f809  jalr        $v0
label_3c2a48:
    if (ctx->pc == 0x3C2A48u) {
        ctx->pc = 0x3C2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A44u;
        // 0x3c2a48: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A4Cu;
        goto label_3c2a4c;
    }
    ctx->pc = 0x3C2A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2A4Cu);
        ctx->pc = 0x3C2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A44u;
        // 0x3c2a48: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2A44u, 0x3C2A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2A4Cu;
label_3c2a4c:
    // 0x3c2a4c: 0x10000016  b           . + 4 + (0x16 << 2)
label_3c2a50:
    if (ctx->pc == 0x3C2A50u) {
        ctx->pc = 0x3C2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A4Cu;
        // 0x3c2a50: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A54u;
        goto label_3c2a54;
    }
    ctx->pc = 0x3C2A4Cu;
    {
        const bool branch_taken_0x3c2a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A4Cu;
        // 0x3c2a50: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2a4c) {
            ctx->pc = 0x3C2AA8u;
            goto label_3c2aa8;
        }
    }
    ctx->pc = 0x3C2A54u;
label_3c2a54:
    // 0x3c2a54: 0x5457000e  bnel        $v0, $s7, . + 4 + (0xE << 2)
label_3c2a58:
    if (ctx->pc == 0x3C2A58u) {
        ctx->pc = 0x3C2A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A54u;
        // 0x3c2a58: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A5Cu;
        goto label_3c2a5c;
    }
    ctx->pc = 0x3C2A54u;
    {
        const bool branch_taken_0x3c2a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x3c2a54) {
            ctx->pc = 0x3C2A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2A54u;
            // 0x3c2a58: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2A90u;
            goto label_3c2a90;
        }
    }
    ctx->pc = 0x3C2A5Cu;
label_3c2a5c:
    // 0x3c2a5c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x3c2a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3c2a60:
    // 0x3c2a60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3c2a64:
    if (ctx->pc == 0x3C2A64u) {
        ctx->pc = 0x3C2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A60u;
        // 0x3c2a64: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A68u;
        goto label_3c2a68;
    }
    ctx->pc = 0x3C2A60u;
    {
        const bool branch_taken_0x3c2a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A60u;
        // 0x3c2a64: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2a60) {
            ctx->pc = 0x3C2A8Cu;
            goto label_3c2a8c;
        }
    }
    ctx->pc = 0x3C2A68u;
label_3c2a68:
    // 0x3c2a68: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x3c2a68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_3c2a6c:
    // 0x3c2a6c: 0x14560007  bne         $v0, $s6, . + 4 + (0x7 << 2)
label_3c2a70:
    if (ctx->pc == 0x3C2A70u) {
        ctx->pc = 0x3C2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A6Cu;
        // 0x3c2a70: 0x24850001  addiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A74u;
        goto label_3c2a74;
    }
    ctx->pc = 0x3C2A6Cu;
    {
        const bool branch_taken_0x3c2a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x3C2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A6Cu;
        // 0x3c2a70: 0x24850001  addiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2a6c) {
            ctx->pc = 0x3C2A8Cu;
            goto label_3c2a8c;
        }
    }
    ctx->pc = 0x3C2A74u;
label_3c2a74:
    // 0x3c2a74: 0xd13023  subu        $a2, $a2, $s1
    ctx->pc = 0x3c2a74u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_3c2a78:
    // 0x3c2a78: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3c2a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3c2a7c:
    // 0x3c2a7c: 0xc0bb778  jal         func_2EDDE0
label_3c2a80:
    if (ctx->pc == 0x3C2A80u) {
        ctx->pc = 0x3C2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A7Cu;
        // 0x3c2a80: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A84u;
        goto label_3c2a84;
    }
    ctx->pc = 0x3C2A7Cu;
    SET_GPR_U32(ctx, 31, 0x3C2A84u);
    ctx->pc = 0x3C2A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2A7Cu;
    // 0x3c2a80: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3C2A7Cu, 0x3C2A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2A84u;
label_3c2a84:
    // 0x3c2a84: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c2a88:
    if (ctx->pc == 0x3C2A88u) {
        ctx->pc = 0x3C2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A84u;
        // 0x3c2a88: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A8Cu;
        goto label_3c2a8c;
    }
    ctx->pc = 0x3C2A84u;
    {
        const bool branch_taken_0x3c2a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A84u;
        // 0x3c2a88: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2a84) {
            ctx->pc = 0x3C2A90u;
            goto label_3c2a90;
        }
    }
    ctx->pc = 0x3C2A8Cu;
label_3c2a8c:
    // 0x3c2a8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c2a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3c2a90:
    // 0x3c2a90: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x3c2a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3c2a94:
    // 0x3c2a94: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_3c2a98:
    if (ctx->pc == 0x3C2A98u) {
        ctx->pc = 0x3C2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A94u;
        // 0x3c2a98: 0x2912021  addu        $a0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A9Cu;
        goto label_3c2a9c;
    }
    ctx->pc = 0x3C2A94u;
    {
        const bool branch_taken_0x3c2a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A94u;
        // 0x3c2a98: 0x2912021  addu        $a0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2a94) {
            ctx->pc = 0x3C29F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c29f8;
        }
    }
    ctx->pc = 0x3C2A9Cu;
label_3c2a9c:
    // 0x3c2a9c: 0x2861821  addu        $v1, $s4, $a2
    ctx->pc = 0x3c2a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_3c2aa0:
    // 0x3c2aa0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3c2aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c2aa4:
    // 0x3c2aa4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3c2aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_3c2aa8:
    // 0x3c2aa8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3c2aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c2aac:
    // 0x3c2aac: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3c2aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c2ab0:
    // 0x3c2ab0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3c2ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c2ab4:
    // 0x3c2ab4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3c2ab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c2ab8:
    // 0x3c2ab8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3c2ab8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c2abc:
    // 0x3c2abc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3c2abcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c2ac0:
    // 0x3c2ac0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3c2ac0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c2ac4:
    // 0x3c2ac4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3c2ac4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c2ac8:
    // 0x3c2ac8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3c2ac8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c2acc:
    // 0x3c2acc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c2accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c2ad0:
    // 0x3c2ad0: 0x3e00008  jr          $ra
label_3c2ad4:
    if (ctx->pc == 0x3C2AD4u) {
        ctx->pc = 0x3C2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2AD0u;
        // 0x3c2ad4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2AD8u;
        goto label_fallthrough_0x3c2ad0;
    }
    ctx->pc = 0x3C2AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2AD0u;
        // 0x3c2ad4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c2ad0:
    ctx->pc = 0x3C2AD8u;
}
