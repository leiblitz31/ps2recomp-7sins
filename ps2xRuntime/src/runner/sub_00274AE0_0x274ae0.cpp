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

// Function: sub_00274AE0
// Address: 0x274ae0 - 0x274f10
void sub_00274AE0_0x274ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274AE0_0x274ae0");
#endif

    switch (ctx->pc) {
        case 0x274b24u: goto label_274b24;
        case 0x274b34u: goto label_274b34;
        case 0x274b40u: goto label_274b40;
        case 0x274b68u: goto label_274b68;
        case 0x274b88u: goto label_274b88;
        case 0x274ba0u: goto label_274ba0;
        case 0x274bbcu: goto label_274bbc;
        case 0x274bccu: goto label_274bcc;
        case 0x274be4u: goto label_274be4;
        case 0x274c04u: goto label_274c04;
        case 0x274c10u: goto label_274c10;
        case 0x274c20u: goto label_274c20;
        case 0x274c30u: goto label_274c30;
        case 0x274c54u: goto label_274c54;
        case 0x274c98u: goto label_274c98;
        case 0x274cbcu: goto label_274cbc;
        case 0x274cd0u: goto label_274cd0;
        case 0x274ce4u: goto label_274ce4;
        case 0x274cfcu: goto label_274cfc;
        case 0x274d0cu: goto label_274d0c;
        case 0x274d18u: goto label_274d18;
        case 0x274d2cu: goto label_274d2c;
        case 0x274d44u: goto label_274d44;
        case 0x274d54u: goto label_274d54;
        case 0x274d6cu: goto label_274d6c;
        case 0x274d88u: goto label_274d88;
        case 0x274d9cu: goto label_274d9c;
        case 0x274db8u: goto label_274db8;
        case 0x274dc4u: goto label_274dc4;
        case 0x274decu: goto label_274dec;
        case 0x274e04u: goto label_274e04;
        case 0x274e14u: goto label_274e14;
        case 0x274e24u: goto label_274e24;
        case 0x274e40u: goto label_274e40;
        case 0x274e54u: goto label_274e54;
        case 0x274e64u: goto label_274e64;
        case 0x274e70u: goto label_274e70;
        case 0x274e8cu: goto label_274e8c;
        case 0x274e9cu: goto label_274e9c;
        case 0x274eb4u: goto label_274eb4;
        case 0x274ed0u: goto label_274ed0;
        default: break;
    }

    ctx->pc = 0x274ae0u;

    // 0x274ae0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x274ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x274ae4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x274ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x274ae8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x274ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x274aec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x274aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x274af0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x274af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x274af4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x274af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x274af8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x274af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x274afc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x274afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x274b00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x274b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x274b04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x274b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274b0c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x274b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x274b10: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x274b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274b14: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x274b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x274b18: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x274b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x274b1c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x274B1Cu;
    SET_GPR_U32(ctx, 31, 0x274B24u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x274B1Cu, 0x274B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B24u;
label_274b24:
    // 0x274b24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x274b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b2c: 0xc096814  jal         func_25A050
    ctx->pc = 0x274B2Cu;
    SET_GPR_U32(ctx, 31, 0x274B34u);
    ctx->pc = 0x25A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A050u, 0x274B2Cu, 0x274B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B34u;
label_274b34:
    // 0x274b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x274b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b38: 0xc09d3d0  jal         func_274F40
    ctx->pc = 0x274B38u;
    SET_GPR_U32(ctx, 31, 0x274B40u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x274B38u, 0x274B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B40u;
label_274b40:
    // 0x274b40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x274b40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b44: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x274b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274b48: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x274b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x274b4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274B4Cu;
    {
        const bool branch_taken_0x274b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b4c) {
            ctx->pc = 0x274B6Cu;
            goto label_274b6c;
        }
    }
    ctx->pc = 0x274B54u;
    // 0x274b54: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x274b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274b58: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x274b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x274b5c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x274b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x274b60: 0xc085538  jal         func_2154E0
    ctx->pc = 0x274B60u;
    SET_GPR_U32(ctx, 31, 0x274B68u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x274B60u, 0x274B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B68u;
label_274b68:
    // 0x274b68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x274b68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274b6c:
    // 0x274b6c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x274b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274b70: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x274b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x274b74: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x274b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x274b78: 0x24a5d048  addiu       $a1, $a1, -0x2FB8
    ctx->pc = 0x274b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955080));
    // 0x274b7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x274b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274b80: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x274B80u;
    SET_GPR_U32(ctx, 31, 0x274B88u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x274B80u, 0x274B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B88u;
label_274b88:
    // 0x274b88: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x274B88u;
    {
        const bool branch_taken_0x274b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b88) {
            ctx->pc = 0x274DF4u;
            goto label_274df4;
        }
    }
    ctx->pc = 0x274B90u;
    // 0x274b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x274b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274b98: 0xc096b74  jal         func_25ADD0
    ctx->pc = 0x274B98u;
    SET_GPR_U32(ctx, 31, 0x274BA0u);
    ctx->pc = 0x25ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADD0u, 0x274B98u, 0x274BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274BA0u;
