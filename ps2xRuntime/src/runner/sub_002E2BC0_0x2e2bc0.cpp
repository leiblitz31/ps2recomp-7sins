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

// Function: sub_002E2BC0
// Address: 0x2e2bc0 - 0x2e3100
void sub_002E2BC0_0x2e2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2BC0_0x2e2bc0");
#endif

    switch (ctx->pc) {
        case 0x2e2c08u: goto label_2e2c08;
        case 0x2e2c24u: goto label_2e2c24;
        case 0x2e2c40u: goto label_2e2c40;
        case 0x2e2c54u: goto label_2e2c54;
        case 0x2e2c6cu: goto label_2e2c6c;
        case 0x2e2c9cu: goto label_2e2c9c;
        case 0x2e2ce8u: goto label_2e2ce8;
        case 0x2e2d04u: goto label_2e2d04;
        case 0x2e2d10u: goto label_2e2d10;
        case 0x2e2d30u: goto label_2e2d30;
        case 0x2e2d44u: goto label_2e2d44;
        case 0x2e2d5cu: goto label_2e2d5c;
        case 0x2e2d74u: goto label_2e2d74;
        case 0x2e2da8u: goto label_2e2da8;
        case 0x2e2dd4u: goto label_2e2dd4;
        case 0x2e2df4u: goto label_2e2df4;
        case 0x2e2e28u: goto label_2e2e28;
        case 0x2e2e38u: goto label_2e2e38;
        case 0x2e2e44u: goto label_2e2e44;
        case 0x2e2e5cu: goto label_2e2e5c;
        case 0x2e2e70u: goto label_2e2e70;
        case 0x2e2e94u: goto label_2e2e94;
        case 0x2e2eb4u: goto label_2e2eb4;
        case 0x2e2ed0u: goto label_2e2ed0;
        case 0x2e2edcu: goto label_2e2edc;
        case 0x2e2eecu: goto label_2e2eec;
        case 0x2e2f00u: goto label_2e2f00;
        case 0x2e2f18u: goto label_2e2f18;
        case 0x2e2f34u: goto label_2e2f34;
        case 0x2e2f44u: goto label_2e2f44;
        case 0x2e2f5cu: goto label_2e2f5c;
        case 0x2e2f70u: goto label_2e2f70;
        case 0x2e2f9cu: goto label_2e2f9c;
        case 0x2e2fd0u: goto label_2e2fd0;
        case 0x2e2fecu: goto label_2e2fec;
        case 0x2e2ff8u: goto label_2e2ff8;
        case 0x2e3020u: goto label_2e3020;
        case 0x2e3034u: goto label_2e3034;
        case 0x2e304cu: goto label_2e304c;
        case 0x2e3064u: goto label_2e3064;
        case 0x2e3098u: goto label_2e3098;
        case 0x2e30c4u: goto label_2e30c4;
        case 0x2e30e4u: goto label_2e30e4;
        default: break;
    }

    ctx->pc = 0x2e2bc0u;

    // 0x2e2bc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e2bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e2bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e2bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e2bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e2bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e2bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e2bd0: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2e2bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2e2bd4: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2e2bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2e2bd8: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x2e2bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x2e2bdc: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x2e2bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x2e2be0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2be4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e2be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2be8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e2be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2bec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e2becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2bf0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e2bf4: 0x14620082  bne         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2E2BF4u;
    {
        const bool branch_taken_0x2e2bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2bf4) {
            ctx->pc = 0x2E2E00u;
            goto label_2e2e00;
        }
    }
    ctx->pc = 0x2E2BFCu;
    // 0x2e2bfc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e2bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2c00: 0xc0b8c78  jal         func_2E31E0
    ctx->pc = 0x2E2C00u;
    SET_GPR_U32(ctx, 31, 0x2E2C08u);
    ctx->pc = 0x2E31E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31E0u, 0x2E2C00u, 0x2E2C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C08u;
label_2e2c08:
    // 0x2e2c08: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2C08u;
    {
        const bool branch_taken_0x2e2c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c08) {
            ctx->pc = 0x2E2C30u;
            goto label_2e2c30;
        }
    }
    ctx->pc = 0x2E2C10u;
    // 0x2e2c10: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e2c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2c14: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e2c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2c18: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x2e2c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2c1c: 0xc0b8c80  jal         func_2E3200
    ctx->pc = 0x2E2C1Cu;
    SET_GPR_U32(ctx, 31, 0x2E2C24u);
    ctx->pc = 0x2E3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3200u, 0x2E2C1Cu, 0x2E2C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C24u;
