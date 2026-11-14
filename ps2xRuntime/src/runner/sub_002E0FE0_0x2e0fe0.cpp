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

// Function: sub_002E0FE0
// Address: 0x2e0fe0 - 0x2e1630
void sub_002E0FE0_0x2e0fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0FE0_0x2e0fe0");
#endif

    switch (ctx->pc) {
        case 0x2e1034u: goto label_2e1034;
        case 0x2e1050u: goto label_2e1050;
        case 0x2e1060u: goto label_2e1060;
        case 0x2e1074u: goto label_2e1074;
        case 0x2e10a8u: goto label_2e10a8;
        case 0x2e10c4u: goto label_2e10c4;
        case 0x2e10d8u: goto label_2e10d8;
        case 0x2e10ecu: goto label_2e10ec;
        case 0x2e10fcu: goto label_2e10fc;
        case 0x2e110cu: goto label_2e110c;
        case 0x2e1118u: goto label_2e1118;
        case 0x2e1150u: goto label_2e1150;
        case 0x2e118cu: goto label_2e118c;
        case 0x2e1198u: goto label_2e1198;
        case 0x2e11acu: goto label_2e11ac;
        case 0x2e11ecu: goto label_2e11ec;
        case 0x2e1218u: goto label_2e1218;
        case 0x2e1260u: goto label_2e1260;
        case 0x2e1288u: goto label_2e1288;
        case 0x2e134cu: goto label_2e134c;
        case 0x2e1374u: goto label_2e1374;
        case 0x2e1420u: goto label_2e1420;
        case 0x2e1448u: goto label_2e1448;
        case 0x2e1504u: goto label_2e1504;
        case 0x2e152cu: goto label_2e152c;
        default: break;
    }

    ctx->pc = 0x2e0fe0u;

    // 0x2e0fe0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2e0fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2e0fe4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e0fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e0fe8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e0fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e0fec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e0fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e0ff0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e0ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e0ff4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e0ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e0ff8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e0ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e0ffc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e0ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e1000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e1004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e1004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e1008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e1008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e100c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x2e100cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x2e1010: 0x8fb100c0  lw          $s1, 0xC0($sp)
    ctx->pc = 0x2e1010u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1014: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x2e1014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2e1018: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2E1018u;
    {
        const bool branch_taken_0x2e1018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1018) {
            ctx->pc = 0x2E10ECu;
            goto label_2e10ec;
        }
    }
    ctx->pc = 0x2E1020u;
    // 0x2e1020: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e1020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1024: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x2e1024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2e1028: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2e1028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e102c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2E102Cu;
    SET_GPR_U32(ctx, 31, 0x2E1034u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2E102Cu, 0x2E1034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1034u;
label_2e1034:
    // 0x2e1034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e1034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1038: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e1038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e103c: 0xac64006c  sw          $a0, 0x6C($v1)
    ctx->pc = 0x2e103cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 4));
    // 0x2e1040: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e1040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1044: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x2e1044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2e1048: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x2E1048u;
    SET_GPR_U32(ctx, 31, 0x2E1050u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x2E1048u, 0x2E1050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1050u;
label_2e1050:
    // 0x2e1050: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2e1050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2e1054: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2e1054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2e1058: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x2E1058u;
    SET_GPR_U32(ctx, 31, 0x2E1060u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x2E1058u, 0x2E1060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1060u;
label_2e1060:
    // 0x2e1060: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e1060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1064: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x2e1064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x2e1068: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2e1068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2e106c: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x2E106Cu;
    SET_GPR_U32(ctx, 31, 0x2E1074u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x2E106Cu, 0x2E1074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1074u;
label_2e1074:
    // 0x2e1074: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e1074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1078: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x2e1078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x2e107c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1080: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e1080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1084: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x2e1084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2e1088: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2e1088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2e108c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2e108cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e1090: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2e1090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2e1094: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x2e1094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x2e1098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e109c: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x2e109cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2e10a0: 0xc0b858c  jal         func_2E1630
    ctx->pc = 0x2E10A0u;
    SET_GPR_U32(ctx, 31, 0x2E10A8u);
    ctx->pc = 0x2E1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1630u, 0x2E10A0u, 0x2E10A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10A8u;
label_2e10a8:
    // 0x2e10a8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e10ac: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x2e10acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x2e10b0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e10b4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2e10b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2e10b8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2e10b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e10bc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2E10BCu;
    SET_GPR_U32(ctx, 31, 0x2E10C4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2E10BCu, 0x2E10C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10C4u;
label_2e10c4:
    // 0x2e10c4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x2e10c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x2e10c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e10c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e10cc: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x2e10ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2e10d0: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2E10D0u;
    SET_GPR_U32(ctx, 31, 0x2E10D8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2E10D0u, 0x2E10D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10D8u;
label_2e10d8:
    // 0x2e10d8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e10dc: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x2e10dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x2e10e0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2e10e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e10e4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2E10E4u;
    SET_GPR_U32(ctx, 31, 0x2E10ECu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2E10E4u, 0x2E10ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10ECu;
label_2e10ec:
    // 0x2e10ec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e10f0: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x2e10f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2e10f4: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x2E10F4u;
    SET_GPR_U32(ctx, 31, 0x2E10FCu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x2E10F4u, 0x2E10FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10FCu;
label_2e10fc:
    // 0x2e10fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e10fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1100: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e1100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1104: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E1104u;
    {
        const bool branch_taken_0x2e1104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1104) {
            ctx->pc = 0x2E116Cu;
            goto label_2e116c;
        }
    }
    ctx->pc = 0x2E110Cu;
label_2e110c:
    // 0x2e110c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e110cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1110: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E1110u;
    {
        const bool branch_taken_0x2e1110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1110) {
            ctx->pc = 0x2E1154u;
            goto label_2e1154;
        }
    }
    ctx->pc = 0x2E1118u;
label_2e1118:
    // 0x2e1118: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e1118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e111c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2e111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2e1120: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2e1120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e1124: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2e1124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e1128: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e1128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e112c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e1130: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2e1130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e1134: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e1134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1138: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x2e1138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2e113c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2e113cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e1140: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e1140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1144: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e1144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1148: 0xc0b7b38  jal         func_2DECE0
    ctx->pc = 0x2E1148u;
    SET_GPR_U32(ctx, 31, 0x2E1150u);
    ctx->pc = 0x2DECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DECE0u, 0x2E1148u, 0x2E1150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1150u;
label_2e1150:
    // 0x2e1150: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e1150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e1154:
    // 0x2e1154: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e1154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1158: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2e1158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2e115c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2e115cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e1160: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2E1160u;
    {
        const bool branch_taken_0x2e1160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1160) {
            ctx->pc = 0x2E1118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1118;
        }
    }
    ctx->pc = 0x2E1168u;
    // 0x2e1168: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e1168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e116c:
    // 0x2e116c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1170: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x2e1170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2e1174: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2e1174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e1178: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2E1178u;
    {
        const bool branch_taken_0x2e1178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1178) {
            ctx->pc = 0x2E110Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e110c;
        }
    }
    ctx->pc = 0x2E1180u;
    // 0x2e1180: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e1180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1184: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x2E1184u;
    {
        const bool branch_taken_0x2e1184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1184) {
            ctx->pc = 0x2E15E4u;
            goto label_2e15e4;
        }
    }
    ctx->pc = 0x2E118Cu;
label_2e118c:
    // 0x2e118c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e118cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1190: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x2E1190u;
    {
        const bool branch_taken_0x2e1190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1190) {
            ctx->pc = 0x2E15C8u;
            goto label_2e15c8;
        }
    }
    ctx->pc = 0x2E1198u;
label_2e1198:
    // 0x2e1198: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e1198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e119c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e119cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e11a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11a4: 0xc092158  jal         func_248560
    ctx->pc = 0x2E11A4u;
    SET_GPR_U32(ctx, 31, 0x2E11ACu);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x2E11A4u, 0x2E11ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11ACu;
label_2e11ac:
    // 0x2e11ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e11acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e11b4: 0x10030103  beq         $zero, $v1, . + 4 + (0x103 << 2)
    ctx->pc = 0x2E11B4u;
    {
        const bool branch_taken_0x2e11b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e11b4) {
            ctx->pc = 0x2E15C4u;
            goto label_2e15c4;
        }
    }
    ctx->pc = 0x2E11BCu;
    // 0x2e11bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e11bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11c0: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E11C0u;
    {
        const bool branch_taken_0x2e11c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e11c0) {
            ctx->pc = 0x2E1224u;
            goto label_2e1224;
        }
    }
    ctx->pc = 0x2E11C8u;
    // 0x2e11c8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2e11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2e11cc: 0x30634400  andi        $v1, $v1, 0x4400
    ctx->pc = 0x2e11ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)17408);
    // 0x2e11d0: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E11D0u;
    {
        const bool branch_taken_0x2e11d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e11d0) {
            ctx->pc = 0x2E1224u;
            goto label_2e1224;
        }
    }
    ctx->pc = 0x2E11D8u;
    // 0x2e11d8: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x2e11d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e11dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e11dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e11e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11e4: 0xc092158  jal         func_248560
    ctx->pc = 0x2E11E4u;
    SET_GPR_U32(ctx, 31, 0x2E11ECu);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x2E11E4u, 0x2E11ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11ECu;
