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

// Function: sub_002B8B40
// Address: 0x2b8b40 - 0x2b8e80
void sub_002B8B40_0x2b8b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8B40_0x2b8b40");
#endif

    switch (ctx->pc) {
        case 0x2b8bc4u: goto label_2b8bc4;
        case 0x2b8bd8u: goto label_2b8bd8;
        case 0x2b8be4u: goto label_2b8be4;
        case 0x2b8bf4u: goto label_2b8bf4;
        case 0x2b8c08u: goto label_2b8c08;
        case 0x2b8c30u: goto label_2b8c30;
        case 0x2b8c3cu: goto label_2b8c3c;
        case 0x2b8c58u: goto label_2b8c58;
        case 0x2b8c78u: goto label_2b8c78;
        case 0x2b8c94u: goto label_2b8c94;
        case 0x2b8cc0u: goto label_2b8cc0;
        case 0x2b8cdcu: goto label_2b8cdc;
        case 0x2b8cecu: goto label_2b8cec;
        case 0x2b8d00u: goto label_2b8d00;
        case 0x2b8d14u: goto label_2b8d14;
        case 0x2b8d60u: goto label_2b8d60;
        case 0x2b8d80u: goto label_2b8d80;
        case 0x2b8d9cu: goto label_2b8d9c;
        case 0x2b8dbcu: goto label_2b8dbc;
        case 0x2b8dccu: goto label_2b8dcc;
        case 0x2b8e04u: goto label_2b8e04;
        case 0x2b8e14u: goto label_2b8e14;
        case 0x2b8e30u: goto label_2b8e30;
        case 0x2b8e50u: goto label_2b8e50;
        default: break;
    }

    ctx->pc = 0x2b8b40u;

    // 0x2b8b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8b44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b8b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b8b48: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b8b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b8b4c: 0x24636790  addiu       $v1, $v1, 0x6790
    ctx->pc = 0x2b8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26512));
    // 0x2b8b50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8b54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b8b58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b8b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8b5c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b8b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b8b60: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8B68u;
    // 0x2b8b68: 0x0  nop
    ctx->pc = 0x2b8b68u;
    // NOP
    // 0x2b8b6c: 0x0  nop
    ctx->pc = 0x2b8b6cu;
    // NOP
    // 0x2b8b70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b8b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b8b74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b8b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b8b78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b8b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b8b7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b8b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b8b80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b8b84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b8b88: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2b8b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2b8b8c: 0xa7a50060  sh          $a1, 0x60($sp)
    ctx->pc = 0x2b8b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b8b90: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8b94: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x2B8B94u;
    {
        const bool branch_taken_0x2b8b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8b94) {
            ctx->pc = 0x2B8E50u;
            goto label_2b8e50;
        }
    }
    ctx->pc = 0x2B8B9Cu;
    // 0x2b8b9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b8b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b8ba0: 0x24636770  addiu       $v1, $v1, 0x6770
    ctx->pc = 0x2b8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26480));
    // 0x2b8ba4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8ba8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b8bac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8bb0: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x2b8bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x2b8bb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8BB4u;
    {
        const bool branch_taken_0x2b8bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8bb4) {
            ctx->pc = 0x2B8BC8u;
            goto label_2b8bc8;
        }
    }
    ctx->pc = 0x2B8BBCu;
    // 0x2b8bbc: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2B8BBCu;
    SET_GPR_U32(ctx, 31, 0x2B8BC4u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2B8BBCu, 0x2B8BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8BC4u;
label_2b8bc4:
    // 0x2b8bc4: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x2b8bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
label_2b8bc8:
    // 0x2b8bc8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8bcc: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2b8bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2b8bd0: 0xc0513f8  jal         func_144FE0
    ctx->pc = 0x2B8BD0u;
    SET_GPR_U32(ctx, 31, 0x2B8BD8u);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x2B8BD0u, 0x2B8BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8BD8u;
label_2b8bd8:
    // 0x2b8bd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b8bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8bdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8BDCu;
    {
        const bool branch_taken_0x2b8bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8bdc) {
            ctx->pc = 0x2B8BF8u;
            goto label_2b8bf8;
        }
    }
    ctx->pc = 0x2B8BE4u;
