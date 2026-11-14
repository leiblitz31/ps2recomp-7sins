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

// Function: sub_00117000
// Address: 0x117000 - 0x117650
void sub_00117000_0x117000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117000_0x117000");
#endif

    switch (ctx->pc) {
        case 0x117050u: goto label_117050;
        case 0x11706cu: goto label_11706c;
        case 0x11707cu: goto label_11707c;
        case 0x117094u: goto label_117094;
        case 0x1170a8u: goto label_1170a8;
        case 0x1170c0u: goto label_1170c0;
        case 0x1170f0u: goto label_1170f0;
        case 0x11710cu: goto label_11710c;
        case 0x117120u: goto label_117120;
        case 0x117138u: goto label_117138;
        case 0x117158u: goto label_117158;
        case 0x117170u: goto label_117170;
        case 0x11717cu: goto label_11717c;
        case 0x1171b8u: goto label_1171b8;
        case 0x1171d4u: goto label_1171d4;
        case 0x1171e4u: goto label_1171e4;
        case 0x1171fcu: goto label_1171fc;
        case 0x117214u: goto label_117214;
        case 0x117248u: goto label_117248;
        case 0x117274u: goto label_117274;
        case 0x117294u: goto label_117294;
        case 0x1172a4u: goto label_1172a4;
        case 0x1172d0u: goto label_1172d0;
        case 0x1172dcu: goto label_1172dc;
        case 0x1172f0u: goto label_1172f0;
        case 0x117308u: goto label_117308;
        case 0x11731cu: goto label_11731c;
        case 0x117340u: goto label_117340;
        case 0x117360u: goto label_117360;
        case 0x117370u: goto label_117370;
        case 0x117388u: goto label_117388;
        case 0x117394u: goto label_117394;
        case 0x1173a4u: goto label_1173a4;
        case 0x1173b8u: goto label_1173b8;
        case 0x1173d0u: goto label_1173d0;
        case 0x1173e8u: goto label_1173e8;
        case 0x1173fcu: goto label_1173fc;
        case 0x117414u: goto label_117414;
        case 0x117428u: goto label_117428;
        case 0x117454u: goto label_117454;
        case 0x117488u: goto label_117488;
        case 0x1174a4u: goto label_1174a4;
        case 0x1174b0u: goto label_1174b0;
        case 0x1174d4u: goto label_1174d4;
        case 0x1174e8u: goto label_1174e8;
        case 0x117500u: goto label_117500;
        case 0x117538u: goto label_117538;
        case 0x117548u: goto label_117548;
        case 0x117560u: goto label_117560;
        case 0x117578u: goto label_117578;
        case 0x1175acu: goto label_1175ac;
        case 0x1175d8u: goto label_1175d8;
        case 0x117604u: goto label_117604;
        case 0x117620u: goto label_117620;
        case 0x117630u: goto label_117630;
        default: break;
    }

    ctx->pc = 0x117000u;

    // 0x117000: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x117000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x117004: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x117004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x117008: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x117008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11700c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11700cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x117010: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x117014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x117018: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x117018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x11701c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x11701cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x117020: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x117020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x117024: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x117024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x117028: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x117028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11702c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117030: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x117030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117034: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x117034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117038: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x117038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11703c: 0x1462009b  bne         $v1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x11703Cu;
    {
        const bool branch_taken_0x11703c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11703c) {
            ctx->pc = 0x1172ACu;
            goto label_1172ac;
        }
    }
    ctx->pc = 0x117044u;
    // 0x117044: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x117044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117048: 0xc045dbc  jal         func_1176F0
    ctx->pc = 0x117048u;
    SET_GPR_U32(ctx, 31, 0x117050u);
    ctx->pc = 0x1176F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176F0u, 0x117048u, 0x117050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117050u;
label_117050:
    // 0x117050: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x117050u;
    {
        const bool branch_taken_0x117050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117050) {
            ctx->pc = 0x117084u;
            goto label_117084;
        }
    }
    ctx->pc = 0x117058u;
    // 0x117058: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x117058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x11705c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x11705cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117060: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x117060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x117064: 0xc045f88  jal         func_117E20
    ctx->pc = 0x117064u;
    SET_GPR_U32(ctx, 31, 0x11706Cu);
    ctx->pc = 0x117E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117E20u, 0x117064u, 0x11706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11706Cu;
