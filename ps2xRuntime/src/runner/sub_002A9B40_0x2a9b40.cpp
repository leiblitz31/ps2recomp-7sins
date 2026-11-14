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

// Function: sub_002A9B40
// Address: 0x2a9b40 - 0x2a9f10
void sub_002A9B40_0x2a9b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9B40_0x2a9b40");
#endif

    switch (ctx->pc) {
        case 0x2a9b94u: goto label_2a9b94;
        case 0x2a9bacu: goto label_2a9bac;
        case 0x2a9bc8u: goto label_2a9bc8;
        case 0x2a9bd8u: goto label_2a9bd8;
        case 0x2a9becu: goto label_2a9bec;
        case 0x2a9c0cu: goto label_2a9c0c;
        case 0x2a9c28u: goto label_2a9c28;
        case 0x2a9c44u: goto label_2a9c44;
        case 0x2a9c6cu: goto label_2a9c6c;
        case 0x2a9ce8u: goto label_2a9ce8;
        case 0x2a9d00u: goto label_2a9d00;
        case 0x2a9d18u: goto label_2a9d18;
        case 0x2a9d38u: goto label_2a9d38;
        case 0x2a9d54u: goto label_2a9d54;
        case 0x2a9d70u: goto label_2a9d70;
        case 0x2a9d98u: goto label_2a9d98;
        case 0x2a9da8u: goto label_2a9da8;
        case 0x2a9dbcu: goto label_2a9dbc;
        case 0x2a9dd8u: goto label_2a9dd8;
        case 0x2a9decu: goto label_2a9dec;
        case 0x2a9e1cu: goto label_2a9e1c;
        case 0x2a9e2cu: goto label_2a9e2c;
        case 0x2a9ea8u: goto label_2a9ea8;
        case 0x2a9ec0u: goto label_2a9ec0;
        case 0x2a9ed0u: goto label_2a9ed0;
        default: break;
    }

    ctx->pc = 0x2a9b40u;

    // 0x2a9b40: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2a9b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2a9b44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a9b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2a9b48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a9b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2a9b4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a9b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2a9b50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a9b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a9b54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a9b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a9b58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a9b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a9b5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a9b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a9b60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a9b64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a9b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a9b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a9b6c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x2a9b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x2a9b70: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x2a9b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x2a9b74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a9b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a9b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b7c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a9b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a9b80: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a9b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a9b84: 0x24a5dca0  addiu       $a1, $a1, -0x2360
    ctx->pc = 0x2a9b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958240));
    // 0x2a9b88: 0x2786a468  addiu       $a2, $gp, -0x5B98
    ctx->pc = 0x2a9b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943848));
    // 0x2a9b8c: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x2A9B8Cu;
    SET_GPR_U32(ctx, 31, 0x2A9B94u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2A9B8Cu, 0x2A9B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9B94u;
label_2a9b94:
    // 0x2a9b94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a9b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b98: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x2A9B98u;
    {
        const bool branch_taken_0x2a9b98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9b98) {
            ctx->pc = 0x2A9D00u;
            goto label_2a9d00;
        }
    }
    ctx->pc = 0x2A9BA0u;
    // 0x2a9ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a9ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ba4: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A9BA4u;
    SET_GPR_U32(ctx, 31, 0x2A9BACu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A9BA4u, 0x2A9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9BACu;
label_2a9bac:
    // 0x2a9bac: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2A9BACu;
    {
        const bool branch_taken_0x2a9bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9bac) {
            ctx->pc = 0x2A9D00u;
            goto label_2a9d00;
        }
    }
    ctx->pc = 0x2A9BB4u;
    // 0x2a9bb4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a9bb8: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2a9bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2a9bbc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a9bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a9bc0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A9BC0u;
    SET_GPR_U32(ctx, 31, 0x2A9BC8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A9BC0u, 0x2A9BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9BC8u;
label_2a9bc8:
    // 0x2a9bc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a9bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9bd0: 0xc0a6228  jal         func_2988A0
    ctx->pc = 0x2A9BD0u;
    SET_GPR_U32(ctx, 31, 0x2A9BD8u);
    ctx->pc = 0x2988A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2988A0u, 0x2A9BD0u, 0x2A9BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9BD8u;
label_2a9bd8:
    // 0x2a9bd8: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2A9BD8u;
    {
        const bool branch_taken_0x2a9bd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9bd8) {
            ctx->pc = 0x2A9D00u;
            goto label_2a9d00;
        }
    }
    ctx->pc = 0x2A9BE0u;
    // 0x2a9be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9be4: 0xc09f9f0  jal         func_27E7C0
    ctx->pc = 0x2A9BE4u;
    SET_GPR_U32(ctx, 31, 0x2A9BECu);
    ctx->pc = 0x27E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E7C0u, 0x2A9BE4u, 0x2A9BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9BECu;
