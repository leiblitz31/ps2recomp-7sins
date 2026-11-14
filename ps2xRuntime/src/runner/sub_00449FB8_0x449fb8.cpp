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

// Function: sub_00449FB8
// Address: 0x449fb8 - 0x44a758
void sub_00449FB8_0x449fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449FB8_0x449fb8");
#endif

    switch (ctx->pc) {
        case 0x44a010u: goto label_44a010;
        case 0x44a038u: goto label_44a038;
        case 0x44a060u: goto label_44a060;
        case 0x44a06cu: goto label_44a06c;
        case 0x44a090u: goto label_44a090;
        case 0x44a0b8u: goto label_44a0b8;
        case 0x44a0c4u: goto label_44a0c4;
        case 0x44a100u: goto label_44a100;
        case 0x44a10cu: goto label_44a10c;
        case 0x44a120u: goto label_44a120;
        case 0x44a164u: goto label_44a164;
        case 0x44a190u: goto label_44a190;
        case 0x44a1e8u: goto label_44a1e8;
        case 0x44a278u: goto label_44a278;
        case 0x44a2c0u: goto label_44a2c0;
        case 0x44a2d8u: goto label_44a2d8;
        case 0x44a3a0u: goto label_44a3a0;
        case 0x44a460u: goto label_44a460;
        case 0x44a4acu: goto label_44a4ac;
        case 0x44a4b8u: goto label_44a4b8;
        case 0x44a4e8u: goto label_44a4e8;
        case 0x44a550u: goto label_44a550;
        case 0x44a608u: goto label_44a608;
        case 0x44a65cu: goto label_44a65c;
        case 0x44a6d4u: goto label_44a6d4;
        case 0x44a6e8u: goto label_44a6e8;
        default: break;
    }

    ctx->pc = 0x449fb8u;

    // 0x449fb8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x449fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x449fbc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x449fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x449fc0: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x449fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x449fc4: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x449fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x449fc8: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x449fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x449fcc: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x449fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x449fd0: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x449fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x449fd4: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x449fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x449fd8: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x449fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x449fdc: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x449fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x449fe0: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x449fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x449fe4: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x449fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x449fe8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x449fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x449fec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x449fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x449ff0: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x449ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x449ff4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x449ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x449ff8: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x449ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x449ffc: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x449ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44a000: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x44a000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x44a004: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44a004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x44a008: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x44a008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x44a00c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x44a00cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_44a010:
    // 0x44a010: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x44a010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x44a014: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x44a014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a018: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x44a018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x44a01c: 0x24b70020  addiu       $s7, $a1, 0x20
    ctx->pc = 0x44a01cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x44a020: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x44A020u;
    {
        const bool branch_taken_0x44a020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A020u;
        // 0x44a024: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a020) {
            ctx->pc = 0x44A0F8u;
            goto label_44a0f8;
        }
    }
    ctx->pc = 0x44A028u;
    // 0x44a028: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x44a028u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x44a02c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x44a02cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a030: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x44a030u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x44a034: 0x22c1018  mult        $v0, $s1, $t4
    ctx->pc = 0x44a034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_44a038:
    // 0x44a038: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x44a038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x44a03c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44a040: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x44a040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44a044: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x44A044u;
    {
        const bool branch_taken_0x44a044 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a044) {
            ctx->pc = 0x44A048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A044u;
            // 0x44a048: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A078u;
            goto label_44a078;
        }
    }
    ctx->pc = 0x44A04Cu;
    // 0x44a04c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x44a04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44a050: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x44a050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a054: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x44a054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x44a058: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44A058u;
    SET_GPR_U32(ctx, 31, 0x44A060u);
    ctx->pc = 0x44A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A058u;
    // 0x44a05c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44A058u, 0x44A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A060u;
label_44a060:
    // 0x44a060: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44a060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a064: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x44A064u;
    SET_GPR_U32(ctx, 31, 0x44A06Cu);
    ctx->pc = 0x44A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A064u;
    // 0x44a068: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44A064u, 0x44A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A06Cu;
label_44a06c:
    // 0x44a06c: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x44A06Cu;
    {
        const bool branch_taken_0x44a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A06Cu;
        // 0x44a070: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a06c) {
            ctx->pc = 0x44A728u;
            goto label_44a728;
        }
    }
    ctx->pc = 0x44A074u;
    // 0x44a074: 0x0  nop
    ctx->pc = 0x44a074u;
    // NOP
label_44a078:
    // 0x44a078: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x44a078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x44a07c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x44a07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44a080: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x44A080u;
    {
        const bool branch_taken_0x44a080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A080u;
        // 0x44a084: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a080) {
            ctx->pc = 0x44A0E0u;
            goto label_44a0e0;
        }
    }
    ctx->pc = 0x44A088u;
    // 0x44a088: 0x20b2018  mult        $a0, $s0, $t3
    ctx->pc = 0x44a088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x44a08c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x44a08cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44a090:
    // 0x44a090: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x44a090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x44a094: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x44a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x44a098: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44a098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44a09c: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x44A09Cu;
    {
        const bool branch_taken_0x44a09c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x44a09c) {
            ctx->pc = 0x44A0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A09Cu;
            // 0x44a0a0: 0x8ce20020  lw          $v0, 0x20($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A0D0u;
            goto label_44a0d0;
        }
    }
    ctx->pc = 0x44A0A4u;
    // 0x44a0a4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x44a0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x44a0a8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x44a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x44a0ac: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x44a0acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44a0b0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44A0B0u;
    SET_GPR_U32(ctx, 31, 0x44A0B8u);
    ctx->pc = 0x44A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A0B0u;
    // 0x44a0b4: 0xafa90010  sw          $t1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44A0B0u, 0x44A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A0B8u;