label_11706c:
    // 0x11706c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x11706cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117070: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x117070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x117074: 0xc0450c0  jal         func_114300
    ctx->pc = 0x117074u;
    SET_GPR_U32(ctx, 31, 0x11707Cu);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x117074u, 0x11707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11707Cu;
label_11707c:
    // 0x11707c: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x11707Cu;
    {
        const bool branch_taken_0x11707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11707c) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x117084u;
label_117084:
    // 0x117084: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x117084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x117088: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x117088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11708c: 0xc044ec4  jal         func_113B10
    ctx->pc = 0x11708Cu;
    SET_GPR_U32(ctx, 31, 0x117094u);
    ctx->pc = 0x113B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B10u, 0x11708Cu, 0x117094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117094u;
label_117094:
    // 0x117094: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x117094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117098: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x117098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11709c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11709cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1170a0: 0xc045dac  jal         func_1176B0
    ctx->pc = 0x1170A0u;
    SET_GPR_U32(ctx, 31, 0x1170A8u);
    ctx->pc = 0x1176B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176B0u, 0x1170A0u, 0x1170A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1170A8u;
label_1170a8:
    // 0x1170a8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1170a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1170ac: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1170acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1170b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1170b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1170b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1170b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1170b8: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x1170B8u;
    SET_GPR_U32(ctx, 31, 0x1170C0u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x1170B8u, 0x1170C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1170C0u;
label_1170c0:
    // 0x1170c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1170C0u;
    {
        const bool branch_taken_0x1170c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1170c0) {
            ctx->pc = 0x1170FCu;
            goto label_1170fc;
        }
    }
    ctx->pc = 0x1170C8u;
    // 0x1170c8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1170c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1170cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1170ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1170d0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1170d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1170d4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1170d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1170d8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1170d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1170dc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1170dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1170e0: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1170e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1170e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1170e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1170e8: 0xc046020  jal         func_118080
    ctx->pc = 0x1170E8u;
    SET_GPR_U32(ctx, 31, 0x1170F0u);
    ctx->pc = 0x118080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118080u, 0x1170E8u, 0x1170F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1170F0u;
label_1170f0:
    // 0x1170f0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1170f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1170f4: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x1170F4u;
    {
        const bool branch_taken_0x1170f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1170f4) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x1170FCu;
label_1170fc:
    // 0x1170fc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1170fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117100: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x117100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117104: 0xc045dac  jal         func_1176B0
    ctx->pc = 0x117104u;
    SET_GPR_U32(ctx, 31, 0x11710Cu);
    ctx->pc = 0x1176B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176B0u, 0x117104u, 0x11710Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11710Cu;
label_11710c:
    // 0x11710c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11710cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117110: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x117110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x117114: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x117114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x117118: 0xc044ec4  jal         func_113B10
    ctx->pc = 0x117118u;
    SET_GPR_U32(ctx, 31, 0x117120u);
    ctx->pc = 0x113B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B10u, 0x117118u, 0x117120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117120u;