label_2a9bec:
    // 0x2a9bec: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2A9BECu;
    {
        const bool branch_taken_0x2a9bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9bec) {
            ctx->pc = 0x2A9D00u;
            goto label_2a9d00;
        }
    }
    ctx->pc = 0x2A9BF4u;
    // 0x2a9bf4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a9bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a9bf8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a9bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a9bfc: 0x24a5dcc0  addiu       $a1, $a1, -0x2340
    ctx->pc = 0x2a9bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958272));
    // 0x2a9c00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c04: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2A9C04u;
    SET_GPR_U32(ctx, 31, 0x2A9C0Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2A9C04u, 0x2A9C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9C0Cu;
label_2a9c0c:
    // 0x2a9c0c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2a9c0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c10: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a9c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a9c14: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a9c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a9c18: 0x24a5dce0  addiu       $a1, $a1, -0x2320
    ctx->pc = 0x2a9c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958304));
    // 0x2a9c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c20: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2A9C20u;
    SET_GPR_U32(ctx, 31, 0x2A9C28u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2A9C20u, 0x2A9C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9C28u;
label_2a9c28:
    // 0x2a9c28: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2a9c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2a9c2c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a9c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a9c30: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a9c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a9c34: 0x24a5dd00  addiu       $a1, $a1, -0x2300
    ctx->pc = 0x2a9c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958336));
    // 0x2a9c38: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2a9c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a9c3c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2A9C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A9C44u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2A9C3Cu, 0x2A9C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9C44u;
label_2a9c44:
    // 0x2a9c44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a9c44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c48: 0x12c0002d  beqz        $s6, . + 4 + (0x2D << 2)
    ctx->pc = 0x2A9C48u;
    {
        const bool branch_taken_0x2a9c48 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9c48) {
            ctx->pc = 0x2A9D00u;
            goto label_2a9d00;
        }
    }
    ctx->pc = 0x2A9C50u;
    // 0x2a9c50: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2a9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2a9c54: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A9C54u;
    {
        const bool branch_taken_0x2a9c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9c54) {
            ctx->pc = 0x2A9D00u;
            goto label_2a9d00;
        }
    }
    ctx->pc = 0x2A9C5Cu;
    // 0x2a9c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c60: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a9c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c64: 0xc0aa7d0  jal         func_2A9F40
    ctx->pc = 0x2A9C64u;
    SET_GPR_U32(ctx, 31, 0x2A9C6Cu);
    ctx->pc = 0x2A9F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F40u, 0x2A9C64u, 0x2A9C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9C6Cu;
label_2a9c6c:
    // 0x2a9c6c: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9C6Cu;
    {
        const bool branch_taken_0x2a9c6c = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x2a9c6c) {
            ctx->pc = 0x2A9C88u;
            goto label_2a9c88;
        }
    }
    ctx->pc = 0x2A9C74u;
    // 0x2a9c74: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2a9c74u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9c78: 0x0  nop
    ctx->pc = 0x2a9c78u;
    // NOP
    // 0x2a9c7c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2a9c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a9c80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9C80u;
    {
        const bool branch_taken_0x2a9c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9c80) {
            ctx->pc = 0x2A9CA4u;
            goto label_2a9ca4;
        }
    }
    ctx->pc = 0x2A9C88u;