label_2e2c24:
    // 0x2e2c24: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2c28: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x2E2C28u;
    {
        const bool branch_taken_0x2e2c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c28) {
            ctx->pc = 0x2E30E8u;
            goto label_2e30e8;
        }
    }
    ctx->pc = 0x2E2C30u;
label_2e2c30:
    // 0x2e2c30: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2c34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e2c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2c38: 0xc0b8c68  jal         func_2E31A0
    ctx->pc = 0x2E2C38u;
    SET_GPR_U32(ctx, 31, 0x2E2C40u);
    ctx->pc = 0x2E31A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31A0u, 0x2E2C38u, 0x2E2C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C40u;
label_2e2c40:
    // 0x2e2c40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e2c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c44: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e2c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e2c48: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2e2c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2c4c: 0xc0b81d8  jal         func_2E0760
    ctx->pc = 0x2E2C4Cu;
    SET_GPR_U32(ctx, 31, 0x2E2C54u);
    ctx->pc = 0x2E0760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0760u, 0x2E2C4Cu, 0x2E2C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C54u;
label_2e2c54:
    // 0x2e2c54: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2c58: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2e2c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e2c5c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e2c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e2c60: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2e2c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2c64: 0xc0b7b20  jal         func_2DEC80
    ctx->pc = 0x2E2C64u;
    SET_GPR_U32(ctx, 31, 0x2E2C6Cu);
    ctx->pc = 0x2DEC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEC80u, 0x2E2C64u, 0x2E2C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C6Cu;
label_2e2c6c:
    // 0x2e2c6c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2C6Cu;
    {
        const bool branch_taken_0x2e2c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c6c) {
            ctx->pc = 0x2E2CA8u;
            goto label_2e2ca8;
        }
    }
    ctx->pc = 0x2E2C74u;
    // 0x2e2c74: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2e2c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2c78: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2c7c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2c80: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e2c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2c84: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2e2c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2c88: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2e2c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2c8c: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2e2c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2c90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e2c90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c94: 0xc0b8cc0  jal         func_2E3300
    ctx->pc = 0x2E2C94u;
    SET_GPR_U32(ctx, 31, 0x2E2C9Cu);
    ctx->pc = 0x2E3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3300u, 0x2E2C94u, 0x2E2C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C9Cu;
label_2e2c9c:
    // 0x2e2c9c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e2c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2ca0: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x2E2CA0u;
    {
        const bool branch_taken_0x2e2ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2ca0) {
            ctx->pc = 0x2E30E8u;
            goto label_2e30e8;
        }
    }
    ctx->pc = 0x2E2CA8u;
label_2e2ca8:
    // 0x2e2ca8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2cac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2cb0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2e2cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e2cb4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2cb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2cbc: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E2CBCu;
    {
        const bool branch_taken_0x2e2cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2cbc) {
            ctx->pc = 0x2E2CF4u;
            goto label_2e2cf4;
        }
    }
    ctx->pc = 0x2E2CC4u;
    // 0x2e2cc4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2cc8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2ccc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e2cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2cd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2cd4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2e2cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2cd8: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2e2cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2cdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e2cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ce0: 0xc0b8cc0  jal         func_2E3300
    ctx->pc = 0x2E2CE0u;
    SET_GPR_U32(ctx, 31, 0x2E2CE8u);
    ctx->pc = 0x2E3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3300u, 0x2E2CE0u, 0x2E2CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2CE8u;
label_2e2ce8:
    // 0x2e2ce8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e2ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2cec: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x2E2CECu;
    {
        const bool branch_taken_0x2e2cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2cec) {
            ctx->pc = 0x2E30E8u;
            goto label_2e30e8;
        }
    }
    ctx->pc = 0x2E2CF4u;
label_2e2cf4:
    // 0x2e2cf4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2e2cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2e2cf8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2e2cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2cfc: 0xc0b8118  jal         func_2E0460
    ctx->pc = 0x2E2CFCu;
    SET_GPR_U32(ctx, 31, 0x2E2D04u);
    ctx->pc = 0x2E0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0460u, 0x2E2CFCu, 0x2E2D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2D04u;
