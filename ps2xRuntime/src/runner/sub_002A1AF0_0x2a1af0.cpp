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

// Function: sub_002A1AF0
// Address: 0x2a1af0 - 0x2a1ec0
void sub_002A1AF0_0x2a1af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1AF0_0x2a1af0");
#endif

    switch (ctx->pc) {
        case 0x2a1b18u: goto label_2a1b18;
        case 0x2a1b24u: goto label_2a1b24;
        case 0x2a1b9cu: goto label_2a1b9c;
        case 0x2a1bc4u: goto label_2a1bc4;
        case 0x2a1bd0u: goto label_2a1bd0;
        case 0x2a1be4u: goto label_2a1be4;
        case 0x2a1bfcu: goto label_2a1bfc;
        case 0x2a1c9cu: goto label_2a1c9c;
        case 0x2a1cb4u: goto label_2a1cb4;
        case 0x2a1cc4u: goto label_2a1cc4;
        case 0x2a1cd8u: goto label_2a1cd8;
        case 0x2a1ce8u: goto label_2a1ce8;
        case 0x2a1d00u: goto label_2a1d00;
        case 0x2a1d10u: goto label_2a1d10;
        case 0x2a1d24u: goto label_2a1d24;
        case 0x2a1d34u: goto label_2a1d34;
        case 0x2a1d4cu: goto label_2a1d4c;
        case 0x2a1d5cu: goto label_2a1d5c;
        case 0x2a1d70u: goto label_2a1d70;
        case 0x2a1d80u: goto label_2a1d80;
        case 0x2a1d94u: goto label_2a1d94;
        case 0x2a1da4u: goto label_2a1da4;
        case 0x2a1db8u: goto label_2a1db8;
        case 0x2a1dc8u: goto label_2a1dc8;
        case 0x2a1ddcu: goto label_2a1ddc;
        case 0x2a1decu: goto label_2a1dec;
        case 0x2a1e00u: goto label_2a1e00;
        case 0x2a1e10u: goto label_2a1e10;
        case 0x2a1e28u: goto label_2a1e28;
        case 0x2a1e38u: goto label_2a1e38;
        case 0x2a1e50u: goto label_2a1e50;
        case 0x2a1e60u: goto label_2a1e60;
        case 0x2a1e78u: goto label_2a1e78;
        case 0x2a1e88u: goto label_2a1e88;
        case 0x2a1e9cu: goto label_2a1e9c;
        case 0x2a1ea8u: goto label_2a1ea8;
        default: break;
    }

    ctx->pc = 0x2a1af0u;

label_2a1af0:
    // 0x2a1af0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a1af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a1af4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a1af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a1af8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a1af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a1afc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a1afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a1b00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a1b04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1b08: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2a1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2a1b0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a1b0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b10: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2A1B10u;
    {
        const bool branch_taken_0x2a1b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1b10) {
            ctx->pc = 0x2A1C10u;
            goto label_2a1c10;
        }
    }
    ctx->pc = 0x2A1B18u;
label_2a1b18:
    // 0x2a1b18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a1b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b1c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2A1B1Cu;
    {
        const bool branch_taken_0x2a1b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1b1c) {
            ctx->pc = 0x2A1C00u;
            goto label_2a1c00;
        }
    }
    ctx->pc = 0x2A1B24u;
label_2a1b24:
    // 0x2a1b24: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1B24u;
    {
        const bool branch_taken_0x2a1b24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1b24) {
            ctx->pc = 0x2A1B3Cu;
            goto label_2a1b3c;
        }
    }
    ctx->pc = 0x2A1B2Cu;
    // 0x2a1b2c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a1b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1b30: 0x8c71004c  lw          $s1, 0x4C($v1)
    ctx->pc = 0x2a1b30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2a1b34: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A1B34u;
    {
        const bool branch_taken_0x2a1b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1b34) {
            ctx->pc = 0x2A1B6Cu;
            goto label_2a1b6c;
        }
    }
    ctx->pc = 0x2A1B3Cu;
label_2a1b3c:
    // 0x2a1b3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1b40: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1B40u;
    {
        const bool branch_taken_0x2a1b40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a1b40) {
            ctx->pc = 0x2A1B58u;
            goto label_2a1b58;
        }
    }
    ctx->pc = 0x2A1B48u;
    // 0x2a1b48: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a1b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1b4c: 0x8c710050  lw          $s1, 0x50($v1)
    ctx->pc = 0x2a1b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2a1b50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1B50u;
    {
        const bool branch_taken_0x2a1b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1b50) {
            ctx->pc = 0x2A1B6Cu;
            goto label_2a1b6c;
        }
    }
    ctx->pc = 0x2A1B58u;
