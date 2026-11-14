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

// Function: sub_002B89D0
// Address: 0x2b89d0 - 0x2b8b40
void sub_002B89D0_0x2b89d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B89D0_0x2b89d0");
#endif

    switch (ctx->pc) {
        case 0x2b89fcu: goto label_2b89fc;
        case 0x2b8a64u: goto label_2b8a64;
        case 0x2b8a8cu: goto label_2b8a8c;
        case 0x2b8aa0u: goto label_2b8aa0;
        case 0x2b8ab8u: goto label_2b8ab8;
        case 0x2b8accu: goto label_2b8acc;
        case 0x2b8ae4u: goto label_2b8ae4;
        case 0x2b8af8u: goto label_2b8af8;
        case 0x2b8b08u: goto label_2b8b08;
        case 0x2b8b18u: goto label_2b8b18;
        default: break;
    }

    ctx->pc = 0x2b89d0u;

    // 0x2b89d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b89d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b89d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b89d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b89d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b89d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b89dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b89dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b89e0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2b89e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2b89e4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2b89e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2b89e8: 0xa3a70050  sb          $a3, 0x50($sp)
    ctx->pc = 0x2b89e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b89ec: 0xa3a80060  sb          $t0, 0x60($sp)
    ctx->pc = 0x2b89ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 8));
    // 0x2b89f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b89f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b89f4: 0xc0ae2d0  jal         func_2B8B40
    ctx->pc = 0x2B89F4u;
    SET_GPR_U32(ctx, 31, 0x2B89FCu);
    ctx->pc = 0x2B8B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8B40u, 0x2B89F4u, 0x2B89FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B89FCu;
label_2b89fc:
    // 0x2b89fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b8a00: 0x24636770  addiu       $v1, $v1, 0x6770
    ctx->pc = 0x2b8a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26480));
    // 0x2b8a04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b8a0c: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x2b8a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8a10: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a14: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x2b8a14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b8a18: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x2b8a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8a1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a20: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x2b8a20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b8a24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a28: 0xa0400006  sb          $zero, 0x6($v0)
    ctx->pc = 0x2b8a28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8a2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a30: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x2b8a30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8a34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a38: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x2b8a38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8a3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a40: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2b8a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2b8a44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8a48: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b8a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b8a4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a50: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2b8a50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2b8a54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a58: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2b8a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2b8a5c: 0xc09bf6c  jal         func_26FDB0
    ctx->pc = 0x2B8A5Cu;
    SET_GPR_U32(ctx, 31, 0x2B8A64u);
    ctx->pc = 0x26FDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FDB0u, 0x2B8A5Cu, 0x2B8A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A64u;
label_2b8a64:
    // 0x2b8a64: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2b8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8a68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a6c: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x2b8a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x2b8a70: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2b8a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8a74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a78: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x2b8a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x2b8a7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a80: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b8a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b8a84: 0xc048094  jal         func_120250
    ctx->pc = 0x2B8A84u;
    SET_GPR_U32(ctx, 31, 0x2B8A8Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2B8A84u, 0x2B8A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A8Cu;
label_2b8a8c:
    // 0x2b8a8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a90: 0x24050540  addiu       $a1, $zero, 0x540
    ctx->pc = 0x2b8a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
    // 0x2b8a94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b8a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a98: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2B8A98u;
    SET_GPR_U32(ctx, 31, 0x2B8AA0u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B8A98u, 0x2B8AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8AA0u;
label_2b8aa0:
    // 0x2b8aa0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8aa4: 0xa0620006  sb          $v0, 0x6($v1)
    ctx->pc = 0x2b8aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b8aa8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8aac: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b8aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b8ab0: 0xc048094  jal         func_120250
    ctx->pc = 0x2B8AB0u;
    SET_GPR_U32(ctx, 31, 0x2B8AB8u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2B8AB0u, 0x2B8AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8AB8u;
label_2b8ab8:
    // 0x2b8ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8abc: 0x2405052e  addiu       $a1, $zero, 0x52E
    ctx->pc = 0x2b8abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1326));
    // 0x2b8ac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b8ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8ac4: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2B8AC4u;
    SET_GPR_U32(ctx, 31, 0x2B8ACCu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B8AC4u, 0x2B8ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8ACCu;
label_2b8acc:
    // 0x2b8acc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b8accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8ad0: 0xa0620008  sb          $v0, 0x8($v1)
    ctx->pc = 0x2b8ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b8ad4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8ad8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b8ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b8adc: 0xc048094  jal         func_120250
    ctx->pc = 0x2B8ADCu;
    SET_GPR_U32(ctx, 31, 0x2B8AE4u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2B8ADCu, 0x2B8AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8AE4u;
label_2b8ae4:
    // 0x2b8ae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8ae8: 0x24050547  addiu       $a1, $zero, 0x547
    ctx->pc = 0x2b8ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1351));
    // 0x2b8aec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b8aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8af0: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2B8AF0u;
    SET_GPR_U32(ctx, 31, 0x2B8AF8u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B8AF0u, 0x2B8AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8AF8u;
label_2b8af8:
    // 0x2b8af8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b8af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8afc: 0xa0620009  sb          $v0, 0x9($v1)
    ctx->pc = 0x2b8afcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b8b00: 0xc122430  jal         func_4890C0
    ctx->pc = 0x2B8B00u;
    SET_GPR_U32(ctx, 31, 0x2B8B08u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x2B8B00u, 0x2B8B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B08u;
label_2b8b08:
    // 0x2b8b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b8b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8b10: 0xc121288  jal         func_484A20
    ctx->pc = 0x2B8B10u;
    SET_GPR_U32(ctx, 31, 0x2B8B18u);
    ctx->pc = 0x484A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484A20u, 0x2B8B10u, 0x2B8B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B18u;
label_2b8b18:
    // 0x2b8b18: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b8b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8b1c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2b8b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2b8b20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8b24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b8b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8b2c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b8b2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b8b30: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8B38u;
    // 0x2b8b38: 0x0  nop
    ctx->pc = 0x2b8b38u;
    // NOP
    // 0x2b8b3c: 0x0  nop
    ctx->pc = 0x2b8b3cu;
    // NOP
    ctx->pc = 0x2b8b40u;
}