label_2a9c88:
    // 0x2a9c88: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x2a9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x2a9c8c: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2a9c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2a9c90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a9c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a9c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9c98: 0x0  nop
    ctx->pc = 0x2a9c98u;
    // NOP
    // 0x2a9c9c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2a9c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a9ca0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2a9ca0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2a9ca4:
    // 0x2a9ca4: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9CA4u;
    {
        const bool branch_taken_0x2a9ca4 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x2a9ca4) {
            ctx->pc = 0x2A9CC0u;
            goto label_2a9cc0;
        }
    }
    ctx->pc = 0x2A9CACu;
    // 0x2a9cac: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2a9cacu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9cb0: 0x0  nop
    ctx->pc = 0x2a9cb0u;
    // NOP
    // 0x2a9cb4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2a9cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2a9cb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9CB8u;
    {
        const bool branch_taken_0x2a9cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9cb8) {
            ctx->pc = 0x2A9CDCu;
            goto label_2a9cdc;
        }
    }
    ctx->pc = 0x2A9CC0u;
label_2a9cc0:
    // 0x2a9cc0: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x2a9cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x2a9cc4: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2a9cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2a9cc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a9cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a9ccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9cd0: 0x0  nop
    ctx->pc = 0x2a9cd0u;
    // NOP
    // 0x2a9cd4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2a9cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2a9cd8: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x2a9cd8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_2a9cdc:
    // 0x2a9cdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ce0: 0xc0aa7c8  jal         func_2A9F20
    ctx->pc = 0x2A9CE0u;
    SET_GPR_U32(ctx, 31, 0x2A9CE8u);
    ctx->pc = 0x2A9F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F20u, 0x2A9CE0u, 0x2A9CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9CE8u;
label_2a9ce8:
    // 0x2a9ce8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a9cec: 0xac510054  sw          $s1, 0x54($v0)
    ctx->pc = 0x2a9cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 17));
    // 0x2a9cf0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a9cf4: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a9cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2a9cf8: 0xc0a62e0  jal         func_298B80
    ctx->pc = 0x2A9CF8u;
    SET_GPR_U32(ctx, 31, 0x2A9D00u);
    ctx->pc = 0x298B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298B80u, 0x2A9CF8u, 0x2A9D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D00u;
