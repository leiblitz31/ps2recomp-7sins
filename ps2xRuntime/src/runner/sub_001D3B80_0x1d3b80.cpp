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

// Function: sub_001D3B80
// Address: 0x1d3b80 - 0x1d4020
void sub_001D3B80_0x1d3b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3B80_0x1d3b80");
#endif

    switch (ctx->pc) {
        case 0x1d3bbcu: goto label_1d3bbc;
        case 0x1d3bc4u: goto label_1d3bc4;
        case 0x1d3c04u: goto label_1d3c04;
        case 0x1d3c18u: goto label_1d3c18;
        case 0x1d3c28u: goto label_1d3c28;
        case 0x1d3c34u: goto label_1d3c34;
        case 0x1d3c54u: goto label_1d3c54;
        case 0x1d3c70u: goto label_1d3c70;
        case 0x1d3c80u: goto label_1d3c80;
        case 0x1d3c94u: goto label_1d3c94;
        case 0x1d3ca4u: goto label_1d3ca4;
        case 0x1d3cb0u: goto label_1d3cb0;
        case 0x1d3cc8u: goto label_1d3cc8;
        case 0x1d3cecu: goto label_1d3cec;
        case 0x1d3d04u: goto label_1d3d04;
        case 0x1d3d10u: goto label_1d3d10;
        case 0x1d3d24u: goto label_1d3d24;
        case 0x1d3d3cu: goto label_1d3d3c;
        case 0x1d3d54u: goto label_1d3d54;
        case 0x1d3d70u: goto label_1d3d70;
        case 0x1d3d88u: goto label_1d3d88;
        case 0x1d3da4u: goto label_1d3da4;
        case 0x1d3dbcu: goto label_1d3dbc;
        case 0x1d3dd8u: goto label_1d3dd8;
        case 0x1d3df0u: goto label_1d3df0;
        case 0x1d3e0cu: goto label_1d3e0c;
        case 0x1d3e24u: goto label_1d3e24;
        case 0x1d3e40u: goto label_1d3e40;
        case 0x1d3e58u: goto label_1d3e58;
        case 0x1d3e74u: goto label_1d3e74;
        case 0x1d3e8cu: goto label_1d3e8c;
        case 0x1d3ea8u: goto label_1d3ea8;
        case 0x1d3ec0u: goto label_1d3ec0;
        case 0x1d3edcu: goto label_1d3edc;
        case 0x1d3ef4u: goto label_1d3ef4;
        case 0x1d3f10u: goto label_1d3f10;
        case 0x1d3f28u: goto label_1d3f28;
        case 0x1d3f44u: goto label_1d3f44;
        case 0x1d3f5cu: goto label_1d3f5c;
        case 0x1d3f78u: goto label_1d3f78;
        case 0x1d3f90u: goto label_1d3f90;
        case 0x1d3facu: goto label_1d3fac;
        case 0x1d3fb8u: goto label_1d3fb8;
        case 0x1d3fd0u: goto label_1d3fd0;
        case 0x1d3fe4u: goto label_1d3fe4;
        default: break;
    }

    ctx->pc = 0x1d3b80u;

    // 0x1d3b80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d3b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d3b84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1d3b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1d3b88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d3b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d3b8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d3b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d3b90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d3b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d3b94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d3b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d3b98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d3b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d3b9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d3b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d3ba0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d3ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3ba4: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x1d3ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x1d3ba8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3bac: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d3bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d3bb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1d3bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3bb4: 0xc106784  jal         func_419E10
    ctx->pc = 0x1D3BB4u;
    SET_GPR_U32(ctx, 31, 0x1D3BBCu);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x1D3BB4u, 0x1D3BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3BBCu;