label_2e2d04:
    // 0x2e2d04: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2e2d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2e2d08: 0xc0b8c58  jal         func_2E3160
    ctx->pc = 0x2E2D08u;
    SET_GPR_U32(ctx, 31, 0x2E2D10u);
    ctx->pc = 0x2E3160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3160u, 0x2E2D08u, 0x2E2D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2D10u;
label_2e2d10:
    // 0x2e2d10: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x2e2d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2e2d14: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2d18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2d1c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E2D1Cu;
    {
        const bool branch_taken_0x2e2d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2d1c) {
            ctx->pc = 0x2E2D64u;
            goto label_2e2d64;
        }
    }
    ctx->pc = 0x2E2D24u;
    // 0x2e2d24: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x2e2d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2e2d28: 0xc0b8c68  jal         func_2E31A0
    ctx->pc = 0x2E2D28u;
    SET_GPR_U32(ctx, 31, 0x2E2D30u);
    ctx->pc = 0x2E31A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31A0u, 0x2E2D28u, 0x2E2D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2D30u;
label_2e2d30:
    // 0x2e2d30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e2d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d34: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2e2d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2e2d38: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2e2d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2d3c: 0xc0b81d8  jal         func_2E0760
    ctx->pc = 0x2E2D3Cu;
    SET_GPR_U32(ctx, 31, 0x2E2D44u);
    ctx->pc = 0x2E0760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0760u, 0x2E2D3Cu, 0x2E2D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2D44u;
label_2e2d44:
    // 0x2e2d44: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2d48: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2e2d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e2d4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e2d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e2d50: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2e2d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2d54: 0xc0b7b20  jal         func_2DEC80
    ctx->pc = 0x2E2D54u;
    SET_GPR_U32(ctx, 31, 0x2E2D5Cu);
    ctx->pc = 0x2DEC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEC80u, 0x2E2D54u, 0x2E2D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2D5Cu;
label_2e2d5c:
    // 0x2e2d5c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E2D5Cu;
    {
        const bool branch_taken_0x2e2d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2d5c) {
            ctx->pc = 0x2E2DE0u;
            goto label_2e2de0;
        }
    }
    ctx->pc = 0x2E2D64u;
label_2e2d64:
    // 0x2e2d64: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e2d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2d68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e2d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2d6c: 0xc0b8c50  jal         func_2E3140
    ctx->pc = 0x2E2D6Cu;
    SET_GPR_U32(ctx, 31, 0x2E2D74u);
    ctx->pc = 0x2E3140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3140u, 0x2E2D6Cu, 0x2E2D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2D74u;
label_2e2d74:
    // 0x2e2d74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e2d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2d78: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2D78u;
    {
        const bool branch_taken_0x2e2d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2d78) {
            ctx->pc = 0x2E2DB4u;
            goto label_2e2db4;
        }
    }
    ctx->pc = 0x2E2D80u;
    // 0x2e2d80: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2e2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2d84: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2d88: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e2d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2d8c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e2d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2d90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d94: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2e2d94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2d98: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2e2d98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2d9c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2e2d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2da0: 0xc0b8cc0  jal         func_2E3300
    ctx->pc = 0x2E2DA0u;
    SET_GPR_U32(ctx, 31, 0x2E2DA8u);
    ctx->pc = 0x2E3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3300u, 0x2E2DA0u, 0x2E2DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2DA8u;
label_2e2da8:
    // 0x2e2da8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e2da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2dac: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x2E2DACu;
    {
        const bool branch_taken_0x2e2dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2dac) {
            ctx->pc = 0x2E30E8u;
            goto label_2e30e8;
        }
    }
    ctx->pc = 0x2E2DB4u;
label_2e2db4:
    // 0x2e2db4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e2db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2db8: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e2db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2dbc: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2e2dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2e2dc0: 0x8fa7005c  lw          $a3, 0x5C($sp)
    ctx->pc = 0x2e2dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2e2dc4: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2e2dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2dc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e2dc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2dcc: 0xc0b8cc0  jal         func_2E3300
    ctx->pc = 0x2E2DCCu;
    SET_GPR_U32(ctx, 31, 0x2E2DD4u);
    ctx->pc = 0x2E3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3300u, 0x2E2DCCu, 0x2E2DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2DD4u;