label_2e11ec:
    // 0x2e11ec: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e11ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2e11f0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2e11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e11f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e11f8: 0x1003000a  beq         $zero, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E11F8u;
    {
        const bool branch_taken_0x2e11f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e11f8) {
            ctx->pc = 0x2E1224u;
            goto label_2e1224;
        }
    }
    ctx->pc = 0x2E1200u;
    // 0x2e1200: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e1200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1204: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e1204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1208: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2e1208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e120c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x2e120cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2e1210: 0xc0b83a4  jal         func_2E0E90
    ctx->pc = 0x2E1210u;
    SET_GPR_U32(ctx, 31, 0x2E1218u);
    ctx->pc = 0x2E0E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E90u, 0x2E1210u, 0x2E1218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1218u;
label_2e1218:
    // 0x2e1218: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1218u;
    {
        const bool branch_taken_0x2e1218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1218) {
            ctx->pc = 0x2E1224u;
            goto label_2e1224;
        }
    }
    ctx->pc = 0x2E1220u;
    // 0x2e1220: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x2e1220u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_2e1224:
    // 0x2e1224: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e1224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1228: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x2e1228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2e122c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e122cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1230: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x2e1230u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e1234: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x2E1234u;
    {
        const bool branch_taken_0x2e1234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1234) {
            ctx->pc = 0x2E1310u;
            goto label_2e1310;
        }
    }
    ctx->pc = 0x2E123Cu;
    // 0x2e123c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2e123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2e1240: 0x30638800  andi        $v1, $v1, 0x8800
    ctx->pc = 0x2e1240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34816);
    // 0x2e1244: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E1244u;
    {
        const bool branch_taken_0x2e1244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1244) {
            ctx->pc = 0x2E1310u;
            goto label_2e1310;
        }
    }
    ctx->pc = 0x2E124Cu;
    // 0x2e124c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2e124cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e1250: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e1250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1254: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e1254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1258: 0xc092158  jal         func_248560
    ctx->pc = 0x2E1258u;
    SET_GPR_U32(ctx, 31, 0x2E1260u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x2E1258u, 0x2E1260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1260u;
label_2e1260:
    // 0x2e1260: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2e1260u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1264: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2e1264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2e1268: 0x10030029  beq         $zero, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E1268u;
    {
        const bool branch_taken_0x2e1268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1268) {
            ctx->pc = 0x2E1310u;
            goto label_2e1310;
        }
    }
    ctx->pc = 0x2E1270u;
    // 0x2e1270: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e1270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1274: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e1274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1278: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2e1278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e127c: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2e127cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e1280: 0xc0b83a4  jal         func_2E0E90
    ctx->pc = 0x2E1280u;
    SET_GPR_U32(ctx, 31, 0x2E1288u);
    ctx->pc = 0x2E0E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E90u, 0x2E1280u, 0x2E1288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1288u;