label_2b8be4:
    // 0x2b8be4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b8be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b8be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8bec: 0xc09d23c  jal         func_2748F0
    ctx->pc = 0x2B8BECu;
    SET_GPR_U32(ctx, 31, 0x2B8BF4u);
    ctx->pc = 0x2748F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748F0u, 0x2B8BECu, 0x2B8BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8BF4u;
label_2b8bf4:
    // 0x2b8bf4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b8bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2b8bf8:
    // 0x2b8bf8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8bfc: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2b8bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2b8c00: 0xc09c064  jal         func_270190
    ctx->pc = 0x2B8C00u;
    SET_GPR_U32(ctx, 31, 0x2B8C08u);
    ctx->pc = 0x270190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270190u, 0x2B8C00u, 0x2B8C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C08u;
label_2b8c08:
    // 0x2b8c08: 0x1622fff6  bne         $s1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B8C08u;
    {
        const bool branch_taken_0x2b8c08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b8c08) {
            ctx->pc = 0x2B8BE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8be4;
        }
    }
    ctx->pc = 0x2B8C10u;
    // 0x2b8c10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8c14: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x2b8c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x2b8c18: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B8C18u;
    {
        const bool branch_taken_0x2b8c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8c18) {
            ctx->pc = 0x2B8C94u;
            goto label_2b8c94;
        }
    }
    ctx->pc = 0x2B8C20u;
    // 0x2b8c20: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8c24: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x2b8c24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8c28: 0xc090864  jal         func_242190
    ctx->pc = 0x2B8C28u;
    SET_GPR_U32(ctx, 31, 0x2B8C30u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2B8C28u, 0x2B8C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C30u;
label_2b8c30:
    // 0x2b8c30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c34: 0xc090590  jal         func_241640
    ctx->pc = 0x2B8C34u;
    SET_GPR_U32(ctx, 31, 0x2B8C3Cu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2B8C34u, 0x2B8C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C3Cu;
label_2b8c3c:
    // 0x2b8c3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b8c3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8c44: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b8c48: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2b8c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b8c4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b8c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c50: 0xc09158c  jal         func_245630
    ctx->pc = 0x2B8C50u;
    SET_GPR_U32(ctx, 31, 0x2B8C58u);
    ctx->pc = 0x245630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245630u, 0x2B8C50u, 0x2B8C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C58u;
label_2b8c58:
    // 0x2b8c58: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B8C58u;
    {
        const bool branch_taken_0x2b8c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8c58) {
            ctx->pc = 0x2B8C94u;
            goto label_2b8c94;
        }
    }
    ctx->pc = 0x2B8C60u;
    // 0x2b8c60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8c64: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b8c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b8c68: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2b8c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b8c6c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2b8c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2b8c70: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B8C70u;
    SET_GPR_U32(ctx, 31, 0x2B8C78u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B8C70u, 0x2B8C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C78u;
label_2b8c78:
    // 0x2b8c78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b8c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8c80: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b8c84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b8c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c88: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2b8c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b8c8c: 0xc097698  jal         func_25DA60
    ctx->pc = 0x2B8C8Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C94u);
    ctx->pc = 0x25DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DA60u, 0x2B8C8Cu, 0x2B8C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C94u;
label_2b8c94:
    // 0x2b8c94: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8c98: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b8c9c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2b8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b8ca0: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2B8CA0u;
    {
        const bool branch_taken_0x2b8ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8ca0) {
            ctx->pc = 0x2B8D9Cu;
            goto label_2b8d9c;
        }
    }
    ctx->pc = 0x2B8CA8u;
    // 0x2b8ca8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8cac: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b8cb0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2b8cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b8cb4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2b8cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b8cb8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B8CB8u;
    SET_GPR_U32(ctx, 31, 0x2B8CC0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B8CB8u, 0x2B8CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8CC0u;
label_2b8cc0:
    // 0x2b8cc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b8cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8cc4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B8CC4u;
    {
        const bool branch_taken_0x2b8cc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8cc4) {
            ctx->pc = 0x2B8D14u;
            goto label_2b8d14;
        }
    }
    ctx->pc = 0x2B8CCCu;
    // 0x2b8ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8cd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8cd4: 0xc0a8438  jal         func_2A10E0
    ctx->pc = 0x2B8CD4u;
    SET_GPR_U32(ctx, 31, 0x2B8CDCu);
    ctx->pc = 0x2A10E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A10E0u, 0x2B8CD4u, 0x2B8CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8CDCu;