label_1d3bbc:
    // 0x1d3bbc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1d3bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d3bc0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1d3bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d3bc4:
    // 0x1d3bc4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d3bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3bc8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d3bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3bcc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d3bd0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d3bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d3bd4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1d3bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1d3bd8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1d3bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1d3bdc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1d3bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1d3be0: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D3BE0u;
    {
        const bool branch_taken_0x1d3be0 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1d3be0) {
            ctx->pc = 0x1D3BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3bc4;
        }
    }
    ctx->pc = 0x1D3BE8u;
    // 0x1d3be8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3bec: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d3becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d3bf0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1d3bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3bf4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1d3bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d3bf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bfc: 0xc1065f8  jal         func_4197E0
    ctx->pc = 0x1D3BFCu;
    SET_GPR_U32(ctx, 31, 0x1D3C04u);
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x1D3BFCu, 0x1D3C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C04u;
label_1d3c04:
    // 0x1d3c04: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d3c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1d3c08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d3c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3c0c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d3c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d3c10: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1D3C10u;
    SET_GPR_U32(ctx, 31, 0x1D3C18u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D3C10u, 0x1D3C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C18u;
label_1d3c18:
    // 0x1d3c18: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d3c18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d3c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c20: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x1D3C20u;
    SET_GPR_U32(ctx, 31, 0x1D3C28u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1D3C20u, 0x1D3C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C28u;
label_1d3c28:
    // 0x1d3c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c2c: 0xc0aeea8  jal         func_2BBAA0
    ctx->pc = 0x1D3C2Cu;
    SET_GPR_U32(ctx, 31, 0x1D3C34u);
    ctx->pc = 0x2BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAA0u, 0x1D3C2Cu, 0x1D3C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C34u;
label_1d3c34:
    // 0x1d3c34: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d3c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d3c38: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3c3c: 0xac4300ac  sw          $v1, 0xAC($v0)
    ctx->pc = 0x1d3c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 3));
    // 0x1d3c40: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3c44: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d3c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x1d3c48: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d3c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d3c4c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1D3C4Cu;
    SET_GPR_U32(ctx, 31, 0x1D3C54u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D3C4Cu, 0x1D3C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C54u;
label_1d3c54:
    // 0x1d3c54: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d3c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c58: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3c5c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d3c60: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x1d3c60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3c64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d3c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c68: 0xc091018  jal         func_244060
    ctx->pc = 0x1D3C68u;
    SET_GPR_U32(ctx, 31, 0x1D3C70u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x1D3C68u, 0x1D3C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C70u;
label_1d3c70:
    // 0x1d3c70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d3c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c78: 0xc10671c  jal         func_419C70
    ctx->pc = 0x1D3C78u;
    SET_GPR_U32(ctx, 31, 0x1D3C80u);
    ctx->pc = 0x419C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C70u, 0x1D3C78u, 0x1D3C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C80u;
label_1d3c80:
    // 0x1d3c80: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1d3c84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d3c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3c88: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d3c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d3c8c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1D3C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D3C94u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D3C8Cu, 0x1D3C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C94u;
label_1d3c94:
    // 0x1d3c94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d3c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d3c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c9c: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x1D3C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D3CA4u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x1D3C9Cu, 0x1D3CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CA4u;
label_1d3ca4:
    // 0x1d3ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ca8: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x1D3CA8u;
    SET_GPR_U32(ctx, 31, 0x1D3CB0u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x1D3CA8u, 0x1D3CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CB0u;
label_1d3cb0:
    // 0x1d3cb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cb4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cbc: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x1d3cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d3cc0: 0xc0e6ea6  jal         func_39BA98
    ctx->pc = 0x1D3CC0u;
    SET_GPR_U32(ctx, 31, 0x1D3CC8u);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x1D3CC0u, 0x1D3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CC8u;
label_1d3cc8:
    // 0x1d3cc8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3ccc: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d3cd0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D3CD0u;
    {
        const bool branch_taken_0x1d3cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3cd0) {
            ctx->pc = 0x1D3D10u;
            goto label_1d3d10;
        }
    }
    ctx->pc = 0x1D3CD8u;
    // 0x1d3cd8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1d3cdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d3cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d3ce0: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x1d3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x1d3ce4: 0xc0529b8  jal         func_14A6E0
    ctx->pc = 0x1D3CE4u;
    SET_GPR_U32(ctx, 31, 0x1D3CECu);
    ctx->pc = 0x14A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A6E0u, 0x1D3CE4u, 0x1D3CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CECu;
label_1d3cec:
    // 0x1d3cec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3cf0: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x1d3cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x1d3cf4: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x1d3cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d3cf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cfc: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x1D3CFCu;
    SET_GPR_U32(ctx, 31, 0x1D3D04u);
    ctx->pc = 0x14AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFA0u, 0x1D3CFCu, 0x1D3D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D04u;
label_1d3d04:
    // 0x1d3d04: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x1d3d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x1d3d08: 0xc052c38  jal         func_14B0E0
    ctx->pc = 0x1D3D08u;
    SET_GPR_U32(ctx, 31, 0x1D3D10u);
    ctx->pc = 0x14B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B0E0u, 0x1D3D08u, 0x1D3D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D10u;
label_1d3d10:
    // 0x1d3d10: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3d14: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3d18: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1d3d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d3d1c: 0xc056708  jal         func_159C20
    ctx->pc = 0x1D3D1Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D24u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1D3D1Cu, 0x1D3D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D24u;
label_1d3d24:
    // 0x1d3d24: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3d28: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d3d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d3d2c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d3d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1d3d30: 0x24a57b90  addiu       $a1, $a1, 0x7B90
    ctx->pc = 0x1d3d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31632));
    // 0x1d3d34: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1D3D34u;
    SET_GPR_U32(ctx, 31, 0x1D3D3Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1D3D34u, 0x1D3D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D3Cu;
label_1d3d3c:
    // 0x1d3d3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3d3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d40: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3d44: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3d48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d4c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D3D4Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D54u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D3D4Cu, 0x1D3D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D54u;
label_1d3d54:
    // 0x1d3d54: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1d3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1d3d58: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3d5c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d3d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d3d60: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d3d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1d3d64: 0x24a57bb0  addiu       $a1, $a1, 0x7BB0
    ctx->pc = 0x1d3d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31664));
    // 0x1d3d68: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1D3D68u;
    SET_GPR_U32(ctx, 31, 0x1D3D70u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1D3D68u, 0x1D3D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D70u;
label_1d3d70:
    // 0x1d3d70: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3d70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d74: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3d78: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3d7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d3d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3d80: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D3D80u;
    SET_GPR_U32(ctx, 31, 0x1D3D88u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D3D80u, 0x1D3D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D88u;
label_1d3d88:
    // 0x1d3d88: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1d3d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1d3d8c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3d90: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d3d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d3d94: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d3d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1d3d98: 0x24a57bd0  addiu       $a1, $a1, 0x7BD0
    ctx->pc = 0x1d3d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31696));
    // 0x1d3d9c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1D3D9Cu;
    SET_GPR_U32(ctx, 31, 0x1D3DA4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1D3D9Cu, 0x1D3DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DA4u;
label_1d3da4:
    // 0x1d3da4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3da4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3da8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3dac: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3db0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d3db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3db4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D3DB4u;
    SET_GPR_U32(ctx, 31, 0x1D3DBCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D3DB4u, 0x1D3DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DBCu;
label_1d3dbc:
    // 0x1d3dbc: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1d3dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1d3dc0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3dc4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d3dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d3dc8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d3dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1d3dcc: 0x24a57bf0  addiu       $a1, $a1, 0x7BF0
    ctx->pc = 0x1d3dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31728));
    // 0x1d3dd0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1D3DD0u;
    SET_GPR_U32(ctx, 31, 0x1D3DD8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1D3DD0u, 0x1D3DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DD8u;
label_1d3dd8:
    // 0x1d3dd8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3dd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ddc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3de0: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3de4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d3de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3de8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D3DE8u;
    SET_GPR_U32(ctx, 31, 0x1D3DF0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D3DE8u, 0x1D3DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DF0u;
label_1d3df0:
    // 0x1d3df0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1d3df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1d3df4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3df8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d3df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d3dfc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d3dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1d3e00: 0x24a57c10  addiu       $a1, $a1, 0x7C10
    ctx->pc = 0x1d3e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31760));
    // 0x1d3e04: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1D3E04u;
    SET_GPR_U32(ctx, 31, 0x1D3E0Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1D3E04u, 0x1D3E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E0Cu;
label_1d3e0c:
    // 0x1d3e0c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3e0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e10: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3e14: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3e18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d3e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d3e1c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D3E1Cu;
    SET_GPR_U32(ctx, 31, 0x1D3E24u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D3E1Cu, 0x1D3E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E24u;
label_1d3e24:
    // 0x1d3e24: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1d3e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1d3e28: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3e2c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d3e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d3e30: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d3e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1d3e34: 0x24a57c30  addiu       $a1, $a1, 0x7C30
    ctx->pc = 0x1d3e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31792));
    // 0x1d3e38: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1D3E38u;
    SET_GPR_U32(ctx, 31, 0x1D3E40u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1D3E38u, 0x1D3E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E40u;
label_1d3e40:
    // 0x1d3e40: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3e40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e44: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3e48: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3e4c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d3e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d3e50: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D3E50u;
    SET_GPR_U32(ctx, 31, 0x1D3E58u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D3E50u, 0x1D3E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E58u;
label_1d3e58:
    // 0x1d3e58: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1d3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1d3e5c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3e60: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d3e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d3e64: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d3e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1d3e68: 0x24a57c50  addiu       $a1, $a1, 0x7C50
    ctx->pc = 0x1d3e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31824));
    // 0x1d3e6c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1D3E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D3E74u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1D3E6Cu, 0x1D3E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E74u;