label_44a0b8:
    // 0x44a0b8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x44a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x44a0bc: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x44A0BCu;
    SET_GPR_U32(ctx, 31, 0x44A0C4u);
    ctx->pc = 0x44A0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A0BCu;
    // 0x44a0c0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44A0BCu, 0x44A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A0C4u;
label_44a0c4:
    // 0x44a0c4: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x44A0C4u;
    {
        const bool branch_taken_0x44a0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A0C4u;
        // 0x44a0c8: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a0c4) {
            ctx->pc = 0x44A728u;
            goto label_44a728;
        }
    }
    ctx->pc = 0x44A0CCu;
    // 0x44a0cc: 0x0  nop
    ctx->pc = 0x44a0ccu;
    // NOP
label_44a0d0:
    // 0x44a0d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x44a0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x44a0d4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x44a0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44a0d8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x44A0D8u;
    {
        const bool branch_taken_0x44a0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A0D8u;
        // 0x44a0dc: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a0d8) {
            ctx->pc = 0x44A090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a090;
        }
    }
    ctx->pc = 0x44A0E0u;
label_44a0e0:
    // 0x44a0e0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x44a0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a0e4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x44a0e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a0e8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x44a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x44a0ec: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x44a0ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44a0f0: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x44A0F0u;
    {
        const bool branch_taken_0x44a0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A0F0u;
        // 0x44a0f4: 0x22c1018  mult        $v0, $s1, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a0f0) {
            ctx->pc = 0x44A038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a038;
        }
    }
    ctx->pc = 0x44A0F8u;
label_44a0f8:
    // 0x44a0f8: 0xc1123b8  jal         func_448EE0
    ctx->pc = 0x44A0F8u;
    SET_GPR_U32(ctx, 31, 0x44A100u);
    ctx->pc = 0x44A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A0F8u;
    // 0x44a0fc: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448EE0u, 0x44A0F8u, 0x44A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A100u;
label_44a100:
    // 0x44a100: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44a100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a104: 0xc112414  jal         func_449050
    ctx->pc = 0x44A104u;
    SET_GPR_U32(ctx, 31, 0x44A10Cu);
    ctx->pc = 0x44A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A104u;
    // 0x44a108: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449050u, 0x44A104u, 0x44A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A10Cu;
label_44a10c:
    // 0x44a10c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44a10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a110: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x44A110u;
    {
        const bool branch_taken_0x44a110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A110u;
        // 0x44a114: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a110) {
            ctx->pc = 0x44A144u;
            goto label_44a144;
        }
    }
    ctx->pc = 0x44A118u;
    // 0x44a118: 0xc112414  jal         func_449050
    ctx->pc = 0x44A118u;
    SET_GPR_U32(ctx, 31, 0x44A120u);
    ctx->pc = 0x44A11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A118u;
    // 0x44a11c: 0x2252018  mult        $a0, $s1, $a1 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x449050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449050u, 0x44A118u, 0x44A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A120u;
label_44a120:
    // 0x44a120: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44A120u;
    {
        const bool branch_taken_0x44a120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A120u;
        // 0x44a124: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a120) {
            ctx->pc = 0x44A144u;
            goto label_44a144;
        }
    }
    ctx->pc = 0x44A128u;
    // 0x44a128: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x44a128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x44a12c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x44a12cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a130: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x44a130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x44a134: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x44a134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x44a138: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x44a138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x44a13c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x44A13Cu;
    {
        const bool branch_taken_0x44a13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A13Cu;
        // 0x44a140: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a13c) {
            ctx->pc = 0x44A148u;
            goto label_44a148;
        }
    }
    ctx->pc = 0x44A144u;
label_44a144:
    // 0x44a144: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x44a144u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a148:
    // 0x44a148: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x44a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x44a14c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x44A14Cu;
    {
        const bool branch_taken_0x44a14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A14Cu;
        // 0x44a150: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a14c) {
            ctx->pc = 0x44A170u;
            goto label_44a170;
        }
    }
    ctx->pc = 0x44A154u;
    // 0x44a154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44a154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a158: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x44a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x44a15c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44A15Cu;
    SET_GPR_U32(ctx, 31, 0x44A164u);
    ctx->pc = 0x44A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A15Cu;
    // 0x44a160: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44A15Cu, 0x44A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A164u;
label_44a164:
    // 0x44a164: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x44a164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x44a168: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x44A168u;
    {
        const bool branch_taken_0x44a168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A168u;
        // 0x44a16c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a168) {
            ctx->pc = 0x44A6E0u;
            goto label_44a6e0;
        }
    }
    ctx->pc = 0x44A170u;
