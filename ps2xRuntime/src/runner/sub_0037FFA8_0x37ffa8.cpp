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

// Function: sub_0037FFA8
// Address: 0x37ffa8 - 0x3800d0
void sub_0037FFA8_0x37ffa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FFA8_0x37ffa8");
#endif

    switch (ctx->pc) {
        case 0x37ffa8u: goto label_37ffa8;
        case 0x37ffacu: goto label_37ffac;
        case 0x37ffb0u: goto label_37ffb0;
        case 0x37ffb4u: goto label_37ffb4;
        case 0x37ffb8u: goto label_37ffb8;
        case 0x37ffbcu: goto label_37ffbc;
        case 0x37ffc0u: goto label_37ffc0;
        case 0x37ffc4u: goto label_37ffc4;
        case 0x37ffc8u: goto label_37ffc8;
        case 0x37ffccu: goto label_37ffcc;
        case 0x37ffd0u: goto label_37ffd0;
        case 0x37ffd4u: goto label_37ffd4;
        case 0x37ffd8u: goto label_37ffd8;
        case 0x37ffdcu: goto label_37ffdc;
        case 0x37ffe0u: goto label_37ffe0;
        case 0x37ffe4u: goto label_37ffe4;
        case 0x37ffe8u: goto label_37ffe8;
        case 0x37ffecu: goto label_37ffec;
        case 0x37fff0u: goto label_37fff0;
        case 0x37fff4u: goto label_37fff4;
        case 0x37fff8u: goto label_37fff8;
        case 0x37fffcu: goto label_37fffc;
        case 0x380000u: goto label_380000;
        case 0x380004u: goto label_380004;
        case 0x380008u: goto label_380008;
        case 0x38000cu: goto label_38000c;
        case 0x380010u: goto label_380010;
        case 0x380014u: goto label_380014;
        case 0x380018u: goto label_380018;
        case 0x38001cu: goto label_38001c;
        case 0x380020u: goto label_380020;
        case 0x380024u: goto label_380024;
        case 0x380028u: goto label_380028;
        case 0x38002cu: goto label_38002c;
        case 0x380030u: goto label_380030;
        case 0x380034u: goto label_380034;
        case 0x380038u: goto label_380038;
        case 0x38003cu: goto label_38003c;
        case 0x380040u: goto label_380040;
        case 0x380044u: goto label_380044;
        case 0x380048u: goto label_380048;
        case 0x38004cu: goto label_38004c;
        case 0x380050u: goto label_380050;
        case 0x380054u: goto label_380054;
        case 0x380058u: goto label_380058;
        case 0x38005cu: goto label_38005c;
        case 0x380060u: goto label_380060;
        case 0x380064u: goto label_380064;
        case 0x380068u: goto label_380068;
        case 0x38006cu: goto label_38006c;
        case 0x380070u: goto label_380070;
        case 0x380074u: goto label_380074;
        case 0x380078u: goto label_380078;
        case 0x38007cu: goto label_38007c;
        case 0x380080u: goto label_380080;
        case 0x380084u: goto label_380084;
        case 0x380088u: goto label_380088;
        case 0x38008cu: goto label_38008c;
        case 0x380090u: goto label_380090;
        case 0x380094u: goto label_380094;
        case 0x380098u: goto label_380098;
        case 0x38009cu: goto label_38009c;
        case 0x3800a0u: goto label_3800a0;
        case 0x3800a4u: goto label_3800a4;
        case 0x3800a8u: goto label_3800a8;
        case 0x3800acu: goto label_3800ac;
        case 0x3800b0u: goto label_3800b0;
        case 0x3800b4u: goto label_3800b4;
        case 0x3800b8u: goto label_3800b8;
        case 0x3800bcu: goto label_3800bc;
        case 0x3800c0u: goto label_3800c0;
        case 0x3800c4u: goto label_3800c4;
        case 0x3800c8u: goto label_3800c8;
        case 0x3800ccu: goto label_3800cc;
        default: break;
    }

    ctx->pc = 0x37ffa8u;