label_2e1288:
    // 0x2e1288: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E1288u;
    {
        const bool branch_taken_0x2e1288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1288) {
            ctx->pc = 0x2E1310u;
            goto label_2e1310;
        }
    }
    ctx->pc = 0x2E1290u;
    // 0x2e1290: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x2e1290u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
    // 0x2e1294: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e1294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1298: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e1298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e129c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x2e129cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2e12a0: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x2e12a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e12a4: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2e12a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2e12a8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e12a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e12ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e12acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e12b0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2e12b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2e12b4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e12b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e12b8: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x2e12b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2e12bc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e12bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e12c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e12c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e12c4: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x2e12c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x2e12c8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e12c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e12cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e12ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2e12d0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e12d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e12d4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e12d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e12d8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x2e12d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2e12dc: 0x2242818  mult        $a1, $s1, $a0
    ctx->pc = 0x2e12dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2e12e0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2e12e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e12e4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e12e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e12e8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e12e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e12ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e12ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e12f0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2e12f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2e12f4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e12f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e12f8: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x2e12f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2e12fc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e12fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e1300: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e1300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e1304: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x2e1304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x2e1308: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e1308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e130c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e130cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2e1310:
    // 0x2e1310: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e1310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1314: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2e1314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2e1318: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e1318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e131c: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x2e131cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e1320: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x2E1320u;
    {
        const bool branch_taken_0x2e1320 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1320) {
            ctx->pc = 0x2E13FCu;
            goto label_2e13fc;
        }
    }
    ctx->pc = 0x2E1328u;
    // 0x2e1328: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2e1328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2e132c: 0x30632200  andi        $v1, $v1, 0x2200
    ctx->pc = 0x2e132cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8704);
    // 0x2e1330: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E1330u;
    {
        const bool branch_taken_0x2e1330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1330) {
            ctx->pc = 0x2E13FCu;
            goto label_2e13fc;
        }
    }
    ctx->pc = 0x2E1338u;
    // 0x2e1338: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x2e1338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e133c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e133cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e1340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1344: 0xc092158  jal         func_248560
    ctx->pc = 0x2E1344u;
    SET_GPR_U32(ctx, 31, 0x2E134Cu);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x2E1344u, 0x2E134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E134Cu;