label_44a170:
    // 0x44a170: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x44a170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x44a174: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x44a174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a178: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x44A178u;
    {
        const bool branch_taken_0x44a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A178u;
        // 0x44a17c: 0x8ee90000  lw          $t1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a178) {
            ctx->pc = 0x44A530u;
            goto label_44a530;
        }
    }
    ctx->pc = 0x44A180u;
    // 0x44a180: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x44a180u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x44a184: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x44a184u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a188: 0x37deffff  ori         $fp, $fp, 0xFFFF
    ctx->pc = 0x44a188u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x44a18c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x44a18cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a190:
    // 0x44a190: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x44a190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x44a194: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x44a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x44a198: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44a19c: 0x105e00de  beq         $v0, $fp, . + 4 + (0xDE << 2)
    ctx->pc = 0x44A19Cu;
    {
        const bool branch_taken_0x44a19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x44A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A19Cu;
        // 0x44a1a0: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a19c) {
            ctx->pc = 0x44A518u;
            goto label_44a518;
        }
    }
    ctx->pc = 0x44A1A4u;
    // 0x44a1a4: 0x443018  mult        $a2, $v0, $a0
    ctx->pc = 0x44a1a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x44a1a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x44a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44a1ac: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x44a1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44a1b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x44a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x44a1b4: 0xa69821  addu        $s3, $a1, $a2
    ctx->pc = 0x44a1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x44a1b8: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x44a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x44a1bc: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x44a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x44a1c0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x44a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44a1c4: 0x6fa821  addu        $s5, $v1, $t7
    ctx->pc = 0x44a1c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x44a1c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44a1cc: 0x106000d2  beqz        $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x44A1CCu;
    {
        const bool branch_taken_0x44a1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A1CCu;
        // 0x44a1d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a1cc) {
            ctx->pc = 0x44A518u;
            goto label_44a518;
        }
    }
    ctx->pc = 0x44A1D4u;
    // 0x44a1d4: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x44a1d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x44a1d8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x44a1d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a1dc: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x44a1dcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x44a1e0: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x44a1e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x44a1e4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x44a1e4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a1e8:
    // 0x44a1e8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x44a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x44a1ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44a1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a1f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x44a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44a1f4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x44a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x44a1f8: 0x8d3021  addu        $a2, $a0, $t5
    ctx->pc = 0x44a1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x44a1fc: 0x1120002e  beqz        $t1, . + 4 + (0x2E << 2)
    ctx->pc = 0x44A1FCu;
    {
        const bool branch_taken_0x44a1fc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A1FCu;
        // 0x44a200: 0x8cc80000  lw          $t0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a1fc) {
            ctx->pc = 0x44A2B8u;
            goto label_44a2b8;
        }
    }
    ctx->pc = 0x44A204u;
    // 0x44a204: 0x8ee70004  lw          $a3, 0x4($s7)
    ctx->pc = 0x44a204u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x44a208: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x44a208u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a20c: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x44a20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x44a210: 0x19200010  blez        $t1, . + 4 + (0x10 << 2)
    ctx->pc = 0x44A210u;
    {
        const bool branch_taken_0x44a210 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x44A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A210u;
        // 0x44a214: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a210) {
            ctx->pc = 0x44A254u;
            goto label_44a254;
        }
    }
    ctx->pc = 0x44A218u;
    // 0x44a218: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x44A218u;
    {
        const bool branch_taken_0x44a218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A218u;
        // 0x44a21c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a218) {
            ctx->pc = 0x44A270u;
            goto label_44a270;
        }
    }
    ctx->pc = 0x44A220u;
    // 0x44a220: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x44A220u;
    {
        const bool branch_taken_0x44a220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a220) {
            ctx->pc = 0x44A224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A220u;
            // 0x44a224: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A258u;
            goto label_44a258;
        }
    }
    ctx->pc = 0x44A228u;
    // 0x44a228: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x44a228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x44a22c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x44A22Cu;
    {
        const bool branch_taken_0x44a22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a22c) {
            ctx->pc = 0x44A230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A22Cu;
            // 0x44a230: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A248u;
            goto label_44a248;
        }
    }
    ctx->pc = 0x44A234u;
    // 0x44a234: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x44a234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x44a238: 0x10480025  beq         $v0, $t0, . + 4 + (0x25 << 2)
    ctx->pc = 0x44A238u;
    {
        const bool branch_taken_0x44a238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A238u;
        // 0x44a23c: 0x24e4000c  addiu       $a0, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a238) {
            ctx->pc = 0x44A2D0u;
            goto label_44a2d0;
        }
    }
    ctx->pc = 0x44A240u;
    // 0x44a240: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44a240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a244: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44a244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44a248:
    // 0x44a248: 0x10480021  beq         $v0, $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x44A248u;
    {
        const bool branch_taken_0x44a248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A248u;
        // 0x44a24c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a248) {
            ctx->pc = 0x44A2D0u;
            goto label_44a2d0;
        }
    }
    ctx->pc = 0x44A250u;
    // 0x44a250: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x44a250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_44a254:
    // 0x44a254: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44a258:
    // 0x44a258: 0x10480019  beq         $v0, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x44A258u;
    {
        const bool branch_taken_0x44a258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A258u;
        // 0x44a25c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a258) {
            ctx->pc = 0x44A2C0u;
            goto label_44a2c0;
        }
    }
    ctx->pc = 0x44A260u;
    // 0x44a260: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x44a260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x44a264: 0xaa102b  sltu        $v0, $a1, $t2
    ctx->pc = 0x44a264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44a268: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x44A268u;
    {
        const bool branch_taken_0x44a268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A268u;
        // 0x44a26c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a268) {
            ctx->pc = 0x44A2B8u;
            goto label_44a2b8;
        }
    }
    ctx->pc = 0x44A270u;
label_44a270:
    // 0x44a270: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x44a270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a274: 0x0  nop
    ctx->pc = 0x44a274u;
    // NOP
label_44a278:
    // 0x44a278: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44a27c: 0x10480010  beq         $v0, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x44A27Cu;
    {
        const bool branch_taken_0x44a27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A27Cu;
        // 0x44a280: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a27c) {
            ctx->pc = 0x44A2C0u;
            goto label_44a2c0;
        }
    }
    ctx->pc = 0x44A284u;
    // 0x44a284: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x44a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x44a288: 0x10480011  beq         $v0, $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x44A288u;
    {
        const bool branch_taken_0x44a288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A288u;
        // 0x44a28c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a288) {
            ctx->pc = 0x44A2D0u;
            goto label_44a2d0;
        }
    }
    ctx->pc = 0x44A290u;
    // 0x44a290: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x44a290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x44a294: 0x1048000e  beq         $v0, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x44A294u;
    {
        const bool branch_taken_0x44a294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A294u;
        // 0x44a298: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a294) {
            ctx->pc = 0x44A2D0u;
            goto label_44a2d0;
        }
    }
    ctx->pc = 0x44A29Cu;
    // 0x44a29c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x44a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x44a2a0: 0x1048000b  beq         $v0, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x44A2A0u;
    {
        const bool branch_taken_0x44a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A2A0u;
        // 0x44a2a4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a2a0) {
            ctx->pc = 0x44A2D0u;
            goto label_44a2d0;
        }
    }
    ctx->pc = 0x44A2A8u;
    // 0x44a2a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x44a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x44a2ac: 0xaa102b  sltu        $v0, $a1, $t2
    ctx->pc = 0x44a2acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44a2b0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x44A2B0u;
    {
        const bool branch_taken_0x44a2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A2B0u;
        // 0x44a2b4: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a2b0) {
            ctx->pc = 0x44A278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a278;
        }
    }
    ctx->pc = 0x44A2B8u;