label_117120:
    // 0x117120: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x117120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117124: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x117124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x117128: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x117128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11712c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11712cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117130: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x117130u;
    SET_GPR_U32(ctx, 31, 0x117138u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x117130u, 0x117138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117138u;
label_117138:
    // 0x117138: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x117138u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11713c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x11713cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x117140: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x117140u;
    {
        const bool branch_taken_0x117140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117140) {
            ctx->pc = 0x117160u;
            goto label_117160;
        }
    }
    ctx->pc = 0x117148u;
    // 0x117148: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x117148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11714c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x11714cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117150: 0xc0450c0  jal         func_114300
    ctx->pc = 0x117150u;
    SET_GPR_U32(ctx, 31, 0x117158u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x117150u, 0x117158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117158u;
label_117158:
    // 0x117158: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x117158u;
    {
        const bool branch_taken_0x117158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117158) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x117160u;
label_117160:
    // 0x117160: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x117160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x117164: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x117164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117168: 0xc0450c0  jal         func_114300
    ctx->pc = 0x117168u;
    SET_GPR_U32(ctx, 31, 0x117170u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x117168u, 0x117170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117170u;
label_117170:
    // 0x117170: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x117170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x117174: 0xc044f60  jal         func_113D80
    ctx->pc = 0x117174u;
    SET_GPR_U32(ctx, 31, 0x11717Cu);
    ctx->pc = 0x113D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D80u, 0x117174u, 0x11717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11717Cu;
label_11717c:
    // 0x11717c: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x11717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x117180: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x117180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117184: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x117184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117188: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x117188u;
    {
        const bool branch_taken_0x117188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x117188) {
            ctx->pc = 0x1171C4u;
            goto label_1171c4;
        }
    }
    ctx->pc = 0x117190u;
    // 0x117190: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x117190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117194: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x117194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117198: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x117198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11719c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x11719cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1171a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1171a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171a4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1171a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1171a8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1171a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1171ac: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1171acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1171b0: 0xc046020  jal         func_118080
    ctx->pc = 0x1171B0u;
    SET_GPR_U32(ctx, 31, 0x1171B8u);
    ctx->pc = 0x118080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118080u, 0x1171B0u, 0x1171B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171B8u;
label_1171b8:
    // 0x1171b8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1171b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1171bc: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x1171BCu;
    {
        const bool branch_taken_0x1171bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1171bc) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x1171C4u;
label_1171c4:
    // 0x1171c4: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1171c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1171c8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1171c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1171cc: 0xc044ec4  jal         func_113B10
    ctx->pc = 0x1171CCu;
    SET_GPR_U32(ctx, 31, 0x1171D4u);
    ctx->pc = 0x113B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B10u, 0x1171CCu, 0x1171D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171D4u;
label_1171d4:
    // 0x1171d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1171d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171d8: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x1171d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1171dc: 0xc045dac  jal         func_1176B0
    ctx->pc = 0x1171DCu;
    SET_GPR_U32(ctx, 31, 0x1171E4u);
    ctx->pc = 0x1176B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176B0u, 0x1171DCu, 0x1171E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171E4u;
label_1171e4:
    // 0x1171e4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1171e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1171e8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1171e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1171ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1171ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1171f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171f4: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x1171F4u;
    SET_GPR_U32(ctx, 31, 0x1171FCu);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x1171F4u, 0x1171FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171FCu;
label_1171fc:
    // 0x1171fc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1171FCu;
    {
        const bool branch_taken_0x1171fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1171fc) {
            ctx->pc = 0x117280u;
            goto label_117280;
        }
    }
    ctx->pc = 0x117204u;
    // 0x117204: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x117204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117208: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x117208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11720c: 0xc045da4  jal         func_117690
    ctx->pc = 0x11720Cu;
    SET_GPR_U32(ctx, 31, 0x117214u);
    ctx->pc = 0x117690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117690u, 0x11720Cu, 0x117214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117214u;
label_117214:
    // 0x117214: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x117214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117218: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x117218u;
    {
        const bool branch_taken_0x117218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117218) {
            ctx->pc = 0x117254u;
            goto label_117254;
        }
    }
    ctx->pc = 0x117220u;
    // 0x117220: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x117220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117224: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x117224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117228: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x117228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11722c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x11722cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117234: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x117234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117238: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x117238u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11723c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x11723cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117240: 0xc046020  jal         func_118080
    ctx->pc = 0x117240u;
    SET_GPR_U32(ctx, 31, 0x117248u);
    ctx->pc = 0x118080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118080u, 0x117240u, 0x117248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117248u;
label_117248:
    // 0x117248: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x117248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11724c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x11724Cu;
    {
        const bool branch_taken_0x11724c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11724c) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x117254u;
label_117254:
    // 0x117254: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x117254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117258: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x117258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11725c: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x11725cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x117260: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x117260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x117264: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x117264u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x117268: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x117268u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11726c: 0xc046020  jal         func_118080
    ctx->pc = 0x11726Cu;
    SET_GPR_U32(ctx, 31, 0x117274u);
    ctx->pc = 0x118080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118080u, 0x11726Cu, 0x117274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117274u;