label_2e134c:
    // 0x2e134c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2e134cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1350: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2e1350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2e1354: 0x10030029  beq         $zero, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E1354u;
    {
        const bool branch_taken_0x2e1354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1354) {
            ctx->pc = 0x2E13FCu;
            goto label_2e13fc;
        }
    }
    ctx->pc = 0x2E135Cu;
    // 0x2e135c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e135cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1360: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e1360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1364: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2e1364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1368: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2e1368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e136c: 0xc0b83a4  jal         func_2E0E90
    ctx->pc = 0x2E136Cu;
    SET_GPR_U32(ctx, 31, 0x2E1374u);
    ctx->pc = 0x2E0E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E90u, 0x2E136Cu, 0x2E1374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1374u;
label_2e1374:
    // 0x2e1374: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E1374u;
    {
        const bool branch_taken_0x2e1374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1374) {
            ctx->pc = 0x2E13FCu;
            goto label_2e13fc;
        }
    }
    ctx->pc = 0x2E137Cu;
    // 0x2e137c: 0x36730008  ori         $s3, $s3, 0x8
    ctx->pc = 0x2e137cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
    // 0x2e1380: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e1380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1384: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e1384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1388: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x2e1388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2e138c: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x2e138cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e1390: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2e1390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2e1394: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e1394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e1398: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e1398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e139c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2e139cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2e13a0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e13a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e13a4: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x2e13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2e13a8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e13a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e13ac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e13acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e13b0: 0x8c6300b0  lw          $v1, 0xB0($v1)
    ctx->pc = 0x2e13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x2e13b4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e13b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e13b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e13b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2e13bc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e13c0: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x2e13c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e13c4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e13c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e13c8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x2e13c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2e13cc: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x2e13ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e13d0: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2e13d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2e13d4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e13d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e13d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e13d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e13dc: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2e13dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2e13e0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e13e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e13e4: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x2e13e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2e13e8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e13e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e13ec: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e13ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e13f0: 0x8c6300a0  lw          $v1, 0xA0($v1)
    ctx->pc = 0x2e13f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2e13f4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e13f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e13f8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e13f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2e13fc:
    // 0x2e13fc: 0x32640009  andi        $a0, $s3, 0x9
    ctx->pc = 0x2e13fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)9);
    // 0x2e1400: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2e1400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e1404: 0x14830036  bne         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2E1404u;
    {
        const bool branch_taken_0x2e1404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e1404) {
            ctx->pc = 0x2E14E0u;
            goto label_2e14e0;
        }
    }
    ctx->pc = 0x2E140Cu;
    // 0x2e140c: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x2e140cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e1410: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x2e1410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e1414: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e1414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1418: 0xc092158  jal         func_248560
    ctx->pc = 0x2E1418u;
    SET_GPR_U32(ctx, 31, 0x2E1420u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x2E1418u, 0x2E1420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1420u;
label_2e1420:
    // 0x2e1420: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2e1420u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1424: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2e1424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2e1428: 0x1003002d  beq         $zero, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E1428u;
    {
        const bool branch_taken_0x2e1428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1428) {
            ctx->pc = 0x2E14E0u;
            goto label_2e14e0;
        }
    }
    ctx->pc = 0x2E1430u;
    // 0x2e1430: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e1430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1434: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e1434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1438: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2e1438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e143c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e143cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1440: 0xc0b83a4  jal         func_2E0E90
    ctx->pc = 0x2E1440u;
    SET_GPR_U32(ctx, 31, 0x2E1448u);
    ctx->pc = 0x2E0E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E90u, 0x2E1440u, 0x2E1448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1448u;