label_274ba0:
    // 0x274ba0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x274ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274ba4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x274ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x274ba8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x274ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x274bac: 0x24a5d060  addiu       $a1, $a1, -0x2FA0
    ctx->pc = 0x274bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955104));
    // 0x274bb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bb4: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x274BB4u;
    SET_GPR_U32(ctx, 31, 0x274BBCu);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x274BB4u, 0x274BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274BBCu;
label_274bbc:
    // 0x274bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x274bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bc4: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x274BC4u;
    SET_GPR_U32(ctx, 31, 0x274BCCu);
    ctx->pc = 0x274F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F10u, 0x274BC4u, 0x274BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274BCCu;
label_274bcc:
    // 0x274bcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x274bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bd0: 0x1260002c  beqz        $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x274BD0u;
    {
        const bool branch_taken_0x274bd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x274bd0) {
            ctx->pc = 0x274C84u;
            goto label_274c84;
        }
    }
    ctx->pc = 0x274BD8u;
    // 0x274bd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x274bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bdc: 0xc0976e4  jal         func_25DB90
    ctx->pc = 0x274BDCu;
    SET_GPR_U32(ctx, 31, 0x274BE4u);
    ctx->pc = 0x25DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DB90u, 0x274BDCu, 0x274BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274BE4u;
label_274be4:
    // 0x274be4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x274be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x274be8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x274be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x274bec: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x274becu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x274bf0: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x274BF0u;
    {
        const bool branch_taken_0x274bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274bf0) {
            ctx->pc = 0x274CBCu;
            goto label_274cbc;
        }
    }
    ctx->pc = 0x274BF8u;
    // 0x274bf8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x274bf8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bfc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x274BFCu;
    {
        const bool branch_taken_0x274bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274bfc) {
            ctx->pc = 0x274C6Cu;
            goto label_274c6c;
        }
    }
    ctx->pc = 0x274C04u;
label_274c04:
    // 0x274c04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x274c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c08: 0xc0976dc  jal         func_25DB70
    ctx->pc = 0x274C08u;
    SET_GPR_U32(ctx, 31, 0x274C10u);
    ctx->pc = 0x25DB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DB70u, 0x274C08u, 0x274C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C10u;
label_274c10:
    // 0x274c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x274c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x274c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c18: 0xc09748c  jal         func_25D230
    ctx->pc = 0x274C18u;
    SET_GPR_U32(ctx, 31, 0x274C20u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x274C18u, 0x274C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C20u;
label_274c20:
    // 0x274c20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x274c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274c24: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x274c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x274c28: 0xc085538  jal         func_2154E0
    ctx->pc = 0x274C28u;
    SET_GPR_U32(ctx, 31, 0x274C30u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x274C28u, 0x274C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C30u;
label_274c30:
    // 0x274c30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x274c30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c34: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x274c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x274c38: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x274c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274c3c: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x274c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x274c40: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x274C40u;
    {
        const bool branch_taken_0x274c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x274c40) {
            ctx->pc = 0x274C68u;
            goto label_274c68;
        }
    }
    ctx->pc = 0x274C48u;
    // 0x274c48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x274c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c4c: 0xc096b6c  jal         func_25ADB0
    ctx->pc = 0x274C4Cu;
    SET_GPR_U32(ctx, 31, 0x274C54u);
    ctx->pc = 0x25ADB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADB0u, 0x274C4Cu, 0x274C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C54u;
label_274c54:
    // 0x274c54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274C54u;
    {
        const bool branch_taken_0x274c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c54) {
            ctx->pc = 0x274C68u;
            goto label_274c68;
        }
    }
    ctx->pc = 0x274C5Cu;
    // 0x274c5c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x274c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c60: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x274C60u;
    {
        const bool branch_taken_0x274c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c60) {
            ctx->pc = 0x274CBCu;
            goto label_274cbc;
        }
    }
    ctx->pc = 0x274C68u;