label_2a9d00:
    // 0x2a9d00: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a9d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a9d04: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a9d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a9d08: 0x24a5dd20  addiu       $a1, $a1, -0x22E0
    ctx->pc = 0x2a9d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958368));
    // 0x2a9d0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d10: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2A9D10u;
    SET_GPR_U32(ctx, 31, 0x2A9D18u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2A9D10u, 0x2A9D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D18u;
label_2a9d18:
    // 0x2a9d18: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2A9D18u;
    {
        const bool branch_taken_0x2a9d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9d18) {
            ctx->pc = 0x2A9EC0u;
            goto label_2a9ec0;
        }
    }
    ctx->pc = 0x2A9D20u;
    // 0x2a9d20: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a9d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a9d24: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a9d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a9d28: 0x24a5dd40  addiu       $a1, $a1, -0x22C0
    ctx->pc = 0x2a9d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958400));
    // 0x2a9d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d30: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2A9D30u;
    SET_GPR_U32(ctx, 31, 0x2A9D38u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2A9D30u, 0x2A9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D38u;
label_2a9d38:
    // 0x2a9d38: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a9d38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d3c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a9d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a9d40: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a9d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a9d44: 0x24a5dd60  addiu       $a1, $a1, -0x22A0
    ctx->pc = 0x2a9d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958432));
    // 0x2a9d48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d4c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2A9D4Cu;
    SET_GPR_U32(ctx, 31, 0x2A9D54u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2A9D4Cu, 0x2A9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D54u;
label_2a9d54:
    // 0x2a9d54: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2a9d54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d58: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a9d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a9d5c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a9d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a9d60: 0x24a5dd80  addiu       $a1, $a1, -0x2280
    ctx->pc = 0x2a9d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958464));
    // 0x2a9d64: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2a9d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a9d68: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2A9D68u;
    SET_GPR_U32(ctx, 31, 0x2A9D70u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2A9D68u, 0x2A9D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D70u;
label_2a9d70:
    // 0x2a9d70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a9d70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d74: 0x12800052  beqz        $s4, . + 4 + (0x52 << 2)
    ctx->pc = 0x2A9D74u;
    {
        const bool branch_taken_0x2a9d74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9d74) {
            ctx->pc = 0x2A9EC0u;
            goto label_2a9ec0;
        }
    }
    ctx->pc = 0x2A9D7Cu;
    // 0x2a9d7c: 0x13c00050  beqz        $fp, . + 4 + (0x50 << 2)
    ctx->pc = 0x2A9D7Cu;
    {
        const bool branch_taken_0x2a9d7c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9d7c) {
            ctx->pc = 0x2A9EC0u;
            goto label_2a9ec0;
        }
    }
    ctx->pc = 0x2A9D84u;
    // 0x2a9d84: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a9d88: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2a9d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2a9d8c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a9d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a9d90: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A9D90u;
    SET_GPR_U32(ctx, 31, 0x2A9D98u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A9D90u, 0x2A9D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D98u;
label_2a9d98:
    // 0x2a9d98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9da0: 0xc0a6228  jal         func_2988A0
    ctx->pc = 0x2A9DA0u;
    SET_GPR_U32(ctx, 31, 0x2A9DA8u);
    ctx->pc = 0x2988A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2988A0u, 0x2A9DA0u, 0x2A9DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DA8u;
label_2a9da8:
    // 0x2a9da8: 0x12000045  beqz        $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2A9DA8u;
    {
        const bool branch_taken_0x2a9da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9da8) {
            ctx->pc = 0x2A9EC0u;
            goto label_2a9ec0;
        }
    }
    ctx->pc = 0x2A9DB0u;
    // 0x2a9db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9db4: 0xc09f9f0  jal         func_27E7C0
    ctx->pc = 0x2A9DB4u;
    SET_GPR_U32(ctx, 31, 0x2A9DBCu);
    ctx->pc = 0x27E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E7C0u, 0x2A9DB4u, 0x2A9DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DBCu;
label_2a9dbc:
    // 0x2a9dbc: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2A9DBCu;
    {
        const bool branch_taken_0x2a9dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9dbc) {
            ctx->pc = 0x2A9EC0u;
            goto label_2a9ec0;
        }
    }
    ctx->pc = 0x2A9DC4u;
    // 0x2a9dc4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a9dc8: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2a9dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2a9dcc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a9dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a9dd0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A9DD0u;
    SET_GPR_U32(ctx, 31, 0x2A9DD8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A9DD0u, 0x2A9DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DD8u;
label_2a9dd8:
    // 0x2a9dd8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a9dd8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ddc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a9ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a9de0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2a9de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9de4: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2A9DE4u;
    SET_GPR_U32(ctx, 31, 0x2A9DECu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2A9DE4u, 0x2A9DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DECu;
label_2a9dec:
    // 0x2a9dec: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2a9decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a9df0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a9df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a9df4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2a9df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9df8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a9df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9dfc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a9dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9e00: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2a9e00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a9e04: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a9e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a9e08: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a9e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a9e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e10: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2a9e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a9e14: 0xc0aa7c4  jal         func_2A9F10
    ctx->pc = 0x2A9E14u;
    SET_GPR_U32(ctx, 31, 0x2A9E1Cu);
    ctx->pc = 0x2A9F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F10u, 0x2A9E14u, 0x2A9E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E1Cu;
label_2a9e1c:
    // 0x2a9e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a9e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e24: 0xc0aa7d0  jal         func_2A9F40
    ctx->pc = 0x2A9E24u;
    SET_GPR_U32(ctx, 31, 0x2A9E2Cu);
    ctx->pc = 0x2A9F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F40u, 0x2A9E24u, 0x2A9E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E2Cu;
label_2a9e2c:
    // 0x2a9e2c: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9E2Cu;
    {
        const bool branch_taken_0x2a9e2c = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x2a9e2c) {
            ctx->pc = 0x2A9E48u;
            goto label_2a9e48;
        }
    }
    ctx->pc = 0x2A9E34u;
    // 0x2a9e34: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2a9e34u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9e38: 0x0  nop
    ctx->pc = 0x2a9e38u;
    // NOP
    // 0x2a9e3c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2a9e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a9e40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9E40u;
    {
        const bool branch_taken_0x2a9e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9e40) {
            ctx->pc = 0x2A9E64u;
            goto label_2a9e64;
        }
    }
    ctx->pc = 0x2A9E48u;