label_2b8cdc:
    // 0x2b8cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8ce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8ce4: 0xc0a8438  jal         func_2A10E0
    ctx->pc = 0x2B8CE4u;
    SET_GPR_U32(ctx, 31, 0x2B8CECu);
    ctx->pc = 0x2A10E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A10E0u, 0x2B8CE4u, 0x2B8CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8CECu;
label_2b8cec:
    // 0x2b8cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8cf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8cf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b8cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8cf8: 0xc0a8554  jal         func_2A1550
    ctx->pc = 0x2B8CF8u;
    SET_GPR_U32(ctx, 31, 0x2B8D00u);
    ctx->pc = 0x2A1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1550u, 0x2B8CF8u, 0x2B8D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D00u;
label_2b8d00:
    // 0x2b8d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b8d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8d0c: 0xc0a8554  jal         func_2A1550
    ctx->pc = 0x2B8D0Cu;
    SET_GPR_U32(ctx, 31, 0x2B8D14u);
    ctx->pc = 0x2A1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1550u, 0x2B8D0Cu, 0x2B8D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D14u;
label_2b8d14:
    // 0x2b8d14: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2b8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2b8d18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8d1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8d20: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b8d24: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2b8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b8d28: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B8D28u;
    {
        const bool branch_taken_0x2b8d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b8d28) {
            ctx->pc = 0x2B8D9Cu;
            goto label_2b8d9c;
        }
    }
    ctx->pc = 0x2B8D30u;
    // 0x2b8d30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8d34: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2b8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b8d38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B8D38u;
    {
        const bool branch_taken_0x2b8d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8d38) {
            ctx->pc = 0x2B8D68u;
            goto label_2b8d68;
        }
    }
    ctx->pc = 0x2B8D40u;
    // 0x2b8d40: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2b8d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8d44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8d48: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b8d4c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2b8d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2b8d50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8d54: 0x90460004  lbu         $a2, 0x4($v0)
    ctx->pc = 0x2b8d54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b8d58: 0xc099fdc  jal         func_267F70
    ctx->pc = 0x2B8D58u;
    SET_GPR_U32(ctx, 31, 0x2B8D60u);
    ctx->pc = 0x267F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267F70u, 0x2B8D58u, 0x2B8D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D60u;
label_2b8d60:
    // 0x2b8d60: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B8D60u;
    {
        const bool branch_taken_0x2b8d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8d60) {
            ctx->pc = 0x2B8D9Cu;
            goto label_2b8d9c;
        }
    }
    ctx->pc = 0x2B8D68u;
label_2b8d68:
    // 0x2b8d68: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x2b8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x2b8d6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8D6Cu;
    {
        const bool branch_taken_0x2b8d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8d6c) {
            ctx->pc = 0x2B8D88u;
            goto label_2b8d88;
        }
    }
    ctx->pc = 0x2B8D74u;
    // 0x2b8d74: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x2b8d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x2b8d78: 0xc04e308  jal         func_138C20
    ctx->pc = 0x2B8D78u;
    SET_GPR_U32(ctx, 31, 0x2B8D80u);
    ctx->pc = 0x138C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C20u, 0x2B8D78u, 0x2B8D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D80u;
label_2b8d80:
    // 0x2b8d80: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8D80u;
    {
        const bool branch_taken_0x2b8d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8d80) {
            ctx->pc = 0x2B8D9Cu;
            goto label_2b8d9c;
        }
    }
    ctx->pc = 0x2B8D88u;