label_117274:
    // 0x117274: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x117274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117278: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x117278u;
    {
        const bool branch_taken_0x117278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117278) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x117280u;
label_117280:
    // 0x117280: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x117280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x117284: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x117284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117288: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x117288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11728c: 0xc045f88  jal         func_117E20
    ctx->pc = 0x11728Cu;
    SET_GPR_U32(ctx, 31, 0x117294u);
    ctx->pc = 0x117E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117E20u, 0x11728Cu, 0x117294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117294u;
label_117294:
    // 0x117294: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x117294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117298: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x117298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11729c: 0xc0450c0  jal         func_114300
    ctx->pc = 0x11729Cu;
    SET_GPR_U32(ctx, 31, 0x1172A4u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x11729Cu, 0x1172A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1172A4u;
label_1172a4:
    // 0x1172a4: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x1172A4u;
    {
        const bool branch_taken_0x1172a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1172a4) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x1172ACu;
label_1172ac:
    // 0x1172ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1172acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1172b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1172b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1172b4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1172b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1172b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1172b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1172bc: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1172BCu;
    {
        const bool branch_taken_0x1172bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1172bc) {
            ctx->pc = 0x117378u;
            goto label_117378;
        }
    }
    ctx->pc = 0x1172C4u;
    // 0x1172c4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1172c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1172c8: 0xc044cc4  jal         func_113310
    ctx->pc = 0x1172C8u;
    SET_GPR_U32(ctx, 31, 0x1172D0u);
    ctx->pc = 0x113310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113310u, 0x1172C8u, 0x1172D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1172D0u;
label_1172d0:
    // 0x1172d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1172d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1172d4: 0xc044eb4  jal         func_113AD0
    ctx->pc = 0x1172D4u;
    SET_GPR_U32(ctx, 31, 0x1172DCu);
    ctx->pc = 0x113AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AD0u, 0x1172D4u, 0x1172DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1172DCu;
label_1172dc:
    // 0x1172dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1172dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172e0: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x1172e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1172e4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1172e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1172e8: 0xc044ec4  jal         func_113B10
    ctx->pc = 0x1172E8u;
    SET_GPR_U32(ctx, 31, 0x1172F0u);
    ctx->pc = 0x113B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B10u, 0x1172E8u, 0x1172F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1172F0u;
label_1172f0:
    // 0x1172f0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1172f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1172f4: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1172f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1172f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1172f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1172fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117300: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x117300u;
    SET_GPR_U32(ctx, 31, 0x117308u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x117300u, 0x117308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117308u;
label_117308:
    // 0x117308: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x117308u;
    {
        const bool branch_taken_0x117308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117308) {
            ctx->pc = 0x11734Cu;
            goto label_11734c;
        }
    }
    ctx->pc = 0x117310u;
    // 0x117310: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x117310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117314: 0xc044cc4  jal         func_113310
    ctx->pc = 0x117314u;
    SET_GPR_U32(ctx, 31, 0x11731Cu);
    ctx->pc = 0x113310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113310u, 0x117314u, 0x11731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11731Cu;
label_11731c:
    // 0x11731c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x11731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117320: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x117320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117324: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x117324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117328: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11732c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x11732cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117330: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x117330u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x117334: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x117334u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117338: 0xc046020  jal         func_118080
    ctx->pc = 0x117338u;
    SET_GPR_U32(ctx, 31, 0x117340u);
    ctx->pc = 0x118080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118080u, 0x117338u, 0x117340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117340u;
label_117340:
    // 0x117340: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x117340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117344: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x117344u;
    {
        const bool branch_taken_0x117344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117344) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x11734Cu;
label_11734c:
    // 0x11734c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x11734cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x117350: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x117350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117354: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x117354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x117358: 0xc045f88  jal         func_117E20
    ctx->pc = 0x117358u;
    SET_GPR_U32(ctx, 31, 0x117360u);
    ctx->pc = 0x117E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117E20u, 0x117358u, 0x117360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117360u;