label_2e2dd4:
    // 0x2e2dd4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e2dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2dd8: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x2E2DD8u;
    {
        const bool branch_taken_0x2e2dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2dd8) {
            ctx->pc = 0x2E30E8u;
            goto label_2e30e8;
        }
    }
    ctx->pc = 0x2E2DE0u;
label_2e2de0:
    // 0x2e2de0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e2de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2de4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e2de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2de8: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x2e2de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2dec: 0xc0b8c80  jal         func_2E3200
    ctx->pc = 0x2E2DECu;
    SET_GPR_U32(ctx, 31, 0x2E2DF4u);
    ctx->pc = 0x2E3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3200u, 0x2E2DECu, 0x2E2DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2DF4u;
label_2e2df4:
    // 0x2e2df4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e2df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2df8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2E2DF8u;
    {
        const bool branch_taken_0x2e2df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2df8) {
            ctx->pc = 0x2E30E8u;
            goto label_2e30e8;
        }
    }
    ctx->pc = 0x2E2E00u;
label_2e2e00:
    // 0x2e2e00: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2e04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e2e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2e08: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2e0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2e10: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2E2E10u;
    {
        const bool branch_taken_0x2e2e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2e10) {
            ctx->pc = 0x2E2EC0u;
            goto label_2e2ec0;
        }
    }
    ctx->pc = 0x2E2E18u;
    // 0x2e2e18: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2e2e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2e2e1c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2e2e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2e20: 0xc0b81d8  jal         func_2E0760
    ctx->pc = 0x2E2E20u;
    SET_GPR_U32(ctx, 31, 0x2E2E28u);
    ctx->pc = 0x2E0760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0760u, 0x2E2E20u, 0x2E2E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2E28u;
label_2e2e28:
    // 0x2e2e28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e2e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e2c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e2e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2e30: 0xc0b7d08  jal         func_2DF420
    ctx->pc = 0x2E2E30u;
    SET_GPR_U32(ctx, 31, 0x2E2E38u);
    ctx->pc = 0x2DF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF420u, 0x2E2E30u, 0x2E2E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2E38u;
label_2e2e38:
    // 0x2e2e38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e2e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2e3c: 0xc0b81c8  jal         func_2E0720
    ctx->pc = 0x2E2E3Cu;
    SET_GPR_U32(ctx, 31, 0x2E2E44u);
    ctx->pc = 0x2E0720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0720u, 0x2E2E3Cu, 0x2E2E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2E44u;
label_2e2e44:
    // 0x2e2e44: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e2e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2e48: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2e2e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e2e4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e2e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e2e50: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2e2e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2e54: 0xc0b7b20  jal         func_2DEC80
    ctx->pc = 0x2E2E54u;
    SET_GPR_U32(ctx, 31, 0x2E2E5Cu);
    ctx->pc = 0x2DEC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEC80u, 0x2E2E54u, 0x2E2E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2E5Cu;
label_2e2e5c:
    // 0x2e2e5c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E2E5Cu;
    {
        const bool branch_taken_0x2e2e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e5c) {
            ctx->pc = 0x2E2EA0u;
            goto label_2e2ea0;
        }
    }
    ctx->pc = 0x2E2E64u;
    // 0x2e2e64: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e2e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2e68: 0xc0b7d08  jal         func_2DF420
    ctx->pc = 0x2E2E68u;
    SET_GPR_U32(ctx, 31, 0x2E2E70u);
    ctx->pc = 0x2DF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF420u, 0x2E2E68u, 0x2E2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2E70u;
label_2e2e70:
    // 0x2e2e70: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2e2e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2e74: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e2e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2e78: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e2e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2e7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e80: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2e2e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2e84: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2e2e84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2e88: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2e2e88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2e8c: 0xc0b8cc0  jal         func_2E3300
    ctx->pc = 0x2E2E8Cu;
    SET_GPR_U32(ctx, 31, 0x2E2E94u);
    ctx->pc = 0x2E3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3300u, 0x2E2E8Cu, 0x2E2E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2E94u;