label_44a2b8:
    // 0x44a2b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x44a2bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x44a2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_44a2c0:
    // 0x44a2c0: 0x54540007  bnel        $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x44A2C0u;
    {
        const bool branch_taken_0x44a2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x44a2c0) {
            ctx->pc = 0x44A2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A2C0u;
            // 0x44a2c4: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A2E0u;
            goto label_44a2e0;
        }
    }
    ctx->pc = 0x44A2C8u;
    // 0x44a2c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x44A2C8u;
    {
        const bool branch_taken_0x44a2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A2C8u;
        // 0x44a2cc: 0x8ea40008  lw          $a0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a2c8) {
            ctx->pc = 0x44A2ECu;
            goto label_44a2ec;
        }
    }
    ctx->pc = 0x44A2D0u;
label_44a2d0:
    // 0x44a2d0: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x44A2D0u;
    {
        const bool branch_taken_0x44a2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A2D0u;
        // 0x44a2d4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a2d0) {
            ctx->pc = 0x44A2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a2c0;
        }
    }
    ctx->pc = 0x44A2D8u;
label_44a2d8:
    // 0x44a2d8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x44A2D8u;
    {
        const bool branch_taken_0x44a2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A2D8u;
        // 0x44a2dc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a2d8) {
            ctx->pc = 0x44A3F4u;
            goto label_44a3f4;
        }
    }
    ctx->pc = 0x44A2E0u;
label_44a2e0:
    // 0x44a2e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x44a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x44a2e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44a2e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44a2ec:
    // 0x44a2ec: 0x54800060  bnel        $a0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x44A2ECu;
    {
        const bool branch_taken_0x44a2ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a2ec) {
            ctx->pc = 0x44A2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A2ECu;
            // 0x44a2f0: 0x8cca0004  lw          $t2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A470u;
            goto label_44a470;
        }
    }
    ctx->pc = 0x44A2F4u;
    // 0x44a2f4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x44a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x44a2f8: 0x8ccb0020  lw          $t3, 0x20($a2)
    ctx->pc = 0x44a2f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x44a2fc: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x44a2fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44a300: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x44a300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44a304: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x44a304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x44a308: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x44a308u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44a30c: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x44A30Cu;
    {
        const bool branch_taken_0x44a30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A30Cu;
        // 0x44a310: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a30c) {
            ctx->pc = 0x44A3F0u;
            goto label_44a3f0;
        }
    }
    ctx->pc = 0x44A314u;
    // 0x44a314: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x44a314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x44a318: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44a318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a31c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x44A31Cu;
    {
        const bool branch_taken_0x44a31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A31Cu;
        // 0x44a320: 0x8d44000c  lw          $a0, 0xC($t2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a31c) {
            ctx->pc = 0x44A3F0u;
            goto label_44a3f0;
        }
    }
    ctx->pc = 0x44A324u;
    // 0x44a324: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x44a324u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a328: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x44a328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a32c: 0x19200013  blez        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x44A32Cu;
    {
        const bool branch_taken_0x44a32c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x44A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A32Cu;
        // 0x44a330: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a32c) {
            ctx->pc = 0x44A37Cu;
            goto label_44a37c;
        }
    }
    ctx->pc = 0x44A334u;
    // 0x44a334: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x44A334u;
    {
        const bool branch_taken_0x44a334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A334u;
        // 0x44a338: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a334) {
            ctx->pc = 0x44A398u;
            goto label_44a398;
        }
    }
    ctx->pc = 0x44A33Cu;
    // 0x44a33c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x44A33Cu;
    {
        const bool branch_taken_0x44a33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a33c) {
            ctx->pc = 0x44A340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A33Cu;
            // 0x44a340: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A380u;
            goto label_44a380;
        }
    }
    ctx->pc = 0x44A344u;
    // 0x44a344: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x44a344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x44a348: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x44A348u;
    {
        const bool branch_taken_0x44a348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a348) {
            ctx->pc = 0x44A34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A348u;
            // 0x44a34c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A36Cu;
            goto label_44a36c;
        }
    }
    ctx->pc = 0x44A350u;
    // 0x44a350: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44a350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44a354: 0x1048ffe0  beq         $v0, $t0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x44A354u;
    {
        const bool branch_taken_0x44a354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A354u;
        // 0x44a358: 0x24820024  addiu       $v0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a354) {
            ctx->pc = 0x44A2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a2d8;
        }
    }
    ctx->pc = 0x44A35Cu;
    // 0x44a35c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x44a35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a360: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44a360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a364: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x44a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a368: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44a36c:
    // 0x44a36c: 0x1048ffda  beq         $v0, $t0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x44A36Cu;
    {
        const bool branch_taken_0x44a36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A36Cu;
        // 0x44a370: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a36c) {
            ctx->pc = 0x44A2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a2d8;
        }
    }
    ctx->pc = 0x44A374u;
    // 0x44a374: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44a374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44a378: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x44a378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_44a37c:
    // 0x44a37c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44a380:
    // 0x44a380: 0x1048ffd5  beq         $v0, $t0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x44A380u;
    {
        const bool branch_taken_0x44a380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A380u;
        // 0x44a384: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a380) {
            ctx->pc = 0x44A2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a2d8;
        }
    }
    ctx->pc = 0x44A388u;
    // 0x44a388: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x44a388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x44a38c: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x44a38cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x44a390: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x44A390u;
    {
        const bool branch_taken_0x44a390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A390u;
        // 0x44a394: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a390) {
            ctx->pc = 0x44A3F0u;
            goto label_44a3f0;
        }
    }
    ctx->pc = 0x44A398u;