label_2e1448:
    // 0x2e1448: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E1448u;
    {
        const bool branch_taken_0x2e1448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1448) {
            ctx->pc = 0x2E14E0u;
            goto label_2e14e0;
        }
    }
    ctx->pc = 0x2E1450u;
    // 0x2e1450: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x2e1450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2e1454: 0x30639900  andi        $v1, $v1, 0x9900
    ctx->pc = 0x2e1454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)39168);
    // 0x2e1458: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E1458u;
    {
        const bool branch_taken_0x2e1458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1458) {
            ctx->pc = 0x2E14E0u;
            goto label_2e14e0;
        }
    }
    ctx->pc = 0x2E1460u;
    // 0x2e1460: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e1460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1464: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e1464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1468: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x2e1468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2e146c: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x2e146cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e1470: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2e1470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2e1474: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e1474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e1478: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e1478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e147c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2e147cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2e1480: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e1480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1484: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x2e1484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2e1488: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e1488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e148c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e148cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e1490: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x2e1490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x2e1494: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e1494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e1498: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e1498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2e149c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e14a0: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x2e14a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e14a4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e14a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e14a8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x2e14a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2e14ac: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x2e14acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2e14b0: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2e14b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e14b4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e14b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e14b8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e14b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e14bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e14bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e14c0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2e14c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2e14c4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e14c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e14c8: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x2e14c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2e14cc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e14ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e14d0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e14d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e14d4: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x2e14d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x2e14d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e14d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e14dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e14dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2e14e0:
    // 0x2e14e0: 0x3264000a  andi        $a0, $s3, 0xA
    ctx->pc = 0x2e14e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)10);
    // 0x2e14e4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e14e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e14e8: 0x14830036  bne         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2E14E8u;
    {
        const bool branch_taken_0x2e14e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e14e8) {
            ctx->pc = 0x2E15C4u;
            goto label_2e15c4;
        }
    }
    ctx->pc = 0x2E14F0u;
    // 0x2e14f0: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2e14f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e14f4: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x2e14f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e14f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e14f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14fc: 0xc092158  jal         func_248560
    ctx->pc = 0x2E14FCu;
    SET_GPR_U32(ctx, 31, 0x2E1504u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x2E14FCu, 0x2E1504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1504u;
label_2e1504:
    // 0x2e1504: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e1504u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1508: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2e1508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e150c: 0x1003002d  beq         $zero, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E150Cu;
    {
        const bool branch_taken_0x2e150c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e150c) {
            ctx->pc = 0x2E15C4u;
            goto label_2e15c4;
        }
    }
    ctx->pc = 0x2E1514u;
    // 0x2e1514: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e1514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1518: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e1518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e151c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e151cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1520: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e1520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1524: 0xc0b83a4  jal         func_2E0E90
    ctx->pc = 0x2E1524u;
    SET_GPR_U32(ctx, 31, 0x2E152Cu);
    ctx->pc = 0x2E0E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E90u, 0x2E1524u, 0x2E152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E152Cu;