label_2e2e94:
    // 0x2e2e94: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e2e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2e98: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2E2E98u;
    {
        const bool branch_taken_0x2e2e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e98) {
            ctx->pc = 0x2E30E8u;
            goto label_2e30e8;
        }
    }
    ctx->pc = 0x2E2EA0u;
label_2e2ea0:
    // 0x2e2ea0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e2ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2ea4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e2ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2ea8: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x2e2ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2eac: 0xc0b8c80  jal         func_2E3200
    ctx->pc = 0x2E2EACu;
    SET_GPR_U32(ctx, 31, 0x2E2EB4u);
    ctx->pc = 0x2E3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3200u, 0x2E2EACu, 0x2E2EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2EB4u;
label_2e2eb4:
    // 0x2e2eb4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2eb8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2E2EB8u;
    {
        const bool branch_taken_0x2e2eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2eb8) {
            ctx->pc = 0x2E30E8u;
            goto label_2e30e8;
        }
    }
    ctx->pc = 0x2E2EC0u;
label_2e2ec0:
    // 0x2e2ec0: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2e2ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2e2ec4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2e2ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2ec8: 0xc0b8118  jal         func_2E0460
    ctx->pc = 0x2E2EC8u;
    SET_GPR_U32(ctx, 31, 0x2E2ED0u);
    ctx->pc = 0x2E0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0460u, 0x2E2EC8u, 0x2E2ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2ED0u;
label_2e2ed0:
    // 0x2e2ed0: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2e2ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2e2ed4: 0xc0b8c40  jal         func_2E3100
    ctx->pc = 0x2E2ED4u;
    SET_GPR_U32(ctx, 31, 0x2E2EDCu);
    ctx->pc = 0x2E3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3100u, 0x2E2ED4u, 0x2E2EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2EDCu;
label_2e2edc:
    // 0x2e2edc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2ee0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e2ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2ee4: 0xc0b8c68  jal         func_2E31A0
    ctx->pc = 0x2E2EE4u;
    SET_GPR_U32(ctx, 31, 0x2E2EECu);
    ctx->pc = 0x2E31A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31A0u, 0x2E2EE4u, 0x2E2EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2EECu;
label_2e2eec:
    // 0x2e2eec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e2eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ef0: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x2e2ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2e2ef4: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2e2ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2ef8: 0xc0b81d8  jal         func_2E0760
    ctx->pc = 0x2E2EF8u;
    SET_GPR_U32(ctx, 31, 0x2E2F00u);
    ctx->pc = 0x2E0760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0760u, 0x2E2EF8u, 0x2E2F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F00u;
label_2e2f00:
    // 0x2e2f00: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e2f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2f04: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2e2f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e2f08: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e2f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e2f0c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2e2f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2f10: 0xc0b7b20  jal         func_2DEC80
    ctx->pc = 0x2E2F10u;
    SET_GPR_U32(ctx, 31, 0x2E2F18u);
    ctx->pc = 0x2DEC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEC80u, 0x2E2F10u, 0x2E2F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F18u;
label_2e2f18:
    // 0x2e2f18: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e2f18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e2f1c: 0x1600002f  bnez        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2E2F1Cu;
    {
        const bool branch_taken_0x2e2f1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f1c) {
            ctx->pc = 0x2E2FDCu;
            goto label_2e2fdc;
        }
    }
    ctx->pc = 0x2E2F24u;
    // 0x2e2f24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e2f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e2f28: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2e2f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2f2c: 0xc0b81d8  jal         func_2E0760
    ctx->pc = 0x2E2F2Cu;
    SET_GPR_U32(ctx, 31, 0x2E2F34u);
    ctx->pc = 0x2E0760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0760u, 0x2E2F2Cu, 0x2E2F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F34u;
label_2e2f34:
    // 0x2e2f34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e2f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f38: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e2f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e2f3c: 0xc0b8c68  jal         func_2E31A0
    ctx->pc = 0x2E2F3Cu;
    SET_GPR_U32(ctx, 31, 0x2E2F44u);
    ctx->pc = 0x2E31A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31A0u, 0x2E2F3Cu, 0x2E2F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F44u;