label_44a398:
    // 0x44a398: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x44a398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a39c: 0x0  nop
    ctx->pc = 0x44a39cu;
    // NOP
label_44a3a0:
    // 0x44a3a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44a3a4: 0x10480013  beq         $v0, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x44A3A4u;
    {
        const bool branch_taken_0x44a3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A3A4u;
        // 0x44a3a8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a3a4) {
            ctx->pc = 0x44A3F4u;
            goto label_44a3f4;
        }
    }
    ctx->pc = 0x44A3ACu;
    // 0x44a3ac: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x44a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x44a3b0: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44a3b4: 0x1048ffc8  beq         $v0, $t0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x44A3B4u;
    {
        const bool branch_taken_0x44a3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A3B4u;
        // 0x44a3b8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a3b4) {
            ctx->pc = 0x44A2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a2d8;
        }
    }
    ctx->pc = 0x44A3BCu;
    // 0x44a3bc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x44a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x44a3c0: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44a3c4: 0x1048ffc4  beq         $v0, $t0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x44A3C4u;
    {
        const bool branch_taken_0x44a3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A3C4u;
        // 0x44a3c8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a3c4) {
            ctx->pc = 0x44A2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a2d8;
        }
    }
    ctx->pc = 0x44A3CCu;
    // 0x44a3cc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x44a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x44a3d0: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44a3d4: 0x1048ffc0  beq         $v0, $t0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x44A3D4u;
    {
        const bool branch_taken_0x44a3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x44A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A3D4u;
        // 0x44a3d8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a3d4) {
            ctx->pc = 0x44A2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a2d8;
        }
    }
    ctx->pc = 0x44A3DCu;
    // 0x44a3dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x44a3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x44a3e0: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x44a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x44a3e4: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x44a3e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x44a3e8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x44A3E8u;
    {
        const bool branch_taken_0x44a3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A3E8u;
        // 0x44a3ec: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a3e8) {
            ctx->pc = 0x44A3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a3a0;
        }
    }
    ctx->pc = 0x44A3F0u;
label_44a3f0:
    // 0x44a3f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44a3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a3f4:
    // 0x44a3f4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x44A3F4u;
    {
        const bool branch_taken_0x44a3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a3f4) {
            ctx->pc = 0x44A3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A3F4u;
            // 0x44a3f8: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A410u;
            goto label_44a410;
        }
    }
    ctx->pc = 0x44A3FCu;
    // 0x44a3fc: 0x14d60013  bne         $a2, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x44A3FCu;
    {
        const bool branch_taken_0x44a3fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 22));
        if (branch_taken_0x44a3fc) {
            ctx->pc = 0x44A44Cu;
            goto label_44a44c;
        }
    }
    ctx->pc = 0x44A404u;
    // 0x44a404: 0xac4b0020  sw          $t3, 0x20($v0)
    ctx->pc = 0x44a404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 11));
    // 0x44a408: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x44A408u;
    {
        const bool branch_taken_0x44a408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A408u;
        // 0x44a40c: 0xac560004  sw          $s6, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a408) {
            ctx->pc = 0x44A44Cu;
            goto label_44a44c;
        }
    }
    ctx->pc = 0x44A410u;
label_44a410:
    // 0x44a410: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x44a410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44a414: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x44a414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x44a418: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x44a418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x44a41c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x44a420: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x44a420u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x44a424: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x44a424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x44a428: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x44a428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x44a42c: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x44a42cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x44a430: 0xac4c0008  sw          $t4, 0x8($v0)
    ctx->pc = 0x44a430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 12));
    // 0x44a434: 0xac4a0014  sw          $t2, 0x14($v0)
    ctx->pc = 0x44a434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 10));
    // 0x44a438: 0xac4b0020  sw          $t3, 0x20($v0)
    ctx->pc = 0x44a438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 11));
    // 0x44a43c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x44a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x44a440: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x44a440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x44a444: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x44a444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x44a448: 0xac54001c  sw          $s4, 0x1C($v0)
    ctx->pc = 0x44a448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 20));
label_44a44c:
    // 0x44a44c: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x44A44Cu;
    {
        const bool branch_taken_0x44a44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a44c) {
            ctx->pc = 0x44A450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A44Cu;
            // 0x44a450: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A4FCu;
            goto label_44a4fc;
        }
    }
    ctx->pc = 0x44A454u;
    // 0x44a454: 0xafb60030  sw          $s6, 0x30($sp)
    ctx->pc = 0x44a454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 22));
    // 0x44a458: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44A458u;
    SET_GPR_U32(ctx, 31, 0x44A460u);
    ctx->pc = 0x44A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A458u;
    // 0x44a45c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44A458u, 0x44A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A460u;
label_44a460:
    // 0x44a460: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x44a460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x44a464: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x44A464u;
    {
        const bool branch_taken_0x44a464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A464u;
        // 0x44a468: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a464) {
            ctx->pc = 0x44A6E0u;
            goto label_44a6e0;
        }
    }
    ctx->pc = 0x44A46Cu;
    // 0x44a46c: 0x0  nop
    ctx->pc = 0x44a46cu;
    // NOP
