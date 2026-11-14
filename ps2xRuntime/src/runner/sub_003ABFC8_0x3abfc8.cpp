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

// Function: sub_003ABFC8
// Address: 0x3abfc8 - 0x3ac0c8
void sub_003ABFC8_0x3abfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABFC8_0x3abfc8");
#endif

    switch (ctx->pc) {
        case 0x3abfc8u: goto label_3abfc8;
        case 0x3abfccu: goto label_3abfcc;
        case 0x3abfd0u: goto label_3abfd0;
        case 0x3abfd4u: goto label_3abfd4;
        case 0x3abfd8u: goto label_3abfd8;
        case 0x3abfdcu: goto label_3abfdc;
        case 0x3abfe0u: goto label_3abfe0;
        case 0x3abfe4u: goto label_3abfe4;
        case 0x3abfe8u: goto label_3abfe8;
        case 0x3abfecu: goto label_3abfec;
        case 0x3abff0u: goto label_3abff0;
        case 0x3abff4u: goto label_3abff4;
        case 0x3abff8u: goto label_3abff8;
        case 0x3abffcu: goto label_3abffc;
        case 0x3ac000u: goto label_3ac000;
        case 0x3ac004u: goto label_3ac004;
        case 0x3ac008u: goto label_3ac008;
        case 0x3ac00cu: goto label_3ac00c;
        case 0x3ac010u: goto label_3ac010;
        case 0x3ac014u: goto label_3ac014;
        case 0x3ac018u: goto label_3ac018;
        case 0x3ac01cu: goto label_3ac01c;
        case 0x3ac020u: goto label_3ac020;
        case 0x3ac024u: goto label_3ac024;
        case 0x3ac028u: goto label_3ac028;
        case 0x3ac02cu: goto label_3ac02c;
        case 0x3ac030u: goto label_3ac030;
        case 0x3ac034u: goto label_3ac034;
        case 0x3ac038u: goto label_3ac038;
        case 0x3ac03cu: goto label_3ac03c;
        case 0x3ac040u: goto label_3ac040;
        case 0x3ac044u: goto label_3ac044;
        case 0x3ac048u: goto label_3ac048;
        case 0x3ac04cu: goto label_3ac04c;
        case 0x3ac050u: goto label_3ac050;
        case 0x3ac054u: goto label_3ac054;
        case 0x3ac058u: goto label_3ac058;
        case 0x3ac05cu: goto label_3ac05c;
        case 0x3ac060u: goto label_3ac060;
        case 0x3ac064u: goto label_3ac064;
        case 0x3ac068u: goto label_3ac068;
        case 0x3ac06cu: goto label_3ac06c;
        case 0x3ac070u: goto label_3ac070;
        case 0x3ac074u: goto label_3ac074;
        case 0x3ac078u: goto label_3ac078;
        case 0x3ac07cu: goto label_3ac07c;
        case 0x3ac080u: goto label_3ac080;
        case 0x3ac084u: goto label_3ac084;
        case 0x3ac088u: goto label_3ac088;
        case 0x3ac08cu: goto label_3ac08c;
        case 0x3ac090u: goto label_3ac090;
        case 0x3ac094u: goto label_3ac094;
        case 0x3ac098u: goto label_3ac098;
        case 0x3ac09cu: goto label_3ac09c;
        case 0x3ac0a0u: goto label_3ac0a0;
        case 0x3ac0a4u: goto label_3ac0a4;
        case 0x3ac0a8u: goto label_3ac0a8;
        case 0x3ac0acu: goto label_3ac0ac;
        case 0x3ac0b0u: goto label_3ac0b0;
        case 0x3ac0b4u: goto label_3ac0b4;
        case 0x3ac0b8u: goto label_3ac0b8;
        case 0x3ac0bcu: goto label_3ac0bc;
        case 0x3ac0c0u: goto label_3ac0c0;
        case 0x3ac0c4u: goto label_3ac0c4;
        default: break;
    }

    ctx->pc = 0x3abfc8u;

label_3abfc8:
    // 0x3abfc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3abfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3abfcc:
    // 0x3abfcc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3abfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3abfd0:
    // 0x3abfd0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3abfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3abfd4:
    // 0x3abfd4: 0x2443ce80  addiu       $v1, $v0, -0x3180
    ctx->pc = 0x3abfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3abfd8:
    // 0x3abfd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3abfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3abfdc:
    // 0x3abfdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3abfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3abfe0:
    // 0x3abfe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3abfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3abfe4:
    // 0x3abfe4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3abfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3abfe8:
    // 0x3abfe8: 0x8c700518  lw          $s0, 0x518($v1)
    ctx->pc = 0x3abfe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1304)));