label_117360:
    // 0x117360: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x117360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117364: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x117364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x117368: 0xc0450c0  jal         func_114300
    ctx->pc = 0x117368u;
    SET_GPR_U32(ctx, 31, 0x117370u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x117368u, 0x117370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117370u;
label_117370:
    // 0x117370: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x117370u;
    {
        const bool branch_taken_0x117370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117370) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x117378u;
label_117378:
    // 0x117378: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x117378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x11737c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x11737cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117380: 0xc0450c0  jal         func_114300
    ctx->pc = 0x117380u;
    SET_GPR_U32(ctx, 31, 0x117388u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x117380u, 0x117388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117388u;
label_117388:
    // 0x117388: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x117388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x11738c: 0xc045d94  jal         func_117650
    ctx->pc = 0x11738Cu;
    SET_GPR_U32(ctx, 31, 0x117394u);
    ctx->pc = 0x117650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117650u, 0x11738Cu, 0x117394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117394u;
label_117394:
    // 0x117394: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x117394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x117398: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x117398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11739c: 0xc044ec4  jal         func_113B10
    ctx->pc = 0x11739Cu;
    SET_GPR_U32(ctx, 31, 0x1173A4u);
    ctx->pc = 0x113B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B10u, 0x11739Cu, 0x1173A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173A4u;
label_1173a4:
    // 0x1173a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1173a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1173a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1173ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1173acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1173b0: 0xc045dac  jal         func_1176B0
    ctx->pc = 0x1173B0u;
    SET_GPR_U32(ctx, 31, 0x1173B8u);
    ctx->pc = 0x1176B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176B0u, 0x1173B0u, 0x1173B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173B8u;
label_1173b8:
    // 0x1173b8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1173b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1173bc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1173bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1173c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1173c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1173c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173c8: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x1173C8u;
    SET_GPR_U32(ctx, 31, 0x1173D0u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x1173C8u, 0x1173D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173D0u;
label_1173d0:
    // 0x1173d0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1173d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1173d4: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1173D4u;
    {
        const bool branch_taken_0x1173d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1173d4) {
            ctx->pc = 0x117494u;
            goto label_117494;
        }
    }
    ctx->pc = 0x1173DCu;
    // 0x1173dc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1173dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1173e0: 0xc045dac  jal         func_1176B0
    ctx->pc = 0x1173E0u;
    SET_GPR_U32(ctx, 31, 0x1173E8u);
    ctx->pc = 0x1176B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176B0u, 0x1173E0u, 0x1173E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173E8u;
label_1173e8:
    // 0x1173e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1173e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173ec: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1173ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1173f0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1173f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1173f4: 0xc044ec4  jal         func_113B10
    ctx->pc = 0x1173F4u;
    SET_GPR_U32(ctx, 31, 0x1173FCu);
    ctx->pc = 0x113B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B10u, 0x1173F4u, 0x1173FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173FCu;
label_1173fc:
    // 0x1173fc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1173fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117400: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x117400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x117404: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x117404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117408: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x117408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11740c: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x11740Cu;
    SET_GPR_U32(ctx, 31, 0x117414u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x11740Cu, 0x117414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117414u;
label_117414:
    // 0x117414: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x117414u;
    {
        const bool branch_taken_0x117414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117414) {
            ctx->pc = 0x117494u;
            goto label_117494;
        }
    }
    ctx->pc = 0x11741Cu;
    // 0x11741c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x11741cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x117420: 0xc045da4  jal         func_117690
    ctx->pc = 0x117420u;
    SET_GPR_U32(ctx, 31, 0x117428u);
    ctx->pc = 0x117690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117690u, 0x117420u, 0x117428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117428u;
label_117428:
    // 0x117428: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x117428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11742c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11742Cu;
    {
        const bool branch_taken_0x11742c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11742c) {
            ctx->pc = 0x117460u;
            goto label_117460;
        }
    }
    ctx->pc = 0x117434u;
    // 0x117434: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x117434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117438: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x117438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11743c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11743cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117440: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x117440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x117444: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x117444u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x117448: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x117448u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x11744c: 0xc046020  jal         func_118080
    ctx->pc = 0x11744Cu;
    SET_GPR_U32(ctx, 31, 0x117454u);
    ctx->pc = 0x118080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118080u, 0x11744Cu, 0x117454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117454u;
label_117454:
    // 0x117454: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x117454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117458: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x117458u;
    {
        const bool branch_taken_0x117458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117458) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x117460u;
label_117460:
    // 0x117460: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x117460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117464: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x117464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117468: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x117468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11746c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x11746cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117470: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x117470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117474: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x117474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117478: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x117478u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11747c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11747cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117480: 0xc046020  jal         func_118080
    ctx->pc = 0x117480u;
    SET_GPR_U32(ctx, 31, 0x117488u);
    ctx->pc = 0x118080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118080u, 0x117480u, 0x117488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117488u;
label_117488:
    // 0x117488: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x117488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11748c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x11748Cu;
    {
        const bool branch_taken_0x11748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11748c) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x117494u;
label_117494:
    // 0x117494: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x117494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x117498: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x117498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11749c: 0xc0450c0  jal         func_114300
    ctx->pc = 0x11749Cu;
    SET_GPR_U32(ctx, 31, 0x1174A4u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x11749Cu, 0x1174A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174A4u;
label_1174a4:
    // 0x1174a4: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1174a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1174a8: 0xc044f60  jal         func_113D80
    ctx->pc = 0x1174A8u;
    SET_GPR_U32(ctx, 31, 0x1174B0u);
    ctx->pc = 0x113D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D80u, 0x1174A8u, 0x1174B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174B0u;
label_1174b0:
    // 0x1174b0: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x1174b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1174b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1174b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1174b8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1174b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1174bc: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1174BCu;
    {
        const bool branch_taken_0x1174bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1174bc) {
            ctx->pc = 0x117504u;
            goto label_117504;
        }
    }
    ctx->pc = 0x1174C4u;
    // 0x1174c4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1174c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1174c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1174c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1174cc: 0xc045dac  jal         func_1176B0
    ctx->pc = 0x1174CCu;
    SET_GPR_U32(ctx, 31, 0x1174D4u);
    ctx->pc = 0x1176B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176B0u, 0x1174CCu, 0x1174D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174D4u;
label_1174d4:
    // 0x1174d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1174d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174d8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1174d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1174dc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1174dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1174e0: 0xc044ec4  jal         func_113B10
    ctx->pc = 0x1174E0u;
    SET_GPR_U32(ctx, 31, 0x1174E8u);
    ctx->pc = 0x113B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B10u, 0x1174E0u, 0x1174E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174E8u;
label_1174e8:
    // 0x1174e8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1174e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1174ec: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1174ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1174f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1174f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1174f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174f8: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x1174F8u;
    SET_GPR_U32(ctx, 31, 0x117500u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x1174F8u, 0x117500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117500u;
label_117500:
    // 0x117500: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x117500u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_117504:
    // 0x117504: 0x16000037  bnez        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x117504u;
    {
        const bool branch_taken_0x117504 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x117504) {
            ctx->pc = 0x1175E4u;
            goto label_1175e4;
        }
    }
    ctx->pc = 0x11750Cu;
    // 0x11750c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x11750Cu;
    {
        const bool branch_taken_0x11750c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11750c) {
            ctx->pc = 0x1175E4u;
            goto label_1175e4;
        }
    }
    ctx->pc = 0x117514u;
    // 0x117514: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x117514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x117518: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x117518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11751c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117520: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x117520u;
    {
        const bool branch_taken_0x117520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x117520) {
            ctx->pc = 0x117568u;
            goto label_117568;
        }
    }
    ctx->pc = 0x117528u;
    // 0x117528: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x117528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x11752c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x11752cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x117530: 0xc044ec4  jal         func_113B10
    ctx->pc = 0x117530u;
    SET_GPR_U32(ctx, 31, 0x117538u);
    ctx->pc = 0x113B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B10u, 0x117530u, 0x117538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117538u;