label_274c68:
    // 0x274c68: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x274c68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_274c6c:
    // 0x274c6c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x274c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x274c70: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x274c70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x274c74: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x274C74u;
    {
        const bool branch_taken_0x274c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274c74) {
            ctx->pc = 0x274C04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274c04;
        }
    }
    ctx->pc = 0x274C7Cu;
    // 0x274c7c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x274C7Cu;
    {
        const bool branch_taken_0x274c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c7c) {
            ctx->pc = 0x274CBCu;
            goto label_274cbc;
        }
    }
    ctx->pc = 0x274C84u;
label_274c84:
    // 0x274c84: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x274c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274c88: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x274c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x274c8c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x274c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x274c90: 0xc085538  jal         func_2154E0
    ctx->pc = 0x274C90u;
    SET_GPR_U32(ctx, 31, 0x274C98u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x274C90u, 0x274C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C98u;
label_274c98:
    // 0x274c98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x274c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c9c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x274c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274ca0: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x274ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x274ca4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x274ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274ca8: 0x8c460040  lw          $a2, 0x40($v0)
    ctx->pc = 0x274ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x274cac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cb0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x274cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274cb4: 0xc08febc  jal         func_23FAF0
    ctx->pc = 0x274CB4u;
    SET_GPR_U32(ctx, 31, 0x274CBCu);
    ctx->pc = 0x23FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAF0u, 0x274CB4u, 0x274CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CBCu;
label_274cbc:
    // 0x274cbc: 0x12200084  beqz        $s1, . + 4 + (0x84 << 2)
    ctx->pc = 0x274CBCu;
    {
        const bool branch_taken_0x274cbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x274cbc) {
            ctx->pc = 0x274ED0u;
            goto label_274ed0;
        }
    }
    ctx->pc = 0x274CC4u;
    // 0x274cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cc8: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x274CC8u;
    SET_GPR_U32(ctx, 31, 0x274CD0u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x274CC8u, 0x274CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CD0u;
label_274cd0:
    // 0x274cd0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274CD0u;
    {
        const bool branch_taken_0x274cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274cd0) {
            ctx->pc = 0x274CECu;
            goto label_274cec;
        }
    }
    ctx->pc = 0x274CD8u;
    // 0x274cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cdc: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x274CDCu;
    SET_GPR_U32(ctx, 31, 0x274CE4u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x274CDCu, 0x274CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CE4u;
label_274ce4:
    // 0x274ce4: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x274CE4u;
    {
        const bool branch_taken_0x274ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274ce4) {
            ctx->pc = 0x274ED0u;
            goto label_274ed0;
        }
    }
    ctx->pc = 0x274CECu;
label_274cec:
    // 0x274cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cf0: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x274cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x274cf4: 0xc096888  jal         func_25A220
    ctx->pc = 0x274CF4u;
    SET_GPR_U32(ctx, 31, 0x274CFCu);
    ctx->pc = 0x25A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A220u, 0x274CF4u, 0x274CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CFCu;
label_274cfc:
    // 0x274cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d00: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x274d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x274d04: 0xc096888  jal         func_25A220
    ctx->pc = 0x274D04u;
    SET_GPR_U32(ctx, 31, 0x274D0Cu);
    ctx->pc = 0x25A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A220u, 0x274D04u, 0x274D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D0Cu;
label_274d0c:
    // 0x274d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d10: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x274D10u;
    SET_GPR_U32(ctx, 31, 0x274D18u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x274D10u, 0x274D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D18u;
label_274d18:
    // 0x274d18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274D18u;
    {
        const bool branch_taken_0x274d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274d18) {
            ctx->pc = 0x274D34u;
            goto label_274d34;
        }
    }
    ctx->pc = 0x274D20u;
    // 0x274d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d24: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x274D24u;
    SET_GPR_U32(ctx, 31, 0x274D2Cu);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x274D24u, 0x274D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D2Cu;
