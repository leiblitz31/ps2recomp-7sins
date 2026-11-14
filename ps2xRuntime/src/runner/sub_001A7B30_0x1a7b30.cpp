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

// Function: sub_001A7B30
// Address: 0x1a7b30 - 0x1a7d00
void sub_001A7B30_0x1a7b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7B30_0x1a7b30");
#endif

    switch (ctx->pc) {
        case 0x1a7b7cu: goto label_1a7b7c;
        case 0x1a7b88u: goto label_1a7b88;
        case 0x1a7ba8u: goto label_1a7ba8;
        case 0x1a7bbcu: goto label_1a7bbc;
        case 0x1a7bc8u: goto label_1a7bc8;
        case 0x1a7bdcu: goto label_1a7bdc;
        case 0x1a7be8u: goto label_1a7be8;
        case 0x1a7bfcu: goto label_1a7bfc;
        case 0x1a7c18u: goto label_1a7c18;
        case 0x1a7c38u: goto label_1a7c38;
        case 0x1a7c70u: goto label_1a7c70;
        case 0x1a7cbcu: goto label_1a7cbc;
        case 0x1a7cd8u: goto label_1a7cd8;
        default: break;
    }

    ctx->pc = 0x1a7b30u;

    // 0x1a7b30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a7b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a7b34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a7b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a7b38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a7b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a7b3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a7b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a7b40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7b44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7b48: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1a7b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1a7b4c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a7b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a7b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7b54: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7b58: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1a7b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1a7b5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a7b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7b60: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7b64: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1a7b64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x1a7b68: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7b6c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1a7b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a7b70: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1a7b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a7b74: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A7B74u;
    SET_GPR_U32(ctx, 31, 0x1A7B7Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A7B74u, 0x1A7B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B7Cu;
label_1a7b7c:
    // 0x1a7b7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b80: 0xc096fc4  jal         func_25BF10
    ctx->pc = 0x1A7B80u;
    SET_GPR_U32(ctx, 31, 0x1A7B88u);
    ctx->pc = 0x25BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF10u, 0x1A7B80u, 0x1A7B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B88u;
label_1a7b88:
    // 0x1a7b88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a7b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b8c: 0x12200052  beqz        $s1, . + 4 + (0x52 << 2)
    ctx->pc = 0x1A7B8Cu;
    {
        const bool branch_taken_0x1a7b8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7b8c) {
            ctx->pc = 0x1A7CD8u;
            goto label_1a7cd8;
        }
    }
    ctx->pc = 0x1A7B94u;
    // 0x1a7b94: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7b98: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1a7b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a7b9c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a7b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a7ba0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A7BA0u;
    SET_GPR_U32(ctx, 31, 0x1A7BA8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A7BA0u, 0x1A7BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BA8u;
label_1a7ba8:
    // 0x1a7ba8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a7ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7bac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a7bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a7bb0: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x1a7bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1a7bb4: 0xc040304  jal         func_100C10
    ctx->pc = 0x1A7BB4u;
    SET_GPR_U32(ctx, 31, 0x1A7BBCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1A7BB4u, 0x1A7BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BBCu;
label_1a7bbc:
    // 0x1a7bbc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a7bc0: 0xc050ee0  jal         func_143B80
    ctx->pc = 0x1A7BC0u;
    SET_GPR_U32(ctx, 31, 0x1A7BC8u);
    ctx->pc = 0x143B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B80u, 0x1A7BC0u, 0x1A7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BC8u;
label_1a7bc8:
    // 0x1a7bc8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1A7BC8u;
    {
        const bool branch_taken_0x1a7bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7bc8) {
            ctx->pc = 0x1A7CC8u;
            goto label_1a7cc8;
        }
    }
    ctx->pc = 0x1A7BD0u;
    // 0x1a7bd0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a7bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a7bd4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1A7BD4u;
    SET_GPR_U32(ctx, 31, 0x1A7BDCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1A7BD4u, 0x1A7BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BDCu;
label_1a7bdc:
    // 0x1a7bdc: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1a7bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7be0: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1A7BE0u;
    SET_GPR_U32(ctx, 31, 0x1A7BE8u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1A7BE0u, 0x1A7BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BE8u;
label_1a7be8:
    // 0x1a7be8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1a7be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7bec: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x1a7becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x1a7bf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a7bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7bf4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1A7BF4u;
    {
        const bool branch_taken_0x1a7bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7bf4) {
            ctx->pc = 0x1A7CACu;
            goto label_1a7cac;
        }
    }
    ctx->pc = 0x1A7BFCu;
label_1a7bfc:
    // 0x1a7bfc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7c00: 0x8c530028  lw          $s3, 0x28($v0)
    ctx->pc = 0x1a7c00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a7c04: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7c08: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1a7c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a7c0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c10: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A7C10u;
    SET_GPR_U32(ctx, 31, 0x1A7C18u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A7C10u, 0x1A7C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C18u;
label_1a7c18:
    // 0x1a7c18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7c1c: 0x1262001d  beq         $s3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A7C1Cu;
    {
        const bool branch_taken_0x1a7c1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a7c1c) {
            ctx->pc = 0x1A7C94u;
            goto label_1a7c94;
        }
    }
    ctx->pc = 0x1A7C24u;
    // 0x1a7c24: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7c28: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1a7c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a7c2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c30: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A7C30u;
    SET_GPR_U32(ctx, 31, 0x1A7C38u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A7C30u, 0x1A7C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C38u;
label_1a7c38:
    // 0x1a7c38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a7c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7c3c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a7c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a7c40: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7C40u;
    {
        const bool branch_taken_0x1a7c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7c40) {
            ctx->pc = 0x1A7C5Cu;
            goto label_1a7c5c;
        }
    }
    ctx->pc = 0x1A7C48u;
    // 0x1a7c48: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a7c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7c4c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1a7c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a7c50: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1a7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a7c54: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A7C54u;
    {
        const bool branch_taken_0x1a7c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a7c54) {
            ctx->pc = 0x1A7C94u;
            goto label_1a7c94;
        }
    }
    ctx->pc = 0x1A7C5Cu;
label_1a7c5c:
    // 0x1a7c5c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a7c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7c60: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1a7c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a7c64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c68: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1A7C68u;
    SET_GPR_U32(ctx, 31, 0x1A7C70u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A7C68u, 0x1A7C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C70u;
label_1a7c70:
    // 0x1a7c70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a7c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7c74: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1a7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a7c78: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7C78u;
    {
        const bool branch_taken_0x1a7c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7c78) {
            ctx->pc = 0x1A7CA8u;
            goto label_1a7ca8;
        }
    }
    ctx->pc = 0x1A7C80u;
    // 0x1a7c80: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a7c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7c84: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1a7c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a7c88: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a7c8c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7C8Cu;
    {
        const bool branch_taken_0x1a7c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7c8c) {
            ctx->pc = 0x1A7CA8u;
            goto label_1a7ca8;
        }
    }
    ctx->pc = 0x1A7C94u;