label_2e2f44:
    // 0x2e2f44: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2f48: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2e2f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e2f4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e2f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e2f50: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2e2f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2f54: 0xc0b7b20  jal         func_2DEC80
    ctx->pc = 0x2E2F54u;
    SET_GPR_U32(ctx, 31, 0x2E2F5Cu);
    ctx->pc = 0x2DEC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEC80u, 0x2E2F54u, 0x2E2F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F5Cu;
label_2e2f5c:
    // 0x2e2f5c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E2F5Cu;
    {
        const bool branch_taken_0x2e2f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f5c) {
            ctx->pc = 0x2E2FDCu;
            goto label_2e2fdc;
        }
    }
    ctx->pc = 0x2E2F64u;
    // 0x2e2f64: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e2f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e2f68: 0xc0b8c50  jal         func_2E3140
    ctx->pc = 0x2E2F68u;
    SET_GPR_U32(ctx, 31, 0x2E2F70u);
    ctx->pc = 0x2E3140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3140u, 0x2E2F68u, 0x2E2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F70u;
label_2e2f70:
    // 0x2e2f70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2f74: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E2F74u;
    {
        const bool branch_taken_0x2e2f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f74) {
            ctx->pc = 0x2E2FA8u;
            goto label_2e2fa8;
        }
    }
    ctx->pc = 0x2E2F7Cu;
    // 0x2e2f7c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e2f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2f80: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e2f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f88: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x2e2f88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e2f8c: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2e2f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2f90: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x2e2f90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e2f94: 0xc0b8cc0  jal         func_2E3300
    ctx->pc = 0x2E2F94u;
    SET_GPR_U32(ctx, 31, 0x2E2F9Cu);
    ctx->pc = 0x2E3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3300u, 0x2E2F94u, 0x2E2F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F9Cu;
label_2e2f9c:
    // 0x2e2f9c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e2f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2fa0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2E2FA0u;
    {
        const bool branch_taken_0x2e2fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2fa0) {
            ctx->pc = 0x2E30E8u;
            goto label_2e30e8;
        }
    }
    ctx->pc = 0x2E2FA8u;
label_2e2fa8:
    // 0x2e2fa8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2e2fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2fac: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e2facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2fb0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e2fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2fb4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e2fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2fb8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2e2fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2fbc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2e2fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2fc0: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2e2fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2fc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e2fc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2fc8: 0xc0b8cc0  jal         func_2E3300
    ctx->pc = 0x2E2FC8u;
    SET_GPR_U32(ctx, 31, 0x2E2FD0u);
    ctx->pc = 0x2E3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3300u, 0x2E2FC8u, 0x2E2FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2FD0u;
label_2e2fd0:
    // 0x2e2fd0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2fd4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2E2FD4u;
    {
        const bool branch_taken_0x2e2fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2fd4) {
            ctx->pc = 0x2E30E8u;
            goto label_2e30e8;
        }
    }
    ctx->pc = 0x2E2FDCu;
label_2e2fdc:
    // 0x2e2fdc: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2e2fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2e2fe0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2e2fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2fe4: 0xc0b8118  jal         func_2E0460
    ctx->pc = 0x2E2FE4u;
    SET_GPR_U32(ctx, 31, 0x2E2FECu);
    ctx->pc = 0x2E0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0460u, 0x2E2FE4u, 0x2E2FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2FECu;
label_2e2fec:
    // 0x2e2fec: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2e2fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2e2ff0: 0xc0b8c58  jal         func_2E3160
    ctx->pc = 0x2E2FF0u;
    SET_GPR_U32(ctx, 31, 0x2E2FF8u);
    ctx->pc = 0x2E3160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3160u, 0x2E2FF0u, 0x2E2FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2FF8u;
label_2e2ff8:
    // 0x2e2ff8: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2E2FF8u;
    {
        const bool branch_taken_0x2e2ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2ff8) {
            ctx->pc = 0x2E30D0u;
            goto label_2e30d0;
        }
    }
    ctx->pc = 0x2E3000u;
    // 0x2e3000: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x2e3000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2e3004: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e3004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3008: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e3008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e300c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E300Cu;
    {
        const bool branch_taken_0x2e300c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e300c) {
            ctx->pc = 0x2E3054u;
            goto label_2e3054;
        }
    }
    ctx->pc = 0x2E3014u;
    // 0x2e3014: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x2e3014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2e3018: 0xc0b8c68  jal         func_2E31A0
    ctx->pc = 0x2E3018u;
    SET_GPR_U32(ctx, 31, 0x2E3020u);
    ctx->pc = 0x2E31A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31A0u, 0x2E3018u, 0x2E3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3020u;