label_117538:
    // 0x117538: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x117538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11753c: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x11753cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x117540: 0xc045dac  jal         func_1176B0
    ctx->pc = 0x117540u;
    SET_GPR_U32(ctx, 31, 0x117548u);
    ctx->pc = 0x1176B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176B0u, 0x117540u, 0x117548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117548u;
label_117548:
    // 0x117548: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x117548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11754c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x11754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x117550: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x117550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117554: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x117554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117558: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x117558u;
    SET_GPR_U32(ctx, 31, 0x117560u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x117558u, 0x117560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117560u;
label_117560:
    // 0x117560: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x117560u;
    {
        const bool branch_taken_0x117560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117560) {
            ctx->pc = 0x1175E4u;
            goto label_1175e4;
        }
    }
    ctx->pc = 0x117568u;
label_117568:
    // 0x117568: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x117568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11756c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117570: 0xc045da4  jal         func_117690
    ctx->pc = 0x117570u;
    SET_GPR_U32(ctx, 31, 0x117578u);
    ctx->pc = 0x117690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117690u, 0x117570u, 0x117578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117578u;
label_117578:
    // 0x117578: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x117578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11757c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11757Cu;
    {
        const bool branch_taken_0x11757c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11757c) {
            ctx->pc = 0x1175B8u;
            goto label_1175b8;
        }
    }
    ctx->pc = 0x117584u;
    // 0x117584: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x117584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117588: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x117588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11758c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x11758cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117590: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x117590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117598: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x117598u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11759c: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x11759cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1175a0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1175a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1175a4: 0xc046020  jal         func_118080
    ctx->pc = 0x1175A4u;
    SET_GPR_U32(ctx, 31, 0x1175ACu);
    ctx->pc = 0x118080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118080u, 0x1175A4u, 0x1175ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175ACu;