label_274d2c:
    // 0x274d2c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x274D2Cu;
    {
        const bool branch_taken_0x274d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274d2c) {
            ctx->pc = 0x274D9Cu;
            goto label_274d9c;
        }
    }
    ctx->pc = 0x274D34u;
label_274d34:
    // 0x274d34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x274d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x274d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d3c: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x274D3Cu;
    SET_GPR_U32(ctx, 31, 0x274D44u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x274D3Cu, 0x274D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D44u;
label_274d44:
    // 0x274d44: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x274d44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d4c: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x274D4Cu;
    SET_GPR_U32(ctx, 31, 0x274D54u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x274D4Cu, 0x274D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D54u;
label_274d54:
    // 0x274d54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x274D54u;
    {
        const bool branch_taken_0x274d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274d54) {
            ctx->pc = 0x274D78u;
            goto label_274d78;
        }
    }
    ctx->pc = 0x274D5Cu;
    // 0x274d5c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x274d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x274d60: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x274d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x274d64: 0xc085538  jal         func_2154E0
    ctx->pc = 0x274D64u;
    SET_GPR_U32(ctx, 31, 0x274D6Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x274D64u, 0x274D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D6Cu;
label_274d6c:
    // 0x274d6c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x274d6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x274D70u;
    {
        const bool branch_taken_0x274d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274d70) {
            ctx->pc = 0x274D8Cu;
            goto label_274d8c;
        }
    }
    ctx->pc = 0x274D78u;
label_274d78:
    // 0x274d78: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x274d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x274d7c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x274d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x274d80: 0xc085538  jal         func_2154E0
    ctx->pc = 0x274D80u;
    SET_GPR_U32(ctx, 31, 0x274D88u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x274D80u, 0x274D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D88u;
label_274d88:
    // 0x274d88: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x274d88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274d8c:
    // 0x274d8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x274d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x274d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274d94: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x274D94u;
    SET_GPR_U32(ctx, 31, 0x274D9Cu);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x274D94u, 0x274D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D9Cu;
label_274d9c:
    // 0x274d9c: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x274d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x274da0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x274da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274da4: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x274da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x274da8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274da8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274dac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x274dacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274db0: 0xc08febc  jal         func_23FAF0
    ctx->pc = 0x274DB0u;
    SET_GPR_U32(ctx, 31, 0x274DB8u);
    ctx->pc = 0x23FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAF0u, 0x274DB0u, 0x274DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274DB8u;
label_274db8:
    // 0x274db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274dbc: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x274DBCu;
    SET_GPR_U32(ctx, 31, 0x274DC4u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x274DBCu, 0x274DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274DC4u;
label_274dc4:
    // 0x274dc4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x274DC4u;
    {
        const bool branch_taken_0x274dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274dc4) {
            ctx->pc = 0x274ED0u;
            goto label_274ed0;
        }
    }
    ctx->pc = 0x274DCCu;
    // 0x274dcc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x274dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274dd0: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x274dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x274dd4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x274dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x274dd8: 0x8c460048  lw          $a2, 0x48($v0)
    ctx->pc = 0x274dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x274ddc: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x274ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x274de0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x274de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274de4: 0xc08febc  jal         func_23FAF0
    ctx->pc = 0x274DE4u;
    SET_GPR_U32(ctx, 31, 0x274DECu);
    ctx->pc = 0x23FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAF0u, 0x274DE4u, 0x274DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274DECu;
label_274dec:
    // 0x274dec: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x274DECu;
    {
        const bool branch_taken_0x274dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274dec) {
            ctx->pc = 0x274ED0u;
            goto label_274ed0;
        }
    }
    ctx->pc = 0x274DF4u;
label_274df4:
    // 0x274df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x274df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274dfc: 0xc096b74  jal         func_25ADD0
    ctx->pc = 0x274DFCu;
    SET_GPR_U32(ctx, 31, 0x274E04u);
    ctx->pc = 0x25ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADD0u, 0x274DFCu, 0x274E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E04u;
label_274e04:
    // 0x274e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x274e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e0c: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x274E0Cu;
    SET_GPR_U32(ctx, 31, 0x274E14u);
    ctx->pc = 0x274F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F10u, 0x274E0Cu, 0x274E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E14u;
label_274e14:
    // 0x274e14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x274e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e1c: 0xc096880  jal         func_25A200
    ctx->pc = 0x274E1Cu;
    SET_GPR_U32(ctx, 31, 0x274E24u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x274E1Cu, 0x274E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E24u;
label_274e24:
    // 0x274e24: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x274e24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e28: 0x13c0000e  beqz        $fp, . + 4 + (0xE << 2)
    ctx->pc = 0x274E28u;
    {
        const bool branch_taken_0x274e28 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x274e28) {
            ctx->pc = 0x274E64u;
            goto label_274e64;
        }
    }
    ctx->pc = 0x274E30u;
    // 0x274e30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x274e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e34: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x274e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x274e38: 0xc085538  jal         func_2154E0
    ctx->pc = 0x274E38u;
    SET_GPR_U32(ctx, 31, 0x274E40u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x274E38u, 0x274E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E40u;
label_274e40:
    // 0x274e40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x274e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x274e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e4c: 0xc096888  jal         func_25A220
    ctx->pc = 0x274E4Cu;
    SET_GPR_U32(ctx, 31, 0x274E54u);
    ctx->pc = 0x25A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A220u, 0x274E4Cu, 0x274E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E54u;
label_274e54:
    // 0x274e54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x274e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x274e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e5c: 0xc096888  jal         func_25A220
    ctx->pc = 0x274E5Cu;
    SET_GPR_U32(ctx, 31, 0x274E64u);
    ctx->pc = 0x25A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A220u, 0x274E5Cu, 0x274E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E64u;
label_274e64:
    // 0x274e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e68: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x274E68u;
    SET_GPR_U32(ctx, 31, 0x274E70u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x274E68u, 0x274E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E70u;
label_274e70:
    // 0x274e70: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x274E70u;
    {
        const bool branch_taken_0x274e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274e70) {
            ctx->pc = 0x274E94u;
            goto label_274e94;
        }
    }
    ctx->pc = 0x274E78u;
    // 0x274e78: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x274E78u;
    {
        const bool branch_taken_0x274e78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x274e78) {
            ctx->pc = 0x274ED0u;
            goto label_274ed0;
        }
    }
    ctx->pc = 0x274E80u;
    // 0x274e80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x274e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274e84: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x274E84u;
    SET_GPR_U32(ctx, 31, 0x274E8Cu);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x274E84u, 0x274E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E8Cu;
label_274e8c:
    // 0x274e8c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x274E8Cu;
    {
        const bool branch_taken_0x274e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274e8c) {
            ctx->pc = 0x274ED0u;
            goto label_274ed0;
        }
    }
    ctx->pc = 0x274E94u;