label_37ffa8:
    // 0x37ffa8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x37ffa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_37ffac:
    // 0x37ffac: 0x8f82a8f8  lw          $v0, -0x5708($gp)
    ctx->pc = 0x37ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945016)));
label_37ffb0:
    // 0x37ffb0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x37ffb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_37ffb4:
    // 0x37ffb4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x37ffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_37ffb8:
    // 0x37ffb8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x37ffb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37ffbc:
    // 0x37ffbc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x37ffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_37ffc0:
    // 0x37ffc0: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x37ffc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_37ffc4:
    // 0x37ffc4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x37ffc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_37ffc8:
    // 0x37ffc8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x37ffc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_37ffcc:
    // 0x37ffcc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x37ffccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_37ffd0:
    // 0x37ffd0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x37ffd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_37ffd4:
    // 0x37ffd4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x37ffd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_37ffd8:
    // 0x37ffd8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x37ffd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_37ffdc:
    // 0x37ffdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37ffe0:
    // 0x37ffe0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x37ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37ffe4:
    // 0x37ffe4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_37ffe8:
    if (ctx->pc == 0x37FFE8u) {
        ctx->pc = 0x37FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FFE4u;
        // 0x37ffe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37FFECu;
        goto label_37ffec;
    }
    ctx->pc = 0x37FFE4u;
    {
        const bool branch_taken_0x37ffe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FFE4u;
        // 0x37ffe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ffe4) {
            ctx->pc = 0x38009Cu;
            goto label_38009c;
        }
    }
    ctx->pc = 0x37FFECu;
label_37ffec:
    // 0x37ffec: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_37fff0:
    if (ctx->pc == 0x37FFF0u) {
        ctx->pc = 0x37FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FFECu;
        // 0x37fff0: 0x3c1e0062  lui         $fp, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37FFF4u;
        goto label_37fff4;
    }
    ctx->pc = 0x37FFECu;
    {
        const bool branch_taken_0x37ffec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FFECu;
        // 0x37fff0: 0x3c1e0062  lui         $fp, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ffec) {
            ctx->pc = 0x380084u;
            goto label_380084;
        }
    }
    ctx->pc = 0x37FFF4u;
label_37fff4:
    // 0x37fff4: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x37fff4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_37fff8:
    // 0x37fff8: 0x27d6e880  addiu       $s6, $fp, -0x1780
    ctx->pc = 0x37fff8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_37fffc:
    // 0x37fffc: 0x0  nop
    ctx->pc = 0x37fffcu;
    // NOP
label_380000:
    // 0x380000: 0xb72018  mult        $a0, $a1, $s7
    ctx->pc = 0x380000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_380004:
    // 0x380004: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x380004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_380008:
    // 0x380008: 0x24b40001  addiu       $s4, $a1, 0x1
    ctx->pc = 0x380008u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_38000c:
    // 0x38000c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x38000cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_380010:
    // 0x380010: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x380010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_380014:
    // 0x380014: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_380018:
    if (ctx->pc == 0x380018u) {
        ctx->pc = 0x380018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380014u;
        // 0x380018: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38001Cu;
        goto label_38001c;
    }
    ctx->pc = 0x380014u;
    {
        const bool branch_taken_0x380014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380014u;
        // 0x380018: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380014) {
            ctx->pc = 0x38005Cu;
            goto label_38005c;
        }
    }
    ctx->pc = 0x38001Cu;
label_38001c:
    // 0x38001c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38001cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_380020:
    // 0x380020: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x380020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_380024:
    // 0x380024: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x380024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_380028:
    // 0x380028: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x380028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38002c:
    // 0x38002c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_380030:
    if (ctx->pc == 0x380030u) {
        ctx->pc = 0x380030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38002Cu;
        // 0x380030: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380034u;
        goto label_380034;
    }
    ctx->pc = 0x38002Cu;
    {
        const bool branch_taken_0x38002c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38002c) {
            ctx->pc = 0x380030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38002Cu;
            // 0x380030: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38004Cu;
            goto label_38004c;
        }
    }
    ctx->pc = 0x380034u;