label_3abfec:
    // 0x3abfec: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_3abff0:
    if (ctx->pc == 0x3ABFF0u) {
        ctx->pc = 0x3ABFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFECu;
        // 0x3abff0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABFF4u;
        goto label_3abff4;
    }
    ctx->pc = 0x3ABFECu;
    {
        const bool branch_taken_0x3abfec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFECu;
        // 0x3abff0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abfec) {
            ctx->pc = 0x3AC038u;
            goto label_3ac038;
        }
    }
    ctx->pc = 0x3ABFF4u;
label_3abff4:
    // 0x3abff4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3abff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3abff8:
    // 0x3abff8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x3abff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3abffc:
    // 0x3abffc: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x3abffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3ac000:
    // 0x3ac000: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x3ac000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_3ac004:
    // 0x3ac004: 0x0  nop
    ctx->pc = 0x3ac004u;
    // NOP
label_3ac008:
    // 0x3ac008: 0x40f809  jalr        $v0
label_3ac00c:
    if (ctx->pc == 0x3AC00Cu) {
        ctx->pc = 0x3AC00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC008u;
        // 0x3ac00c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC010u;
        goto label_3ac010;
    }
    ctx->pc = 0x3AC008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC010u);
        ctx->pc = 0x3AC00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC008u;
        // 0x3ac00c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC008u, 0x3AC010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC010u;
label_3ac010:
    // 0x3ac010: 0xc0eb360  jal         func_3ACD80
label_3ac014:
    if (ctx->pc == 0x3AC014u) {
        ctx->pc = 0x3AC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC010u;
        // 0x3ac014: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC018u;
        goto label_3ac018;
    }
    ctx->pc = 0x3AC010u;
    SET_GPR_U32(ctx, 31, 0x3AC018u);
    ctx->pc = 0x3AC014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC010u;
    // 0x3ac014: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACD80u, 0x3AC010u, 0x3AC018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC018u;
label_3ac018:
    // 0x3ac018: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3ac018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3ac01c:
    // 0x3ac01c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ac01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac020:
    // 0x3ac020: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x3ac020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_3ac024:
    // 0x3ac024: 0x8e440514  lw          $a0, 0x514($s2)
    ctx->pc = 0x3ac024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1300)));
label_3ac028:
    // 0x3ac028: 0x40f809  jalr        $v0
label_3ac02c:
    if (ctx->pc == 0x3AC02Cu) {
        ctx->pc = 0x3AC02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC028u;
        // 0x3ac02c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC030u;
        goto label_3ac030;
    }
    ctx->pc = 0x3AC028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC030u);
        ctx->pc = 0x3AC02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC028u;
        // 0x3ac02c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC028u, 0x3AC030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC030u;
label_3ac030:
    // 0x3ac030: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
label_3ac034:
    if (ctx->pc == 0x3AC034u) {
        ctx->pc = 0x3AC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC030u;
        // 0x3ac034: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC038u;
        goto label_3ac038;
    }
    ctx->pc = 0x3AC030u;
    {
        const bool branch_taken_0x3ac030 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac030) {
            ctx->pc = 0x3AC034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC030u;
            // 0x3ac034: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac008;
        }
    }
    ctx->pc = 0x3AC038u;
label_3ac038:
    // 0x3ac038: 0x2670ce80  addiu       $s0, $s3, -0x3180
    ctx->pc = 0x3ac038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954624));
label_3ac03c:
    // 0x3ac03c: 0x8e04051c  lw          $a0, 0x51C($s0)
    ctx->pc = 0x3ac03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1308)));
label_3ac040:
    // 0x3ac040: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3ac044:
    if (ctx->pc == 0x3AC044u) {
        ctx->pc = 0x3AC044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC040u;
        // 0x3ac044: 0xae000518  sw          $zero, 0x518($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC048u;
        goto label_3ac048;
    }
    ctx->pc = 0x3AC040u;
    {
        const bool branch_taken_0x3ac040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC040u;
        // 0x3ac044: 0xae000518  sw          $zero, 0x518($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac040) {
            ctx->pc = 0x3AC050u;
            goto label_3ac050;
        }
    }
    ctx->pc = 0x3AC048u;
label_3ac048:
    // 0x3ac048: 0xc1081de  jal         func_420778
label_3ac04c:
    if (ctx->pc == 0x3AC04Cu) {
        ctx->pc = 0x3AC050u;
        goto label_3ac050;
    }
    ctx->pc = 0x3AC048u;
    SET_GPR_U32(ctx, 31, 0x3AC050u);
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x3AC048u, 0x3AC050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC050u;
label_3ac050:
    // 0x3ac050: 0x8e040514  lw          $a0, 0x514($s0)
    ctx->pc = 0x3ac050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1300)));
label_3ac054:
    // 0x3ac054: 0xae00051c  sw          $zero, 0x51C($s0)
    ctx->pc = 0x3ac054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1308), GPR_U32(ctx, 0));
label_3ac058:
    // 0x3ac058: 0xc104284  jal         func_410A10