label_2a1b58:
    // 0x2a1b58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a1b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1b5c: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1B5Cu;
    {
        const bool branch_taken_0x2a1b5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a1b5c) {
            ctx->pc = 0x2A1B6Cu;
            goto label_2a1b6c;
        }
    }
    ctx->pc = 0x2A1B64u;
    // 0x2a1b64: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a1b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1b68: 0x8c710044  lw          $s1, 0x44($v1)
    ctx->pc = 0x2a1b68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2a1b6c:
    // 0x2a1b6c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a1b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1b70: 0x8c640194  lw          $a0, 0x194($v1)
    ctx->pc = 0x2a1b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x2a1b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1b78: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1B78u;
    {
        const bool branch_taken_0x2a1b78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a1b78) {
            ctx->pc = 0x2A1B8Cu;
            goto label_2a1b8c;
        }
    }
    ctx->pc = 0x2A1B80u;
    // 0x2a1b80: 0x8e320018  lw          $s2, 0x18($s1)
    ctx->pc = 0x2a1b80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2a1b84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1B84u;
    {
        const bool branch_taken_0x2a1b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1b84) {
            ctx->pc = 0x2A1BA0u;
            goto label_2a1ba0;
        }
    }
    ctx->pc = 0x2A1B8Cu;
label_2a1b8c:
    // 0x2a1b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a1b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a1b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b94: 0xc0c8812  jal         func_322048
    ctx->pc = 0x2A1B94u;
    SET_GPR_U32(ctx, 31, 0x2A1B9Cu);
    ctx->pc = 0x322048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322048u, 0x2A1B94u, 0x2A1B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B9Cu;
label_2a1b9c:
    // 0x2a1b9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a1b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1ba0:
    // 0x2a1ba0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2a1ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2a1ba4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2a1ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2a1ba8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A1BA8u;
    {
        const bool branch_taken_0x2a1ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1ba8) {
            ctx->pc = 0x2A1BFCu;
            goto label_2a1bfc;
        }
    }
    ctx->pc = 0x2A1BB0u;
    // 0x2a1bb0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a1bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1bb4: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2a1bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2a1bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1bbc: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x2A1BBCu;
    SET_GPR_U32(ctx, 31, 0x2A1BC4u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x2A1BBCu, 0x2A1BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BC4u;
label_2a1bc4:
    // 0x2a1bc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1bc8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2A1BC8u;
    SET_GPR_U32(ctx, 31, 0x2A1BD0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2A1BC8u, 0x2A1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BD0u;
label_2a1bd0:
    // 0x2a1bd0: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2a1bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2a1bd4: 0x24450005  addiu       $a1, $v0, 0x5
    ctx->pc = 0x2a1bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x2a1bd8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a1bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1bdc: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x2A1BDCu;
    SET_GPR_U32(ctx, 31, 0x2A1BE4u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2A1BDCu, 0x2A1BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BE4u;
label_2a1be4:
    // 0x2a1be4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a1be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1be8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a1be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a1bec: 0x24a5e460  addiu       $a1, $a1, -0x1BA0
    ctx->pc = 0x2a1becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960224));
    // 0x2a1bf0: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x2a1bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2a1bf4: 0xc0e3396  jal         func_38CE58
    ctx->pc = 0x2A1BF4u;
    SET_GPR_U32(ctx, 31, 0x2A1BFCu);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x2A1BF4u, 0x2A1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BFCu;
label_2a1bfc:
    // 0x2a1bfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a1bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a1c00:
    // 0x2a1c00: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x2a1c00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a1c04: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2A1C04u;
    {
        const bool branch_taken_0x2a1c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1c04) {
            ctx->pc = 0x2A1B24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1b24;
        }
    }
    ctx->pc = 0x2A1C0Cu;
    // 0x2a1c0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a1c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2a1c10:
    // 0x2a1c10: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a1c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1c14: 0x8c630194  lw          $v1, 0x194($v1)
    ctx->pc = 0x2a1c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x2a1c18: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x2a1c18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a1c1c: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x2A1C1Cu;
    {
        const bool branch_taken_0x2a1c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1c1c) {
            ctx->pc = 0x2A1B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1b18;
        }
    }
    ctx->pc = 0x2A1C24u;
    // 0x2a1c24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a1c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1c28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a1c28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1c2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a1c2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1c30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a1c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1c34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1c38: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2a1c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1C44u;
    // 0x2a1c44: 0x0  nop
    ctx->pc = 0x2a1c44u;
    // NOP
    // 0x2a1c48: 0x0  nop
    ctx->pc = 0x2a1c48u;
    // NOP
    // 0x2a1c4c: 0x0  nop
    ctx->pc = 0x2a1c4cu;
    // NOP
    // 0x2a1c50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a1c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a1c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a1c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a1c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1c5c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2a1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2a1c60: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2a1c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2a1c64: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x2a1c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x2a1c68: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2a1c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1c6c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2a1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a1c70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1C70u;
    {
        const bool branch_taken_0x2a1c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a1c70) {
            ctx->pc = 0x2A1C80u;
            goto label_2a1c80;
        }
    }
    ctx->pc = 0x2A1C78u;
    // 0x2a1c78: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2A1C78u;
    {
        const bool branch_taken_0x2a1c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1c78) {
            ctx->pc = 0x2A1EA8u;
            goto label_2a1ea8;
        }
    }
    ctx->pc = 0x2A1C80u;