label_1a7c94:
    // 0x1a7c94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7c98: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7c9c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1a7c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x1a7ca0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7CA0u;
    {
        const bool branch_taken_0x1a7ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7ca0) {
            ctx->pc = 0x1A7CC8u;
            goto label_1a7cc8;
        }
    }
    ctx->pc = 0x1A7CA8u;
label_1a7ca8:
    // 0x1a7ca8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a7ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a7cac:
    // 0x1a7cac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a7cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7cb0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1a7cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a7cb4: 0xc05611c  jal         func_158470
    ctx->pc = 0x1A7CB4u;
    SET_GPR_U32(ctx, 31, 0x1A7CBCu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1A7CB4u, 0x1A7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CBCu;
label_1a7cbc:
    // 0x1a7cbc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1a7cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a7cc0: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1A7CC0u;
    {
        const bool branch_taken_0x1a7cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7cc0) {
            ctx->pc = 0x1A7BFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7bfc;
        }
    }
    ctx->pc = 0x1A7CC8u;
label_1a7cc8:
    // 0x1a7cc8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a7cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a7ccc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a7cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7cd0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1A7CD0u;
    SET_GPR_U32(ctx, 31, 0x1A7CD8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1A7CD0u, 0x1A7CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CD8u;
label_1a7cd8:
    // 0x1a7cd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a7cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7cdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a7cdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7ce0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a7ce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7ce4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7cec: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1a7cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a7cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7CF8u;
    // 0x1a7cf8: 0x0  nop
    ctx->pc = 0x1a7cf8u;
    // NOP
    // 0x1a7cfc: 0x0  nop
    ctx->pc = 0x1a7cfcu;
    // NOP
    ctx->pc = 0x1a7d00u;
}