label_2b8d88:
    // 0x2b8d88: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b8d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b8d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b8d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d94: 0xc08cc40  jal         func_233100
    ctx->pc = 0x2B8D94u;
    SET_GPR_U32(ctx, 31, 0x2B8D9Cu);
    ctx->pc = 0x233100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233100u, 0x2B8D94u, 0x2B8D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D9Cu;
label_2b8d9c:
    // 0x2b8d9c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8da0: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b8da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b8da4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B8DA4u;
    {
        const bool branch_taken_0x2b8da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8da4) {
            ctx->pc = 0x2B8DD4u;
            goto label_2b8dd4;
        }
    }
    ctx->pc = 0x2B8DACu;
    // 0x2b8dac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8db0: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2b8db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b8db4: 0xc0ae3a0  jal         func_2B8E80
    ctx->pc = 0x2B8DB4u;
    SET_GPR_U32(ctx, 31, 0x2B8DBCu);
    ctx->pc = 0x2B8E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8E80u, 0x2B8DB4u, 0x2B8DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8DBCu;
label_2b8dbc:
    // 0x2b8dbc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8dc0: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2b8dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b8dc4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2B8DC4u;
    SET_GPR_U32(ctx, 31, 0x2B8DCCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2B8DC4u, 0x2B8DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8DCCu;
label_2b8dcc:
    // 0x2b8dcc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8dd0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2b8dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2b8dd4:
    // 0x2b8dd4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8dd8: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x2b8dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b8ddc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B8DDCu;
    {
        const bool branch_taken_0x2b8ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8ddc) {
            ctx->pc = 0x2B8E1Cu;
            goto label_2b8e1c;
        }
    }
    ctx->pc = 0x2B8DE4u;
    // 0x2b8de4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8de8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2b8de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b8dec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B8DECu;
    {
        const bool branch_taken_0x2b8dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8dec) {
            ctx->pc = 0x2B8E1Cu;
            goto label_2b8e1c;
        }
    }
    ctx->pc = 0x2B8DF4u;
    // 0x2b8df4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8df8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b8df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b8dfc: 0xc09a680  jal         func_269A00
    ctx->pc = 0x2B8DFCu;
    SET_GPR_U32(ctx, 31, 0x2B8E04u);
    ctx->pc = 0x269A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269A00u, 0x2B8DFCu, 0x2B8E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8E04u;
label_2b8e04:
    // 0x2b8e04: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8e08: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b8e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b8e0c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2B8E0Cu;
    SET_GPR_U32(ctx, 31, 0x2B8E14u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2B8E0Cu, 0x2B8E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8E14u;
label_2b8e14:
    // 0x2b8e14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8e18: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2b8e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_2b8e1c:
    // 0x2b8e1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8e20: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2b8e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2b8e24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b8e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b8e28: 0xc09bee4  jal         func_26FB90
    ctx->pc = 0x2B8E28u;
    SET_GPR_U32(ctx, 31, 0x2B8E30u);
    ctx->pc = 0x26FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FB90u, 0x2B8E28u, 0x2B8E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8E30u;
label_2b8e30:
    // 0x2b8e30: 0x87a20060  lh          $v0, 0x60($sp)
    ctx->pc = 0x2b8e30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8e34: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b8e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b8e38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b8e38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b8e3c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8E3Cu;
    {
        const bool branch_taken_0x2b8e3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b8e3c) {
            ctx->pc = 0x2B8E50u;
            goto label_2b8e50;
        }
    }
    ctx->pc = 0x2B8E44u;
    // 0x2b8e44: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b8e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8e48: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2B8E48u;
    SET_GPR_U32(ctx, 31, 0x2B8E50u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B8E48u, 0x2B8E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8E50u;
label_2b8e50:
    // 0x2b8e50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8e54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b8e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8e58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b8e58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8e5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b8e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b8e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8e68: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b8e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b8e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8E74u;
    // 0x2b8e74: 0x0  nop
    ctx->pc = 0x2b8e74u;
    // NOP
    // 0x2b8e78: 0x0  nop
    ctx->pc = 0x2b8e78u;
    // NOP
    // 0x2b8e7c: 0x0  nop
    ctx->pc = 0x2b8e7cu;
    // NOP
    ctx->pc = 0x2b8e80u;
}