label_2a1c80:
    // 0x2a1c80: 0x8fb00090  lw          $s0, 0x90($sp)
    ctx->pc = 0x2a1c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a1c84: 0x10100088  beq         $zero, $s0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2A1C84u;
    {
        const bool branch_taken_0x2a1c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2a1c84) {
            ctx->pc = 0x2A1EA8u;
            goto label_2a1ea8;
        }
    }
    ctx->pc = 0x2A1C8Cu;
    // 0x2a1c8c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1c90: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2a1c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2a1c94: 0xc09895c  jal         func_262570
    ctx->pc = 0x2A1C94u;
    SET_GPR_U32(ctx, 31, 0x2A1C9Cu);
    ctx->pc = 0x262570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262570u, 0x2A1C94u, 0x2A1C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C9Cu;
label_2a1c9c:
    // 0x2a1c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ca0: 0x240503ef  addiu       $a1, $zero, 0x3EF
    ctx->pc = 0x2a1ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1007));
    // 0x2a1ca4: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2a1ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2a1ca8: 0x24c6d920  addiu       $a2, $a2, -0x26E0
    ctx->pc = 0x2a1ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957344));
    // 0x2a1cac: 0xc041a50  jal         func_106940
    ctx->pc = 0x2A1CACu;
    SET_GPR_U32(ctx, 31, 0x2A1CB4u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2A1CACu, 0x2A1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1CB4u;
label_2a1cb4:
    // 0x2a1cb4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a1cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a1cb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1cbc: 0xc040304  jal         func_100C10
    ctx->pc = 0x2A1CBCu;
    SET_GPR_U32(ctx, 31, 0x2A1CC4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2A1CBCu, 0x2A1CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1CC4u;
label_2a1cc4:
    // 0x2a1cc4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1cc8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2a1cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2a1ccc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2a1cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a1cd0: 0xc082c78  jal         func_20B1E0
    ctx->pc = 0x2A1CD0u;
    SET_GPR_U32(ctx, 31, 0x2A1CD8u);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x2A1CD0u, 0x2A1CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1CD8u;
label_2a1cd8:
    // 0x2a1cd8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a1cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a1cdc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1ce0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2A1CE0u;
    SET_GPR_U32(ctx, 31, 0x2A1CE8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2A1CE0u, 0x2A1CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1CE8u;
label_2a1ce8:
    // 0x2a1ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1cec: 0x240503f0  addiu       $a1, $zero, 0x3F0
    ctx->pc = 0x2a1cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x2a1cf0: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2a1cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2a1cf4: 0x24c6d930  addiu       $a2, $a2, -0x26D0
    ctx->pc = 0x2a1cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957360));
    // 0x2a1cf8: 0xc041a50  jal         func_106940
    ctx->pc = 0x2A1CF8u;
    SET_GPR_U32(ctx, 31, 0x2A1D00u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2A1CF8u, 0x2A1D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D00u;
label_2a1d00:
    // 0x2a1d00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a1d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a1d04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d08: 0xc040304  jal         func_100C10
    ctx->pc = 0x2A1D08u;
    SET_GPR_U32(ctx, 31, 0x2A1D10u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2A1D08u, 0x2A1D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D10u;
label_2a1d10:
    // 0x2a1d10: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1d14: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2a1d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2a1d18: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2a1d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a1d1c: 0xc082c78  jal         func_20B1E0
    ctx->pc = 0x2A1D1Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D24u);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x2A1D1Cu, 0x2A1D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D24u;
label_2a1d24:
    // 0x2a1d24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a1d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a1d28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a1d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1d2c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2A1D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D34u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2A1D2Cu, 0x2A1D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D34u;
label_2a1d34:
    // 0x2a1d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d38: 0x240503f1  addiu       $a1, $zero, 0x3F1
    ctx->pc = 0x2a1d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
    // 0x2a1d3c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2a1d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2a1d40: 0x24c6d950  addiu       $a2, $a2, -0x26B0
    ctx->pc = 0x2a1d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957392));
    // 0x2a1d44: 0xc041a50  jal         func_106940
    ctx->pc = 0x2A1D44u;
    SET_GPR_U32(ctx, 31, 0x2A1D4Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2A1D44u, 0x2A1D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D4Cu;
label_2a1d4c:
    // 0x2a1d4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2a1d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a1d50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d54: 0xc040304  jal         func_100C10
    ctx->pc = 0x2A1D54u;
    SET_GPR_U32(ctx, 31, 0x2A1D5Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2A1D54u, 0x2A1D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D5Cu;
label_2a1d5c:
    // 0x2a1d5c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1d60: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2a1d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2a1d64: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2a1d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a1d68: 0xc082c78  jal         func_20B1E0
    ctx->pc = 0x2A1D68u;
    SET_GPR_U32(ctx, 31, 0x2A1D70u);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x2A1D68u, 0x2A1D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D70u;
label_2a1d70:
    // 0x2a1d70: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2a1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a1d74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a1d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1d78: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2A1D78u;
    SET_GPR_U32(ctx, 31, 0x2A1D80u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2A1D78u, 0x2A1D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D80u;
label_2a1d80:
    // 0x2a1d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d84: 0x240503f2  addiu       $a1, $zero, 0x3F2
    ctx->pc = 0x2a1d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1010));
    // 0x2a1d88: 0x2786a3a8  addiu       $a2, $gp, -0x5C58
    ctx->pc = 0x2a1d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943656));
    // 0x2a1d8c: 0xc041a50  jal         func_106940
    ctx->pc = 0x2A1D8Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D94u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2A1D8Cu, 0x2A1D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D94u;