label_2e3020:
    // 0x2e3020: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e3020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3024: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2e3024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2e3028: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2e3028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e302c: 0xc0b81d8  jal         func_2E0760
    ctx->pc = 0x2E302Cu;
    SET_GPR_U32(ctx, 31, 0x2E3034u);
    ctx->pc = 0x2E0760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0760u, 0x2E302Cu, 0x2E3034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3034u;
label_2e3034:
    // 0x2e3034: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e3034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3038: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2e3038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e303c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e303cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e3040: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2e3040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3044: 0xc0b7b20  jal         func_2DEC80
    ctx->pc = 0x2E3044u;
    SET_GPR_U32(ctx, 31, 0x2E304Cu);
    ctx->pc = 0x2DEC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEC80u, 0x2E3044u, 0x2E304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E304Cu;
label_2e304c:
    // 0x2e304c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E304Cu;
    {
        const bool branch_taken_0x2e304c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e304c) {
            ctx->pc = 0x2E30D0u;
            goto label_2e30d0;
        }
    }
    ctx->pc = 0x2E3054u;
label_2e3054:
    // 0x2e3054: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e3054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3058: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e3058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e305c: 0xc0b8c50  jal         func_2E3140
    ctx->pc = 0x2E305Cu;
    SET_GPR_U32(ctx, 31, 0x2E3064u);
    ctx->pc = 0x2E3140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3140u, 0x2E305Cu, 0x2E3064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3064u;
label_2e3064:
    // 0x2e3064: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e3064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3068: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E3068u;
    {
        const bool branch_taken_0x2e3068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3068) {
            ctx->pc = 0x2E30A4u;
            goto label_2e30a4;
        }
    }
    ctx->pc = 0x2E3070u;
    // 0x2e3070: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2e3070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3074: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e3074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3078: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e3078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e307c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e307cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3084: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2e3084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3088: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2e3088u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e308c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2e308cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3090: 0xc0b8cc0  jal         func_2E3300
    ctx->pc = 0x2E3090u;
    SET_GPR_U32(ctx, 31, 0x2E3098u);
    ctx->pc = 0x2E3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3300u, 0x2E3090u, 0x2E3098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3098u;
label_2e3098:
    // 0x2e3098: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e3098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e309c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E309Cu;
    {
        const bool branch_taken_0x2e309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e309c) {
            ctx->pc = 0x2E30E8u;
            goto label_2e30e8;
        }
    }
    ctx->pc = 0x2E30A4u;
label_2e30a4:
    // 0x2e30a4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e30a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e30a8: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e30a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e30ac: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x2e30acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2e30b0: 0x8fa70054  lw          $a3, 0x54($sp)
    ctx->pc = 0x2e30b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2e30b4: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2e30b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e30b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e30b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e30bc: 0xc0b8cc0  jal         func_2E3300
    ctx->pc = 0x2E30BCu;
    SET_GPR_U32(ctx, 31, 0x2E30C4u);
    ctx->pc = 0x2E3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3300u, 0x2E30BCu, 0x2E30C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E30C4u;
label_2e30c4:
    // 0x2e30c4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e30c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E30C8u;
    {
        const bool branch_taken_0x2e30c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e30c8) {
            ctx->pc = 0x2E30E8u;
            goto label_2e30e8;
        }
    }
    ctx->pc = 0x2E30D0u;
label_2e30d0:
    // 0x2e30d0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e30d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e30d4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e30d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e30d8: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x2e30d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e30dc: 0xc0b8c80  jal         func_2E3200
    ctx->pc = 0x2E30DCu;
    SET_GPR_U32(ctx, 31, 0x2E30E4u);
    ctx->pc = 0x2E3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3200u, 0x2E30DCu, 0x2E30E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E30E4u;
label_2e30e4:
    // 0x2e30e4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2e30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2e30e8:
    // 0x2e30e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e30e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e30ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e30ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e30f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e30f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e30f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2e30f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e30f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E30F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E30F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3100u;
}