label_44a470:
    // 0x44a470: 0x15560013  bne         $t2, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x44A470u;
    {
        const bool branch_taken_0x44a470 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 22));
        if (branch_taken_0x44a470) {
            ctx->pc = 0x44A4C0u;
            goto label_44a4c0;
        }
    }
    ctx->pc = 0x44A478u;
    // 0x44a478: 0x108a001f  beq         $a0, $t2, . + 4 + (0x1F << 2)
    ctx->pc = 0x44A478u;
    {
        const bool branch_taken_0x44a478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x44A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A478u;
        // 0x44a47c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a478) {
            ctx->pc = 0x44A4F8u;
            goto label_44a4f8;
        }
    }
    ctx->pc = 0x44A480u;
    // 0x44a480: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x44a480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x44a484: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x44a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x44a488: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x44a488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x44a48c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x44a48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44a490: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x44a490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44a494: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x44a494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44a498: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x44a498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44a49c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x44a49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44a4a0: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x44a4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x44a4a4: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44A4A4u;
    SET_GPR_U32(ctx, 31, 0x44A4ACu);
    ctx->pc = 0x44A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A4A4u;
    // 0x44a4a8: 0xafaa0040  sw          $t2, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44A4A4u, 0x44A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A4ACu;
label_44a4ac:
    // 0x44a4ac: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x44a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x44a4b0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x44A4B0u;
    SET_GPR_U32(ctx, 31, 0x44A4B8u);
    ctx->pc = 0x44A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A4B0u;
    // 0x44a4b4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44A4B0u, 0x44A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A4B8u;
label_44a4b8:
    // 0x44a4b8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x44A4B8u;
    {
        const bool branch_taken_0x44a4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A4B8u;
        // 0x44a4bc: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a4b8) {
            ctx->pc = 0x44A728u;
            goto label_44a728;
        }
    }
    ctx->pc = 0x44A4C0u;
label_44a4c0:
    // 0x44a4c0: 0x5499000e  bnel        $a0, $t9, . + 4 + (0xE << 2)
    ctx->pc = 0x44A4C0u;
    {
        const bool branch_taken_0x44a4c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 25));
        if (branch_taken_0x44a4c0) {
            ctx->pc = 0x44A4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A4C0u;
            // 0x44a4c4: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A4FCu;
            goto label_44a4fc;
        }
    }
    ctx->pc = 0x44A4C8u;
    // 0x44a4c8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x44a4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44a4cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x44a4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a4d0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x44a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44a4d4: 0x7fad0070  sq          $t5, 0x70($sp)
    ctx->pc = 0x44a4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 13));
    // 0x44a4d8: 0x7fae0080  sq          $t6, 0x80($sp)
    ctx->pc = 0x44a4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 14));
    // 0x44a4dc: 0x7faf0090  sq          $t7, 0x90($sp)
    ctx->pc = 0x44a4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 15));
    // 0x44a4e0: 0xc112712  jal         func_449C48
    ctx->pc = 0x44A4E0u;
    SET_GPR_U32(ctx, 31, 0x44A4E8u);
    ctx->pc = 0x44A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A4E0u;
    // 0x44a4e4: 0x7fb900a0  sq          $t9, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449C48u, 0x44A4E0u, 0x44A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A4E8u;
label_44a4e8:
    // 0x44a4e8: 0x7bb900a0  lq          $t9, 0xA0($sp)
    ctx->pc = 0x44a4e8u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x44a4ec: 0x7baf0090  lq          $t7, 0x90($sp)
    ctx->pc = 0x44a4ecu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x44a4f0: 0x7bae0080  lq          $t6, 0x80($sp)
    ctx->pc = 0x44a4f0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x44a4f4: 0x7bad0070  lq          $t5, 0x70($sp)
    ctx->pc = 0x44a4f4u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_44a4f8:
    // 0x44a4f8: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x44a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_44a4fc:
    // 0x44a4fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x44a4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x44a500: 0x25ad0024  addiu       $t5, $t5, 0x24
    ctx->pc = 0x44a500u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 36));
    // 0x44a504: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x44a504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44a508: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44a50c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x44a50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44a510: 0x1440ff35  bnez        $v0, . + 4 + (-0xCB << 2)
    ctx->pc = 0x44A510u;
    {
        const bool branch_taken_0x44a510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A510u;
        // 0x44a514: 0x8ee90000  lw          $t1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a510) {
            ctx->pc = 0x44A1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a1e8;
        }
    }
    ctx->pc = 0x44A518u;
label_44a518:
    // 0x44a518: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x44a518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x44a51c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x44a51cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x44a520: 0x25ef000c  addiu       $t7, $t7, 0xC
    ctx->pc = 0x44a520u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12));
    // 0x44a524: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x44a524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44a528: 0x1440ff19  bnez        $v0, . + 4 + (-0xE7 << 2)
    ctx->pc = 0x44A528u;
    {
        const bool branch_taken_0x44a528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A528u;
        // 0x44a52c: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a528) {
            ctx->pc = 0x44A190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a190;
        }
    }
    ctx->pc = 0x44A530u;