label_380034:
    // 0x380034: 0xc10822c  jal         func_4208B0
label_380038:
    if (ctx->pc == 0x380038u) {
        ctx->pc = 0x38003Cu;
        goto label_38003c;
    }
    ctx->pc = 0x380034u;
    SET_GPR_U32(ctx, 31, 0x38003Cu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x380034u, 0x38003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38003Cu;
label_38003c:
    // 0x38003c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x38003cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_380040:
    // 0x380040: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x380040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_380044:
    // 0x380044: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x380044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_380048:
    // 0x380048: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x380048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38004c:
    // 0x38004c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x38004cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_380050:
    // 0x380050: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x380050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_380054:
    // 0x380054: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_380058:
    if (ctx->pc == 0x380058u) {
        ctx->pc = 0x380058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380054u;
        // 0x380058: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38005Cu;
        goto label_38005c;
    }
    ctx->pc = 0x380054u;
    {
        const bool branch_taken_0x380054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380054u;
        // 0x380058: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380054) {
            ctx->pc = 0x380020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380020;
        }
    }
    ctx->pc = 0x38005Cu;
label_38005c:
    // 0x38005c: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x38005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_380060:
    // 0x380060: 0x40f809  jalr        $v0
label_380064:
    if (ctx->pc == 0x380064u) {
        ctx->pc = 0x380064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380060u;
        // 0x380064: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380068u;
        goto label_380068;
    }
    ctx->pc = 0x380060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x380068u);
        ctx->pc = 0x380064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380060u;
        // 0x380064: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380060u, 0x380068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x380068u;
label_380068:
    // 0x380068: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x380068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_38006c:
    // 0x38006c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38006cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_380070:
    // 0x380070: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x380070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_380074:
    // 0x380074: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x380074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_380078:
    // 0x380078: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x380078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38007c:
    // 0x38007c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_380080:
    if (ctx->pc == 0x380080u) {
        ctx->pc = 0x380080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38007Cu;
        // 0x380080: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380084u;
        goto label_380084;
    }
    ctx->pc = 0x38007Cu;
    {
        const bool branch_taken_0x38007c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38007Cu;
        // 0x380080: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38007c) {
            ctx->pc = 0x380000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380000;
        }
    }
    ctx->pc = 0x380084u;
label_380084:
    // 0x380084: 0x27c3e880  addiu       $v1, $fp, -0x1780
    ctx->pc = 0x380084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_380088:
    // 0x380088: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x380088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_38008c:
    // 0x38008c: 0x40f809  jalr        $v0
label_380090:
    if (ctx->pc == 0x380090u) {
        ctx->pc = 0x380090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38008Cu;
        // 0x380090: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380094u;
        goto label_380094;
    }
    ctx->pc = 0x38008Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x380094u);
        ctx->pc = 0x380090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38008Cu;
        // 0x380090: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38008Cu, 0x380094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x380094u;
label_380094:
    // 0x380094: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x380094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_380098:
    // 0x380098: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x380098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_38009c:
    // 0x38009c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x38009cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3800a0:
    // 0x3800a0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3800a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3800a4:
    // 0x3800a4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3800a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3800a8:
    // 0x3800a8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3800a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3800ac:
    // 0x3800ac: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3800acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3800b0:
    // 0x3800b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3800b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3800b4:
    // 0x3800b4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3800b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3800b8:
    // 0x3800b8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3800b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3800bc:
    // 0x3800bc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3800bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3800c0:
    // 0x3800c0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3800c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3800c4:
    // 0x3800c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3800c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3800c8:
    // 0x3800c8: 0x3e00008  jr          $ra
label_3800cc:
    if (ctx->pc == 0x3800CCu) {
        ctx->pc = 0x3800CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3800C8u;
        // 0x3800cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3800D0u;
        goto label_fallthrough_0x3800c8;
    }
    ctx->pc = 0x3800C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3800CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3800C8u;
        // 0x3800cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3800C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3800c8:
    ctx->pc = 0x3800D0u;
}