label_2e152c:
    // 0x2e152c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E152Cu;
    {
        const bool branch_taken_0x2e152c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e152c) {
            ctx->pc = 0x2E15C4u;
            goto label_2e15c4;
        }
    }
    ctx->pc = 0x2E1534u;
    // 0x2e1534: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2e1534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2e1538: 0x30635500  andi        $v1, $v1, 0x5500
    ctx->pc = 0x2e1538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)21760);
    // 0x2e153c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E153Cu;
    {
        const bool branch_taken_0x2e153c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e153c) {
            ctx->pc = 0x2E15C4u;
            goto label_2e15c4;
        }
    }
    ctx->pc = 0x2E1544u;
    // 0x2e1544: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e1544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1548: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e1548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e154c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x2e154cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2e1550: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x2e1550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e1554: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2e1554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2e1558: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e1558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e155c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e1560: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2e1560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2e1564: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e1564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1568: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x2e1568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2e156c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e156cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e1570: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e1570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e1574: 0x8c6300ac  lw          $v1, 0xAC($v1)
    ctx->pc = 0x2e1574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x2e1578: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e1578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e157c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e157cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2e1580: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e1580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1584: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x2e1584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e1588: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e1588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e158c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x2e158cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2e1590: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x2e1590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2e1594: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2e1594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e1598: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e1598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e159c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e159cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e15a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e15a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e15a4: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2e15a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2e15a8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e15a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e15ac: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x2e15acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2e15b0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e15b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e15b4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e15b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e15b8: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x2e15b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x2e15bc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e15bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e15c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2e15c4:
    // 0x2e15c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e15c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e15c8:
    // 0x2e15c8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2e15c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e15cc: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2e15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2e15d0: 0x223202b  sltu        $a0, $s1, $v1
    ctx->pc = 0x2e15d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e15d4: 0x1480fef0  bnez        $a0, . + 4 + (-0x110 << 2)
    ctx->pc = 0x2E15D4u;
    {
        const bool branch_taken_0x2e15d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e15d4) {
            ctx->pc = 0x2E1198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1198;
        }
    }
    ctx->pc = 0x2E15DCu;
    // 0x2e15dc: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2e15dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e15e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e15e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e15e4:
    // 0x2e15e4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2e15e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e15e8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x2e15e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2e15ec: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2e15ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e15f0: 0x1460fee6  bnez        $v1, . + 4 + (-0x11A << 2)
    ctx->pc = 0x2E15F0u;
    {
        const bool branch_taken_0x2e15f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e15f0) {
            ctx->pc = 0x2E118Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e118c;
        }
    }
    ctx->pc = 0x2E15F8u;
    // 0x2e15f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e15f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e15fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e15fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e1600: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e1600u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1604: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e1604u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e1608: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e1608u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e160c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e160cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1610: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e1610u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1614: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e1614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1618: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e161c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e161cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1620: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2e1620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e1624: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E162Cu;
    // 0x2e162c: 0x0  nop
    ctx->pc = 0x2e162cu;
    // NOP
    ctx->pc = 0x2e1630u;
}