label_44a530:
    // 0x44a530: 0x11200074  beqz        $t1, . + 4 + (0x74 << 2)
    ctx->pc = 0x44A530u;
    {
        const bool branch_taken_0x44a530 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A530u;
        // 0x44a534: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a530) {
            ctx->pc = 0x44A704u;
            goto label_44a704;
        }
    }
    ctx->pc = 0x44A538u;
    // 0x44a538: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x44a538u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x44a53c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x44a53cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a540: 0x24100024  addiu       $s0, $zero, 0x24
    ctx->pc = 0x44a540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44a544: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x44a544u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x44a548: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x44a548u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a54c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x44a54cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a550:
    // 0x44a550: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x44a550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x44a554: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x44a554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x44a558: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x44a558u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44a55c: 0x51400064  beql        $t2, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x44A55Cu;
    {
        const bool branch_taken_0x44a55c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a55c) {
            ctx->pc = 0x44A560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A55Cu;
            // 0x44a560: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A6F0u;
            goto label_44a6f0;
        }
    }
    ctx->pc = 0x44A564u;
    // 0x44a564: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x44a564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x44a568: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x44a568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x44a56c: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x44a56cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44a570: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x44a570u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44a574: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x44a574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x44a578: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x44a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x44a57c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x44A57Cu;
    {
        const bool branch_taken_0x44a57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A57Cu;
        // 0x44a580: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a57c) {
            ctx->pc = 0x44A658u;
            goto label_44a658;
        }
    }
    ctx->pc = 0x44A584u;
    // 0x44a584: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x44a584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x44a588: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x44A588u;
    {
        const bool branch_taken_0x44a588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A588u;
        // 0x44a58c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a588) {
            ctx->pc = 0x44A658u;
            goto label_44a658;
        }
    }
    ctx->pc = 0x44A590u;
    // 0x44a590: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x44a590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a594: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x44a594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a598: 0x19000013  blez        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x44A598u;
    {
        const bool branch_taken_0x44a598 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x44A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A598u;
        // 0x44a59c: 0x31050003  andi        $a1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a598) {
            ctx->pc = 0x44A5E8u;
            goto label_44a5e8;
        }
    }
    ctx->pc = 0x44A5A0u;
    // 0x44a5a0: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x44A5A0u;
    {
        const bool branch_taken_0x44a5a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A5A0u;
        // 0x44a5a4: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a5a0) {
            ctx->pc = 0x44A604u;
            goto label_44a604;
        }
    }
    ctx->pc = 0x44A5A8u;
    // 0x44a5a8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x44A5A8u;
    {
        const bool branch_taken_0x44a5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a5a8) {
            ctx->pc = 0x44A5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A5A8u;
            // 0x44a5ac: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A5ECu;
            goto label_44a5ec;
        }
    }
    ctx->pc = 0x44A5B0u;
    // 0x44a5b0: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x44a5b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x44a5b4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x44A5B4u;
    {
        const bool branch_taken_0x44a5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a5b4) {
            ctx->pc = 0x44A5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A5B4u;
            // 0x44a5b8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A5D8u;
            goto label_44a5d8;
        }
    }
    ctx->pc = 0x44A5BCu;
    // 0x44a5bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44a5c0: 0x1047002e  beq         $v0, $a3, . + 4 + (0x2E << 2)
    ctx->pc = 0x44A5C0u;
    {
        const bool branch_taken_0x44a5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A5C0u;
        // 0x44a5c4: 0x24820024  addiu       $v0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a5c0) {
            ctx->pc = 0x44A67Cu;
            goto label_44a67c;
        }
    }
    ctx->pc = 0x44A5C8u;
    // 0x44a5c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a5cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x44a5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a5d0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x44a5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a5d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x44a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44a5d8:
    // 0x44a5d8: 0x10470028  beq         $v0, $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x44A5D8u;
    {
        const bool branch_taken_0x44a5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A5D8u;
        // 0x44a5dc: 0x24c60024  addiu       $a2, $a2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a5d8) {
            ctx->pc = 0x44A67Cu;
            goto label_44a67c;
        }
    }
    ctx->pc = 0x44A5E0u;
    // 0x44a5e0: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44a5e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_44a5e8:
    // 0x44a5e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x44a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44a5ec:
    // 0x44a5ec: 0x10470023  beq         $v0, $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x44A5ECu;
    {
        const bool branch_taken_0x44a5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A5ECu;
        // 0x44a5f0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a5ec) {
            ctx->pc = 0x44A67Cu;
            goto label_44a67c;
        }
    }
    ctx->pc = 0x44A5F4u;
    // 0x44a5f4: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x44a5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x44a5f8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x44a5f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x44a5fc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x44A5FCu;
    {
        const bool branch_taken_0x44a5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A5FCu;
        // 0x44a600: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a5fc) {
            ctx->pc = 0x44A658u;
            goto label_44a658;
        }
    }
    ctx->pc = 0x44A604u;
label_44a604:
    // 0x44a604: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x44a604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_44a608:
    // 0x44a608: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44a608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44a60c: 0x10470013  beq         $v0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x44A60Cu;
    {
        const bool branch_taken_0x44a60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A60Cu;
        // 0x44a610: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a60c) {
            ctx->pc = 0x44A65Cu;
            goto label_44a65c;
        }
    }
    ctx->pc = 0x44A614u;
    // 0x44a614: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x44a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x44a618: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44a618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44a61c: 0x10470017  beq         $v0, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x44A61Cu;
    {
        const bool branch_taken_0x44a61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A61Cu;
        // 0x44a620: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a61c) {
            ctx->pc = 0x44A67Cu;
            goto label_44a67c;
        }
    }
    ctx->pc = 0x44A624u;
    // 0x44a624: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x44a624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x44a628: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44a628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44a62c: 0x10470013  beq         $v0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x44A62Cu;
    {
        const bool branch_taken_0x44a62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A62Cu;
        // 0x44a630: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a62c) {
            ctx->pc = 0x44A67Cu;
            goto label_44a67c;
        }
    }
    ctx->pc = 0x44A634u;
    // 0x44a634: 0x8ca2006c  lw          $v0, 0x6C($a1)
    ctx->pc = 0x44a634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x44a638: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x44a638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x44a63c: 0x1047000f  beq         $v0, $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x44A63Cu;
    {
        const bool branch_taken_0x44a63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x44A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A63Cu;
        // 0x44a640: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a63c) {
            ctx->pc = 0x44A67Cu;
            goto label_44a67c;
        }
    }
    ctx->pc = 0x44A644u;
    // 0x44a644: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x44a644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x44a648: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x44a648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x44a64c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x44a64cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x44a650: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x44A650u;
    {
        const bool branch_taken_0x44a650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A650u;
        // 0x44a654: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a650) {
            ctx->pc = 0x44A608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a608;
        }
    }
    ctx->pc = 0x44A658u;