label_1d3e74:
    // 0x1d3e74: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3e74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e78: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3e7c: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3e80: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d3e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d3e84: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D3E84u;
    SET_GPR_U32(ctx, 31, 0x1D3E8Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D3E84u, 0x1D3E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E8Cu;
label_1d3e8c:
    // 0x1d3e8c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1d3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1d3e90: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3e94: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d3e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d3e98: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d3e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1d3e9c: 0x24a57c70  addiu       $a1, $a1, 0x7C70
    ctx->pc = 0x1d3e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31856));
    // 0x1d3ea0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1D3EA0u;
    SET_GPR_U32(ctx, 31, 0x1D3EA8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1D3EA0u, 0x1D3EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EA8u;
label_1d3ea8:
    // 0x1d3ea8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3ea8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3eac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3eb0: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3eb4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d3eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d3eb8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D3EB8u;
    SET_GPR_U32(ctx, 31, 0x1D3EC0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D3EB8u, 0x1D3EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EC0u;
label_1d3ec0:
    // 0x1d3ec0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1d3ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1d3ec4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3ec8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d3ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d3ecc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d3eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1d3ed0: 0x24a57c90  addiu       $a1, $a1, 0x7C90
    ctx->pc = 0x1d3ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
    // 0x1d3ed4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1D3ED4u;
    SET_GPR_U32(ctx, 31, 0x1D3EDCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1D3ED4u, 0x1D3EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EDCu;
label_1d3edc:
    // 0x1d3edc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3edcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ee0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3ee4: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3ee8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1d3ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d3eec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D3EECu;
    SET_GPR_U32(ctx, 31, 0x1D3EF4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D3EECu, 0x1D3EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EF4u;
label_1d3ef4:
    // 0x1d3ef4: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1d3ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1d3ef8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3efc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d3efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d3f00: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d3f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1d3f04: 0x24a57cb0  addiu       $a1, $a1, 0x7CB0
    ctx->pc = 0x1d3f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31920));
    // 0x1d3f08: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1D3F08u;
    SET_GPR_U32(ctx, 31, 0x1D3F10u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1D3F08u, 0x1D3F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F10u;
label_1d3f10:
    // 0x1d3f10: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3f10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f14: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3f18: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3f1c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d3f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d3f20: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D3F20u;
    SET_GPR_U32(ctx, 31, 0x1D3F28u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D3F20u, 0x1D3F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F28u;
label_1d3f28:
    // 0x1d3f28: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1d3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1d3f2c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3f30: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d3f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d3f34: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d3f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1d3f38: 0x24a57cd0  addiu       $a1, $a1, 0x7CD0
    ctx->pc = 0x1d3f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31952));
    // 0x1d3f3c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1D3F3Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F44u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1D3F3Cu, 0x1D3F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F44u;
label_1d3f44:
    // 0x1d3f44: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3f44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f48: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3f4c: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3f50: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d3f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3f54: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D3F54u;
    SET_GPR_U32(ctx, 31, 0x1D3F5Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D3F54u, 0x1D3F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F5Cu;
label_1d3f5c:
    // 0x1d3f5c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1d3f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1d3f60: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3f64: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1d3f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d3f68: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d3f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1d3f6c: 0x24a57cf0  addiu       $a1, $a1, 0x7CF0
    ctx->pc = 0x1d3f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31984));
    // 0x1d3f70: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1D3F70u;
    SET_GPR_U32(ctx, 31, 0x1D3F78u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1D3F70u, 0x1D3F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F78u;
label_1d3f78:
    // 0x1d3f78: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3f78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f7c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3f80: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3f84: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1d3f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d3f88: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D3F88u;
    SET_GPR_U32(ctx, 31, 0x1D3F90u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D3F88u, 0x1D3F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F90u;
label_1d3f90:
    // 0x1d3f90: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1d3f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1d3f94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d3f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3f98: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d3f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3f9c: 0xa06400ec  sb          $a0, 0xEC($v1)
    ctx->pc = 0x1d3f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 236), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d3fa0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d3fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3fa4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D3FA4u;
    {
        const bool branch_taken_0x1d3fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3fa4) {
            ctx->pc = 0x1D3FE8u;
            goto label_1d3fe8;
        }
    }
    ctx->pc = 0x1D3FACu;
label_1d3fac:
    // 0x1d3fac: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1d3facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3fb0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1D3FB0u;
    SET_GPR_U32(ctx, 31, 0x1D3FB8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1D3FB0u, 0x1D3FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3FB8u;
label_1d3fb8:
    // 0x1d3fb8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3fb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3fbc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3fc0: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1d3fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1d3fc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3fc8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1D3FC8u;
    SET_GPR_U32(ctx, 31, 0x1D3FD0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1D3FC8u, 0x1D3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3FD0u;
label_1d3fd0:
    // 0x1d3fd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d3fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3fd4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d3fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3fd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3fdc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1D3FDCu;
    SET_GPR_U32(ctx, 31, 0x1D3FE4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1D3FDCu, 0x1D3FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3FE4u;
label_1d3fe4:
    // 0x1d3fe4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d3fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d3fe8:
    // 0x1d3fe8: 0x2e03000c  sltiu       $v1, $s0, 0xC
    ctx->pc = 0x1d3fe8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1d3fec: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D3FECu;
    {
        const bool branch_taken_0x1d3fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3fec) {
            ctx->pc = 0x1D3FACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3fac;
        }
    }
    ctx->pc = 0x1D3FF4u;
    // 0x1d3ff4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1d3ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d3ff8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d3ff8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d3ffc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d3ffcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4000: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d4000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4004: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d4004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4008: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d4008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d400c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d400cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4014: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1d4014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d4018: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4020u;
}