label_1175ac:
    // 0x1175ac: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1175acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1175b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1175B0u;
    {
        const bool branch_taken_0x1175b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1175b0) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x1175B8u;
label_1175b8:
    // 0x1175b8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1175b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1175bc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1175bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1175c0: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x1175c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1175c4: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x1175c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1175c8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1175c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1175cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1175ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1175d0: 0xc046020  jal         func_118080
    ctx->pc = 0x1175D0u;
    SET_GPR_U32(ctx, 31, 0x1175D8u);
    ctx->pc = 0x118080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118080u, 0x1175D0u, 0x1175D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175D8u;
label_1175d8:
    // 0x1175d8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1175d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1175dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1175DCu;
    {
        const bool branch_taken_0x1175dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1175dc) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x1175E4u;
label_1175e4:
    // 0x1175e4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1175e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1175e8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x1175e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1175ec: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1175ECu;
    {
        const bool branch_taken_0x1175ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1175ec) {
            ctx->pc = 0x11760Cu;
            goto label_11760c;
        }
    }
    ctx->pc = 0x1175F4u;
    // 0x1175f4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1175f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1175f8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1175f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1175fc: 0xc0450c0  jal         func_114300
    ctx->pc = 0x1175FCu;
    SET_GPR_U32(ctx, 31, 0x117604u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x1175FCu, 0x117604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117604u;
label_117604:
    // 0x117604: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x117604u;
    {
        const bool branch_taken_0x117604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117604) {
            ctx->pc = 0x117630u;
            goto label_117630;
        }
    }
    ctx->pc = 0x11760Cu;
label_11760c:
    // 0x11760c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11760cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x117610: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x117610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117614: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x117614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x117618: 0xc045f88  jal         func_117E20
    ctx->pc = 0x117618u;
    SET_GPR_U32(ctx, 31, 0x117620u);
    ctx->pc = 0x117E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117E20u, 0x117618u, 0x117620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117620u;
label_117620:
    // 0x117620: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x117620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117624: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x117624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x117628: 0xc0450c0  jal         func_114300
    ctx->pc = 0x117628u;
    SET_GPR_U32(ctx, 31, 0x117630u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x117628u, 0x117630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117630u;
label_117630:
    // 0x117630: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x117630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117634: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x117634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x117638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11763c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11763cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117644: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x117644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x117648: 0x3e00008  jr          $ra
    ctx->pc = 0x117648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117650u;
}