label_2a9e48:
    // 0x2a9e48: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x2a9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x2a9e4c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2a9e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2a9e50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a9e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a9e54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9e54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9e58: 0x0  nop
    ctx->pc = 0x2a9e58u;
    // NOP
    // 0x2a9e5c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2a9e5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a9e60: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2a9e60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2a9e64:
    // 0x2a9e64: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9E64u;
    {
        const bool branch_taken_0x2a9e64 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x2a9e64) {
            ctx->pc = 0x2A9E80u;
            goto label_2a9e80;
        }
    }
    ctx->pc = 0x2A9E6Cu;
    // 0x2a9e6c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2a9e6cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9e70: 0x0  nop
    ctx->pc = 0x2a9e70u;
    // NOP
    // 0x2a9e74: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2a9e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2a9e78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9E78u;
    {
        const bool branch_taken_0x2a9e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9e78) {
            ctx->pc = 0x2A9E9Cu;
            goto label_2a9e9c;
        }
    }
    ctx->pc = 0x2A9E80u;
label_2a9e80:
    // 0x2a9e80: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x2a9e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x2a9e84: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2a9e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2a9e88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a9e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a9e8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9e90: 0x0  nop
    ctx->pc = 0x2a9e90u;
    // NOP
    // 0x2a9e94: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2a9e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2a9e98: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x2a9e98u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_2a9e9c:
    // 0x2a9e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ea0: 0xc0aa7c8  jal         func_2A9F20
    ctx->pc = 0x2A9EA0u;
    SET_GPR_U32(ctx, 31, 0x2A9EA8u);
    ctx->pc = 0x2A9F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F20u, 0x2A9EA0u, 0x2A9EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9EA8u;
label_2a9ea8:
    // 0x2a9ea8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a9eac: 0xac500058  sw          $s0, 0x58($v0)
    ctx->pc = 0x2a9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 16));
    // 0x2a9eb0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a9eb4: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x2a9eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2a9eb8: 0xc0a62e0  jal         func_298B80
    ctx->pc = 0x2A9EB8u;
    SET_GPR_U32(ctx, 31, 0x2A9EC0u);
    ctx->pc = 0x298B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298B80u, 0x2A9EB8u, 0x2A9EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9EC0u;
label_2a9ec0:
    // 0x2a9ec0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2a9ec4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a9ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2a9ec8: 0xc0858ac  jal         func_2162B0
    ctx->pc = 0x2A9EC8u;
    SET_GPR_U32(ctx, 31, 0x2A9ED0u);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A9EC8u, 0x2A9ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9ED0u;
label_2a9ed0:
    // 0x2a9ed0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a9ed4: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x2a9ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x2a9ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9edc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a9edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a9ee0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a9ee0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a9ee4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a9ee4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a9ee8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a9ee8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a9eec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a9eecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9ef0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a9ef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9ef4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a9ef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9ef8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a9ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9efc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9f00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9f04: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2a9f04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a9f08: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9F10u;
}