label_3ac05c:
    if (ctx->pc == 0x3AC05Cu) {
        ctx->pc = 0x3AC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC058u;
        // 0x3ac05c: 0xae000520  sw          $zero, 0x520($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC060u;
        goto label_3ac060;
    }
    ctx->pc = 0x3AC058u;
    SET_GPR_U32(ctx, 31, 0x3AC060u);
    ctx->pc = 0x3AC05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC058u;
    // 0x3ac05c: 0xae000520  sw          $zero, 0x520($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x3AC058u, 0x3AC060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC060u;
label_3ac060:
    // 0x3ac060: 0x8e040508  lw          $a0, 0x508($s0)
    ctx->pc = 0x3ac060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1288)));
label_3ac064:
    // 0x3ac064: 0xc104284  jal         func_410A10
label_3ac068:
    if (ctx->pc == 0x3AC068u) {
        ctx->pc = 0x3AC068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC064u;
        // 0x3ac068: 0xae000514  sw          $zero, 0x514($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC06Cu;
        goto label_3ac06c;
    }
    ctx->pc = 0x3AC064u;
    SET_GPR_U32(ctx, 31, 0x3AC06Cu);
    ctx->pc = 0x3AC068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC064u;
    // 0x3ac068: 0xae000514  sw          $zero, 0x514($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1300), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x3AC064u, 0x3AC06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC06Cu;
label_3ac06c:
    // 0x3ac06c: 0x8e040d74  lw          $a0, 0xD74($s0)
    ctx->pc = 0x3ac06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_3ac070:
    // 0x3ac070: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3ac074:
    if (ctx->pc == 0x3AC074u) {
        ctx->pc = 0x3AC074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC070u;
        // 0x3ac074: 0xae000508  sw          $zero, 0x508($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC078u;
        goto label_3ac078;
    }
    ctx->pc = 0x3AC070u;
    {
        const bool branch_taken_0x3ac070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC070u;
        // 0x3ac074: 0xae000508  sw          $zero, 0x508($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac070) {
            ctx->pc = 0x3AC088u;
            goto label_3ac088;
        }
    }
    ctx->pc = 0x3AC078u;
label_3ac078:
    // 0x3ac078: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3ac078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3ac07c:
    // 0x3ac07c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3ac07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3ac080:
    // 0x3ac080: 0x40f809  jalr        $v0
label_3ac084:
    if (ctx->pc == 0x3AC084u) {
        ctx->pc = 0x3AC088u;
        goto label_3ac088;
    }
    ctx->pc = 0x3AC080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC088u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC080u, 0x3AC088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC088u;
label_3ac088:
    // 0x3ac088: 0x8e04050c  lw          $a0, 0x50C($s0)
    ctx->pc = 0x3ac088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1292)));
label_3ac08c:
    // 0x3ac08c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3ac090:
    if (ctx->pc == 0x3AC090u) {
        ctx->pc = 0x3AC090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC08Cu;
        // 0x3ac090: 0xae000d74  sw          $zero, 0xD74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC094u;
        goto label_3ac094;
    }
    ctx->pc = 0x3AC08Cu;
    {
        const bool branch_taken_0x3ac08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC08Cu;
        // 0x3ac090: 0xae000d74  sw          $zero, 0xD74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac08c) {
            ctx->pc = 0x3AC0A4u;
            goto label_3ac0a4;
        }
    }
    ctx->pc = 0x3AC094u;
label_3ac094:
    // 0x3ac094: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3ac094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3ac098:
    // 0x3ac098: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3ac098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3ac09c:
    // 0x3ac09c: 0x40f809  jalr        $v0
label_3ac0a0:
    if (ctx->pc == 0x3AC0A0u) {
        ctx->pc = 0x3AC0A4u;
        goto label_3ac0a4;
    }
    ctx->pc = 0x3AC09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC0A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC09Cu, 0x3AC0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC0A4u;
label_3ac0a4:
    // 0x3ac0a4: 0xae000510  sw          $zero, 0x510($s0)
    ctx->pc = 0x3ac0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1296), GPR_U32(ctx, 0));
label_3ac0a8:
    // 0x3ac0a8: 0xae00050c  sw          $zero, 0x50C($s0)
    ctx->pc = 0x3ac0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1292), GPR_U32(ctx, 0));
label_3ac0ac:
    // 0x3ac0ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3ac0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ac0b0:
    // 0x3ac0b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3ac0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ac0b4:
    // 0x3ac0b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ac0b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ac0b8:
    // 0x3ac0b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3ac0b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac0bc:
    // 0x3ac0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ac0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac0c0:
    // 0x3ac0c0: 0x3e00008  jr          $ra
label_3ac0c4:
    if (ctx->pc == 0x3AC0C4u) {
        ctx->pc = 0x3AC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC0C0u;
        // 0x3ac0c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC0C8u;
        goto label_fallthrough_0x3ac0c0;
    }
    ctx->pc = 0x3AC0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC0C0u;
        // 0x3ac0c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ac0c0:
    ctx->pc = 0x3AC0C8u;
}