label_2a1d94:
    // 0x2a1d94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a1d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a1d98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d9c: 0xc040304  jal         func_100C10
    ctx->pc = 0x2A1D9Cu;
    SET_GPR_U32(ctx, 31, 0x2A1DA4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2A1D9Cu, 0x2A1DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1DA4u;
label_2a1da4:
    // 0x2a1da4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a1da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1da8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2a1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2a1dac: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a1dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a1db0: 0xc082c78  jal         func_20B1E0
    ctx->pc = 0x2A1DB0u;
    SET_GPR_U32(ctx, 31, 0x2A1DB8u);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x2A1DB0u, 0x2A1DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1DB8u;
label_2a1db8:
    // 0x2a1db8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a1db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a1dbc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a1dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1dc0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2A1DC0u;
    SET_GPR_U32(ctx, 31, 0x2A1DC8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2A1DC0u, 0x2A1DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1DC8u;
label_2a1dc8:
    // 0x2a1dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1dcc: 0x240503f3  addiu       $a1, $zero, 0x3F3
    ctx->pc = 0x2a1dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1011));
    // 0x2a1dd0: 0x2786a3a8  addiu       $a2, $gp, -0x5C58
    ctx->pc = 0x2a1dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943656));
    // 0x2a1dd4: 0xc041a50  jal         func_106940
    ctx->pc = 0x2A1DD4u;
    SET_GPR_U32(ctx, 31, 0x2A1DDCu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2A1DD4u, 0x2A1DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1DDCu;
label_2a1ddc:
    // 0x2a1ddc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a1ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a1de0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1de4: 0xc040304  jal         func_100C10
    ctx->pc = 0x2A1DE4u;
    SET_GPR_U32(ctx, 31, 0x2A1DECu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2A1DE4u, 0x2A1DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1DECu;
label_2a1dec:
    // 0x2a1dec: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a1decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1df0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2a1df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2a1df4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a1df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a1df8: 0xc082c78  jal         func_20B1E0
    ctx->pc = 0x2A1DF8u;
    SET_GPR_U32(ctx, 31, 0x2A1E00u);
    ctx->pc = 0x20B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1E0u, 0x2A1DF8u, 0x2A1E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E00u;
label_2a1e00:
    // 0x2a1e00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a1e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a1e04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a1e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1e08: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2A1E08u;
    SET_GPR_U32(ctx, 31, 0x2A1E10u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2A1E08u, 0x2A1E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E10u;
label_2a1e10:
    // 0x2a1e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e14: 0x240503f0  addiu       $a1, $zero, 0x3F0
    ctx->pc = 0x2a1e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x2a1e18: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2a1e18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2a1e1c: 0x24c6d930  addiu       $a2, $a2, -0x26D0
    ctx->pc = 0x2a1e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957360));
    // 0x2a1e20: 0xc041a50  jal         func_106940
    ctx->pc = 0x2A1E20u;
    SET_GPR_U32(ctx, 31, 0x2A1E28u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2A1E20u, 0x2A1E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E28u;
label_2a1e28:
    // 0x2a1e28: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2a1e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1e2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e30: 0xc0a821c  jal         func_2A0870
    ctx->pc = 0x2A1E30u;
    SET_GPR_U32(ctx, 31, 0x2A1E38u);
    ctx->pc = 0x2A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0870u, 0x2A1E30u, 0x2A1E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E38u;
label_2a1e38:
    // 0x2a1e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e3c: 0x240503f1  addiu       $a1, $zero, 0x3F1
    ctx->pc = 0x2a1e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
    // 0x2a1e40: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2a1e40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2a1e44: 0x24c6d950  addiu       $a2, $a2, -0x26B0
    ctx->pc = 0x2a1e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957392));
    // 0x2a1e48: 0xc041a50  jal         func_106940
    ctx->pc = 0x2A1E48u;
    SET_GPR_U32(ctx, 31, 0x2A1E50u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2A1E48u, 0x2A1E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E50u;
label_2a1e50:
    // 0x2a1e50: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2a1e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1e54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e58: 0xc0a82b8  jal         func_2A0AE0
    ctx->pc = 0x2A1E58u;
    SET_GPR_U32(ctx, 31, 0x2A1E60u);
    ctx->pc = 0x2A0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0AE0u, 0x2A1E58u, 0x2A1E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E60u;
label_2a1e60:
    // 0x2a1e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e64: 0x240503ef  addiu       $a1, $zero, 0x3EF
    ctx->pc = 0x2a1e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1007));
    // 0x2a1e68: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2a1e68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2a1e6c: 0x24c6d920  addiu       $a2, $a2, -0x26E0
    ctx->pc = 0x2a1e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957344));
    // 0x2a1e70: 0xc041a50  jal         func_106940
    ctx->pc = 0x2A1E70u;
    SET_GPR_U32(ctx, 31, 0x2A1E78u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2A1E70u, 0x2A1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E78u;
label_2a1e78:
    // 0x2a1e78: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2a1e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1e7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e80: 0xc0a8148  jal         func_2A0520
    ctx->pc = 0x2A1E80u;
    SET_GPR_U32(ctx, 31, 0x2A1E88u);
    ctx->pc = 0x2A0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0520u, 0x2A1E80u, 0x2A1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E88u;
label_2a1e88:
    // 0x2a1e88: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1e8c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2a1e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2a1e90: 0xc78c8258  lwc1        $f12, -0x7DA8($gp)
    ctx->pc = 0x2a1e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1e94: 0xc121910  jal         func_486440
    ctx->pc = 0x2A1E94u;
    SET_GPR_U32(ctx, 31, 0x2A1E9Cu);
    ctx->pc = 0x486440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486440u, 0x2A1E94u, 0x2A1E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E9Cu;
label_2a1e9c:
    // 0x2a1e9c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2a1e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1ea0: 0xc0a86bc  jal         func_2A1AF0
    ctx->pc = 0x2A1EA0u;
    SET_GPR_U32(ctx, 31, 0x2A1EA8u);
    ctx->pc = 0x2A1AF0u;
    goto label_2a1af0;
    ctx->pc = 0x2A1EA8u;
label_2a1ea8:
    // 0x2a1ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1eac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a1eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1eb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1eb4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2a1eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a1eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1EC0u;
}