label_44a658:
    // 0x44a658: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44a658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a65c:
    // 0x44a65c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x44A65Cu;
    {
        const bool branch_taken_0x44a65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a65c) {
            ctx->pc = 0x44A660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A65Cu;
            // 0x44a660: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A684u;
            goto label_44a684;
        }
    }
    ctx->pc = 0x44A664u;
    // 0x44a664: 0x154c0016  bne         $t2, $t4, . + 4 + (0x16 << 2)
    ctx->pc = 0x44A664u;
    {
        const bool branch_taken_0x44a664 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x44a664) {
            ctx->pc = 0x44A6C0u;
            goto label_44a6c0;
        }
    }
    ctx->pc = 0x44A66Cu;
    // 0x44a66c: 0xac4c0004  sw          $t4, 0x4($v0)
    ctx->pc = 0x44a66cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 12));
    // 0x44a670: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x44a670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x44a674: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x44A674u;
    {
        const bool branch_taken_0x44a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A674u;
        // 0x44a678: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a674) {
            ctx->pc = 0x44A6C0u;
            goto label_44a6c0;
        }
    }
    ctx->pc = 0x44A67Cu;
label_44a67c:
    // 0x44a67c: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x44A67Cu;
    {
        const bool branch_taken_0x44a67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A67Cu;
        // 0x44a680: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a67c) {
            ctx->pc = 0x44A65Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a65c;
        }
    }
    ctx->pc = 0x44A684u;
label_44a684:
    // 0x44a684: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x44a684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x44a688: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x44a688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x44a68c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x44a690: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x44a690u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x44a694: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x44a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x44a698: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x44a698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x44a69c: 0xac4a0004  sw          $t2, 0x4($v0)
    ctx->pc = 0x44a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 10));
    // 0x44a6a0: 0xac4f0008  sw          $t7, 0x8($v0)
    ctx->pc = 0x44a6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 15));
    // 0x44a6a4: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x44a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x44a6a8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x44a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x44a6ac: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x44a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x44a6b0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x44a6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x44a6b4: 0xac4b001c  sw          $t3, 0x1C($v0)
    ctx->pc = 0x44a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 11));
    // 0x44a6b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x44a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x44a6bc: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x44a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
label_44a6c0:
    // 0x44a6c0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x44A6C0u;
    {
        const bool branch_taken_0x44a6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a6c0) {
            ctx->pc = 0x44A6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A6C0u;
            // 0x44a6c4: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A6F0u;
            goto label_44a6f0;
        }
    }
    ctx->pc = 0x44A6C8u;
    // 0x44a6c8: 0xafac0050  sw          $t4, 0x50($sp)
    ctx->pc = 0x44a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 12));
    // 0x44a6cc: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x44A6CCu;
    SET_GPR_U32(ctx, 31, 0x44A6D4u);
    ctx->pc = 0x44A6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A6CCu;
    // 0x44a6d0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44A6CCu, 0x44A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A6D4u;
label_44a6d4:
    // 0x44a6d4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x44a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x44a6d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x44a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x44a6dc: 0x0  nop
    ctx->pc = 0x44a6dcu;
    // NOP
label_44a6e0:
    // 0x44a6e0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x44A6E0u;
    SET_GPR_U32(ctx, 31, 0x44A6E8u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44A6E0u, 0x44A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A6E8u;
label_44a6e8:
    // 0x44a6e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x44A6E8u;
    {
        const bool branch_taken_0x44a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A6E8u;
        // 0x44a6ec: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a6e8) {
            ctx->pc = 0x44A728u;
            goto label_44a728;
        }
    }
    ctx->pc = 0x44A6F0u;
label_44a6f0:
    // 0x44a6f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x44a6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x44a6f4: 0x25ce000c  addiu       $t6, $t6, 0xC
    ctx->pc = 0x44a6f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12));
    // 0x44a6f8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x44a6f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44a6fc: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x44A6FCu;
    {
        const bool branch_taken_0x44a6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A6FCu;
        // 0x44a700: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a6fc) {
            ctx->pc = 0x44A550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a550;
        }
    }
    ctx->pc = 0x44A704u;
label_44a704:
    // 0x44a704: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x44a704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x44a708: 0x2652ffd8  addiu       $s2, $s2, -0x28
    ctx->pc = 0x44a708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967256));
    // 0x44a70c: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x44a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x44a710: 0x24a5ffd8  addiu       $a1, $a1, -0x28
    ctx->pc = 0x44a710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967256));
    // 0x44a714: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x44a714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x44a718: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x44a718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x44a71c: 0x1440fe3c  bnez        $v0, . + 4 + (-0x1C4 << 2)
    ctx->pc = 0x44A71Cu;
    {
        const bool branch_taken_0x44a71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A71Cu;
        // 0x44a720: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a71c) {
            ctx->pc = 0x44A010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a010;
        }
    }
    ctx->pc = 0x44A724u;
    // 0x44a724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44a724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a728:
    // 0x44a728: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x44a728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x44a72c: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x44a72cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x44a730: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x44a730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x44a734: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x44a734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x44a738: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x44a738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x44a73c: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x44a73cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x44a740: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x44a740u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x44a744: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x44a744u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x44a748: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x44a748u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x44a74c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x44a74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x44a750: 0x3e00008  jr          $ra
    ctx->pc = 0x44A750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A750u;
        // 0x44a754: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44A750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44A758u;
}