label_274e94:
    // 0x274e94: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x274E94u;
    SET_GPR_U32(ctx, 31, 0x274E9Cu);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x274E94u, 0x274E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E9Cu;
label_274e9c:
    // 0x274e9c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x274e9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ea0: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x274EA0u;
    {
        const bool branch_taken_0x274ea0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x274ea0) {
            ctx->pc = 0x274EC0u;
            goto label_274ec0;
        }
    }
    ctx->pc = 0x274EA8u;
    // 0x274ea8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x274ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274eac: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x274EACu;
    SET_GPR_U32(ctx, 31, 0x274EB4u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x274EACu, 0x274EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274EB4u;
label_274eb4:
    // 0x274eb4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x274eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x274eb8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x274EB8u;
    {
        const bool branch_taken_0x274eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x274eb8) {
            ctx->pc = 0x274ED0u;
            goto label_274ed0;
        }
    }
    ctx->pc = 0x274EC0u;
label_274ec0:
    // 0x274ec0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x274ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x274ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ec8: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x274EC8u;
    SET_GPR_U32(ctx, 31, 0x274ED0u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x274EC8u, 0x274ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274ED0u;
label_274ed0:
    // 0x274ed0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x274ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x274ed4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x274ed4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x274ed8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x274ed8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x274edc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x274edcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x274ee0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x274ee0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274ee4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x274ee4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274ee8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x274ee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274eec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x274eecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274ef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274ef8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x274ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x274efc: 0x3e00008  jr          $ra
    ctx->pc = 0x274EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274F04u;
    // 0x274f04: 0x0  nop
    ctx->pc = 0x274f04u;
    // NOP
    // 0x274f08: 0x0  nop
    ctx->pc = 0x274f08u;
    // NOP
    // 0x274f0c: 0x0  nop
    ctx->pc = 0x274f0cu;
    // NOP
    ctx->pc = 0x274f10u;
}
