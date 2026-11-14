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

// Function: sub_0017BE80
// Address: 0x17be80 - 0x17c640
void sub_0017BE80_0x17be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BE80_0x17be80");
#endif

    switch (ctx->pc) {
        case 0x17bebcu: goto label_17bebc;
        case 0x17bed0u: goto label_17bed0;
        case 0x17bee8u: goto label_17bee8;
        case 0x17bf00u: goto label_17bf00;
        case 0x17bf18u: goto label_17bf18;
        case 0x17bf30u: goto label_17bf30;
        case 0x17bf48u: goto label_17bf48;
        case 0x17bf60u: goto label_17bf60;
        case 0x17bf7cu: goto label_17bf7c;
        case 0x17bf94u: goto label_17bf94;
        case 0x17bfa8u: goto label_17bfa8;
        case 0x17bfc0u: goto label_17bfc0;
        case 0x17bfd4u: goto label_17bfd4;
        case 0x17bff0u: goto label_17bff0;
        case 0x17c004u: goto label_17c004;
        case 0x17c01cu: goto label_17c01c;
        case 0x17c034u: goto label_17c034;
        case 0x17c04cu: goto label_17c04c;
        case 0x17c064u: goto label_17c064;
        case 0x17c07cu: goto label_17c07c;
        case 0x17c094u: goto label_17c094;
        case 0x17c0acu: goto label_17c0ac;
        case 0x17c0c0u: goto label_17c0c0;
        case 0x17c0d8u: goto label_17c0d8;
        case 0x17c0ecu: goto label_17c0ec;
        case 0x17c104u: goto label_17c104;
        case 0x17c118u: goto label_17c118;
        case 0x17c130u: goto label_17c130;
        case 0x17c148u: goto label_17c148;
        case 0x17c160u: goto label_17c160;
        case 0x17c178u: goto label_17c178;
        case 0x17c190u: goto label_17c190;
        case 0x17c1a8u: goto label_17c1a8;
        case 0x17c1c0u: goto label_17c1c0;
        case 0x17c1d8u: goto label_17c1d8;
        case 0x17c1f0u: goto label_17c1f0;
        case 0x17c208u: goto label_17c208;
        case 0x17c220u: goto label_17c220;
        case 0x17c238u: goto label_17c238;
        case 0x17c250u: goto label_17c250;
        case 0x17c264u: goto label_17c264;
        case 0x17c27cu: goto label_17c27c;
        case 0x17c290u: goto label_17c290;
        case 0x17c2a8u: goto label_17c2a8;
        case 0x17c2bcu: goto label_17c2bc;
        case 0x17c2d4u: goto label_17c2d4;
        case 0x17c2ecu: goto label_17c2ec;
        case 0x17c304u: goto label_17c304;
        case 0x17c31cu: goto label_17c31c;
        case 0x17c334u: goto label_17c334;
        case 0x17c34cu: goto label_17c34c;
        case 0x17c364u: goto label_17c364;
        case 0x17c37cu: goto label_17c37c;
        case 0x17c394u: goto label_17c394;
        case 0x17c3a0u: goto label_17c3a0;
        case 0x17c3b4u: goto label_17c3b4;
        case 0x17c3c4u: goto label_17c3c4;
        case 0x17c3dcu: goto label_17c3dc;
        case 0x17c3f4u: goto label_17c3f4;
        case 0x17c40cu: goto label_17c40c;
        case 0x17c424u: goto label_17c424;
        case 0x17c434u: goto label_17c434;
        case 0x17c44cu: goto label_17c44c;
        case 0x17c46cu: goto label_17c46c;
        case 0x17c488u: goto label_17c488;
        case 0x17c4a4u: goto label_17c4a4;
        case 0x17c4c0u: goto label_17c4c0;
        case 0x17c4e0u: goto label_17c4e0;
        case 0x17c500u: goto label_17c500;
        case 0x17c54cu: goto label_17c54c;
        case 0x17c56cu: goto label_17c56c;
        case 0x17c57cu: goto label_17c57c;
        case 0x17c594u: goto label_17c594;
        case 0x17c5b4u: goto label_17c5b4;
        case 0x17c5d0u: goto label_17c5d0;
        case 0x17c5e8u: goto label_17c5e8;
        case 0x17c610u: goto label_17c610;
        default: break;
    }

    ctx->pc = 0x17be80u;

    // 0x17be80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17be84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17be84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17be88: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17be88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17be8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17be8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17be90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17be90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17be94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17be94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17be98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17be98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17be9c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17be9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17bea0: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x17bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x17bea4: 0x8fb00090  lw          $s0, 0x90($sp)
    ctx->pc = 0x17bea4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bea8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x17bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x17beac: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x17beacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x17beb0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17beb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17beb4: 0xc056708  jal         func_159C20
    ctx->pc = 0x17BEB4u;
    SET_GPR_U32(ctx, 31, 0x17BEBCu);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x17BEB4u, 0x17BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BEBCu;
label_17bebc:
    // 0x17bebc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x17bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bec0: 0x24a4005c  addiu       $a0, $a1, 0x5C
    ctx->pc = 0x17bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
    // 0x17bec4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x17bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17bec8: 0xc056708  jal         func_159C20
    ctx->pc = 0x17BEC8u;
    SET_GPR_U32(ctx, 31, 0x17BED0u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x17BEC8u, 0x17BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BED0u;
label_17bed0:
    // 0x17bed0: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x17bed0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bed4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17bed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bed8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17bedc: 0x24a54e08  addiu       $a1, $a1, 0x4E08
    ctx->pc = 0x17bedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19976));
    // 0x17bee0: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17BEE0u;
    SET_GPR_U32(ctx, 31, 0x17BEE8u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17BEE0u, 0x17BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BEE8u;
label_17bee8:
    // 0x17bee8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17bee8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17beec: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17beecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bef0: 0x2484005c  addiu       $a0, $a0, 0x5C
    ctx->pc = 0x17bef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x17bef4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17bef8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17BEF8u;
    SET_GPR_U32(ctx, 31, 0x17BF00u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17BEF8u, 0x17BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF00u;
label_17bf00:
    // 0x17bf00: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x17bf00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x17bf04: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bf08: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17bf08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17bf0c: 0x24a54e20  addiu       $a1, $a1, 0x4E20
    ctx->pc = 0x17bf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20000));
    // 0x17bf10: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17BF10u;
    SET_GPR_U32(ctx, 31, 0x17BF18u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17BF10u, 0x17BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF18u;
label_17bf18:
    // 0x17bf18: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17bf18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf1c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bf20: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17bf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17bf24: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17bf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17bf28: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17BF28u;
    SET_GPR_U32(ctx, 31, 0x17BF30u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17BF28u, 0x17BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF30u;
label_17bf30:
    // 0x17bf30: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17bf34: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17bf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bf38: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17bf38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17bf3c: 0x24a54e40  addiu       $a1, $a1, 0x4E40
    ctx->pc = 0x17bf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20032));
    // 0x17bf40: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17BF40u;
    SET_GPR_U32(ctx, 31, 0x17BF48u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17BF40u, 0x17BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF48u;
label_17bf48:
    // 0x17bf48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17bf48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf4c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bf50: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17bf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17bf54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17bf58: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17BF58u;
    SET_GPR_U32(ctx, 31, 0x17BF60u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17BF58u, 0x17BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF60u;
label_17bf60:
    // 0x17bf60: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17bf64: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bf68: 0x2485005c  addiu       $a1, $a0, 0x5C
    ctx->pc = 0x17bf68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x17bf6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17bf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17bf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17bf74: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17BF74u;
    SET_GPR_U32(ctx, 31, 0x17BF7Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17BF74u, 0x17BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF7Cu;
label_17bf7c:
    // 0x17bf7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17bf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bf80: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bf84: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17bf88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17bf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf8c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x17BF8Cu;
    SET_GPR_U32(ctx, 31, 0x17BF94u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17BF8Cu, 0x17BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF94u;
label_17bf94:
    // 0x17bf94: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bf98: 0x2484005c  addiu       $a0, $a0, 0x5C
    ctx->pc = 0x17bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x17bf9c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17bf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17bfa0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17BFA0u;
    SET_GPR_U32(ctx, 31, 0x17BFA8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17BFA0u, 0x17BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFA8u;
label_17bfa8:
    // 0x17bfa8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17bfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bfac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bfb0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17bfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17bfb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17bfb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bfb8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x17BFB8u;
    SET_GPR_U32(ctx, 31, 0x17BFC0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17BFB8u, 0x17BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFC0u;
label_17bfc0:
    // 0x17bfc0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bfc4: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17bfc8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17bfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17bfcc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17BFCCu;
    SET_GPR_U32(ctx, 31, 0x17BFD4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17BFCCu, 0x17BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFD4u;
label_17bfd4:
    // 0x17bfd4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17bfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bfd8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17bfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bfdc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bfe0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x17bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x17bfe4: 0x2446009c  addiu       $a2, $v0, 0x9C
    ctx->pc = 0x17bfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
    // 0x17bfe8: 0xc08c744  jal         func_231D10
    ctx->pc = 0x17BFE8u;
    SET_GPR_U32(ctx, 31, 0x17BFF0u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x17BFE8u, 0x17BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFF0u;
label_17bff0:
    // 0x17bff0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bff4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17bff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17bff8: 0x24a54e58  addiu       $a1, $a1, 0x4E58
    ctx->pc = 0x17bff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20056));
    // 0x17bffc: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17BFFCu;
    SET_GPR_U32(ctx, 31, 0x17C004u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17BFFCu, 0x17C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C004u;
label_17c004:
    // 0x17c004: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c008: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c00c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c010: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17c010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c014: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C014u;
    SET_GPR_U32(ctx, 31, 0x17C01Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C014u, 0x17C01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C01Cu;
label_17c01c:
    // 0x17c01c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c020: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c024: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c028: 0x24a54e68  addiu       $a1, $a1, 0x4E68
    ctx->pc = 0x17c028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20072));
    // 0x17c02c: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C02Cu;
    SET_GPR_U32(ctx, 31, 0x17C034u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C02Cu, 0x17C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C034u;
label_17c034:
    // 0x17c034: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c038: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c03c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c044: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C044u;
    SET_GPR_U32(ctx, 31, 0x17C04Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C044u, 0x17C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C04Cu;
label_17c04c:
    // 0x17c04c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c050: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c054: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c058: 0x24a54e80  addiu       $a1, $a1, 0x4E80
    ctx->pc = 0x17c058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20096));
    // 0x17c05c: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C05Cu;
    SET_GPR_U32(ctx, 31, 0x17C064u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C05Cu, 0x17C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C064u;
label_17c064:
    // 0x17c064: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c068: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c06c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c070: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17c070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c074: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C074u;
    SET_GPR_U32(ctx, 31, 0x17C07Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C074u, 0x17C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C07Cu;
label_17c07c:
    // 0x17c07c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c080: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c084: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c088: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17c088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c08c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C08Cu;
    SET_GPR_U32(ctx, 31, 0x17C094u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C08Cu, 0x17C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C094u;
label_17c094:
    // 0x17c094: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17c094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c098: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c09c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17c0a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0a4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x17C0A4u;
    SET_GPR_U32(ctx, 31, 0x17C0ACu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17C0A4u, 0x17C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0ACu;
label_17c0ac:
    // 0x17c0ac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c0b0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c0b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0b8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C0B8u;
    SET_GPR_U32(ctx, 31, 0x17C0C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C0B8u, 0x17C0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0C0u;
label_17c0c0:
    // 0x17c0c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17c0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c0c4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c0c8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17c0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17c0cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0d0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x17C0D0u;
    SET_GPR_U32(ctx, 31, 0x17C0D8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17C0D0u, 0x17C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0D8u;
label_17c0d8:
    // 0x17c0d8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c0dc: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c0e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17c0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c0e4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C0E4u;
    SET_GPR_U32(ctx, 31, 0x17C0ECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C0E4u, 0x17C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0ECu;
label_17c0ec:
    // 0x17c0ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17c0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c0f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c0f4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17c0f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0fc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x17C0FCu;
    SET_GPR_U32(ctx, 31, 0x17C104u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17C0FCu, 0x17C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C104u;
label_17c104:
    // 0x17c104: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c108: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c10c: 0x24a54e90  addiu       $a1, $a1, 0x4E90
    ctx->pc = 0x17c10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20112));
    // 0x17c110: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C110u;
    SET_GPR_U32(ctx, 31, 0x17C118u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C110u, 0x17C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C118u;
label_17c118:
    // 0x17c118: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c11c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c120: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c124: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17c124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17c128: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C128u;
    SET_GPR_U32(ctx, 31, 0x17C130u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C128u, 0x17C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C130u;
label_17c130:
    // 0x17c130: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c134: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c138: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c13c: 0x24a54ea0  addiu       $a1, $a1, 0x4EA0
    ctx->pc = 0x17c13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20128));
    // 0x17c140: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C140u;
    SET_GPR_U32(ctx, 31, 0x17C148u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C140u, 0x17C148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C148u;
label_17c148:
    // 0x17c148: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c14c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c150: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c154: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17c154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17c158: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C158u;
    SET_GPR_U32(ctx, 31, 0x17C160u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C158u, 0x17C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C160u;
label_17c160:
    // 0x17c160: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c164: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c168: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c16c: 0x24a54eb0  addiu       $a1, $a1, 0x4EB0
    ctx->pc = 0x17c16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20144));
    // 0x17c170: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C170u;
    SET_GPR_U32(ctx, 31, 0x17C178u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C170u, 0x17C178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C178u;
label_17c178:
    // 0x17c178: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c178u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c17c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c180: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c184: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17c184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17c188: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C188u;
    SET_GPR_U32(ctx, 31, 0x17C190u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C188u, 0x17C190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C190u;
label_17c190:
    // 0x17c190: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c194: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c198: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c19c: 0x24a54ec8  addiu       $a1, $a1, 0x4EC8
    ctx->pc = 0x17c19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20168));
    // 0x17c1a0: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C1A0u;
    SET_GPR_U32(ctx, 31, 0x17C1A8u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C1A0u, 0x17C1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C1A8u;
label_17c1a8:
    // 0x17c1a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c1a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1ac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c1b0: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17c1b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1b8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C1B8u;
    SET_GPR_U32(ctx, 31, 0x17C1C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C1B8u, 0x17C1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C1C0u;
label_17c1c0:
    // 0x17c1c0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c1c4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c1c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c1cc: 0x24a54ed8  addiu       $a1, $a1, 0x4ED8
    ctx->pc = 0x17c1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20184));
    // 0x17c1d0: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C1D0u;
    SET_GPR_U32(ctx, 31, 0x17C1D8u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C1D0u, 0x17C1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C1D8u;
label_17c1d8:
    // 0x17c1d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c1d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1dc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c1e0: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17c1e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c1e8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C1E8u;
    SET_GPR_U32(ctx, 31, 0x17C1F0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C1E8u, 0x17C1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C1F0u;
label_17c1f0:
    // 0x17c1f0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c1f4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c1f8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c1fc: 0x24a54ef0  addiu       $a1, $a1, 0x4EF0
    ctx->pc = 0x17c1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20208));
    // 0x17c200: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C200u;
    SET_GPR_U32(ctx, 31, 0x17C208u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C200u, 0x17C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C208u;
label_17c208:
    // 0x17c208: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c208u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c20c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c210: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17c210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17c214: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17c214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c218: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C218u;
    SET_GPR_U32(ctx, 31, 0x17C220u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C218u, 0x17C220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C220u;
label_17c220:
    // 0x17c220: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c224: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c228: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17c228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17c22c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c230: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C230u;
    SET_GPR_U32(ctx, 31, 0x17C238u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C230u, 0x17C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C238u;
label_17c238:
    // 0x17c238: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17c238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c23c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c240: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17c240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17c244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c248: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x17C248u;
    SET_GPR_U32(ctx, 31, 0x17C250u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17C248u, 0x17C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C250u;
label_17c250:
    // 0x17c250: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c254: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17c254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17c258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17c258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c25c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C25Cu;
    SET_GPR_U32(ctx, 31, 0x17C264u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C25Cu, 0x17C264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C264u;
label_17c264:
    // 0x17c264: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17c264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c268: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c26c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17c270: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c274: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x17C274u;
    SET_GPR_U32(ctx, 31, 0x17C27Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17C274u, 0x17C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C27Cu;
label_17c27c:
    // 0x17c27c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c280: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17c280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17c284: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17c284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c288: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C288u;
    SET_GPR_U32(ctx, 31, 0x17C290u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C288u, 0x17C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C290u;
label_17c290:
    // 0x17c290: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17c290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c294: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c298: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17c298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17c29c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2a0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x17C2A0u;
    SET_GPR_U32(ctx, 31, 0x17C2A8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17C2A0u, 0x17C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C2A8u;
label_17c2a8:
    // 0x17c2a8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c2ac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c2b0: 0x24a54f08  addiu       $a1, $a1, 0x4F08
    ctx->pc = 0x17c2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20232));
    // 0x17c2b4: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C2B4u;
    SET_GPR_U32(ctx, 31, 0x17C2BCu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C2B4u, 0x17C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C2BCu;
label_17c2bc:
    // 0x17c2bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c2bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2c0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c2c4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c2c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x17c2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17c2cc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C2CCu;
    SET_GPR_U32(ctx, 31, 0x17C2D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C2CCu, 0x17C2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C2D4u;
label_17c2d4:
    // 0x17c2d4: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c2d8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c2dc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c2e0: 0x24a54f18  addiu       $a1, $a1, 0x4F18
    ctx->pc = 0x17c2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20248));
    // 0x17c2e4: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C2E4u;
    SET_GPR_U32(ctx, 31, 0x17C2ECu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C2E4u, 0x17C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C2ECu;
label_17c2ec:
    // 0x17c2ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c2ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c2f4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c2f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17c2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17c2fc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C2FCu;
    SET_GPR_U32(ctx, 31, 0x17C304u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C2FCu, 0x17C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C304u;
label_17c304:
    // 0x17c304: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c308: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c30c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c310: 0x24a54f30  addiu       $a1, $a1, 0x4F30
    ctx->pc = 0x17c310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20272));
    // 0x17c314: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C314u;
    SET_GPR_U32(ctx, 31, 0x17C31Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C314u, 0x17C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C31Cu;
label_17c31c:
    // 0x17c31c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c31cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c320: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c324: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c328: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x17c328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17c32c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C32Cu;
    SET_GPR_U32(ctx, 31, 0x17C334u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C32Cu, 0x17C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C334u;
label_17c334:
    // 0x17c334: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c338: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c33c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c340: 0x24a54f48  addiu       $a1, $a1, 0x4F48
    ctx->pc = 0x17c340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20296));
    // 0x17c344: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C344u;
    SET_GPR_U32(ctx, 31, 0x17C34Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C344u, 0x17C34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C34Cu;
label_17c34c:
    // 0x17c34c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c34cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c350: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c354: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17c354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17c358: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17c358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17c35c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C35Cu;
    SET_GPR_U32(ctx, 31, 0x17C364u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C35Cu, 0x17C364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C364u;
label_17c364:
    // 0x17c364: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c368: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c36c: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17c370: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17c370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17c374: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C374u;
    SET_GPR_U32(ctx, 31, 0x17C37Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C374u, 0x17C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C37Cu;
label_17c37c:
    // 0x17c37c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c380: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c384: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17c384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17c388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c38c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x17C38Cu;
    SET_GPR_U32(ctx, 31, 0x17C394u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17C38Cu, 0x17C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C394u;
label_17c394:
    // 0x17c394: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17c394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c398: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x17C398u;
    {
        const bool branch_taken_0x17c398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c398) {
            ctx->pc = 0x17C454u;
            goto label_17c454;
        }
    }
    ctx->pc = 0x17C3A0u;
label_17c3a0:
    // 0x17c3a0: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x17c3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17c3a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c3a8: 0x278590e0  addiu       $a1, $gp, -0x6F20
    ctx->pc = 0x17c3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938848));
    // 0x17c3ac: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x17C3ACu;
    SET_GPR_U32(ctx, 31, 0x17C3B4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x17C3ACu, 0x17C3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3B4u;
label_17c3b4:
    // 0x17c3b4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c3b8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17c3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c3bc: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C3BCu;
    SET_GPR_U32(ctx, 31, 0x17C3C4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C3BCu, 0x17C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3C4u;
label_17c3c4:
    // 0x17c3c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c3c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3c8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c3cc: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x17c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x17c3d0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c3d4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C3D4u;
    SET_GPR_U32(ctx, 31, 0x17C3DCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C3D4u, 0x17C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3DCu;
label_17c3dc:
    // 0x17c3dc: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c3e0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c3e4: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x17c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x17c3e8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c3ec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C3ECu;
    SET_GPR_U32(ctx, 31, 0x17C3F4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C3ECu, 0x17C3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3F4u;
label_17c3f4:
    // 0x17c3f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17c3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c3f8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c3fc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17c400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c404: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x17C404u;
    SET_GPR_U32(ctx, 31, 0x17C40Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17C404u, 0x17C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C40Cu;
label_17c40c:
    // 0x17c40c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x17c40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17c410: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c414: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c418: 0x24a54f58  addiu       $a1, $a1, 0x4F58
    ctx->pc = 0x17c418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20312));
    // 0x17c41c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x17C41Cu;
    SET_GPR_U32(ctx, 31, 0x17C424u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x17C41Cu, 0x17C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C424u;
label_17c424:
    // 0x17c424: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c428: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17c428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c42c: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C42Cu;
    SET_GPR_U32(ctx, 31, 0x17C434u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C42Cu, 0x17C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C434u;
label_17c434:
    // 0x17c434: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c438: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c43c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x17c43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17c440: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17c440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17c444: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C444u;
    SET_GPR_U32(ctx, 31, 0x17C44Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C444u, 0x17C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C44Cu;
label_17c44c:
    // 0x17c44c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17c450: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17c450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17c454:
    // 0x17c454: 0x2e040007  sltiu       $a0, $s0, 0x7
    ctx->pc = 0x17c454u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x17c458: 0x1480ffd1  bnez        $a0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x17C458u;
    {
        const bool branch_taken_0x17c458 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c458) {
            ctx->pc = 0x17C3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c3a0;
        }
    }
    ctx->pc = 0x17C460u;
    // 0x17c460: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17c460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c464: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x17C464u;
    {
        const bool branch_taken_0x17c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c464) {
            ctx->pc = 0x17C50Cu;
            goto label_17c50c;
        }
    }
    ctx->pc = 0x17C46Cu;
label_17c46c:
    // 0x17c46c: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x17c46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17c470: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x17c470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17c474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c478: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17c478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x17c47c: 0x24a54f68  addiu       $a1, $a1, 0x4F68
    ctx->pc = 0x17c47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20328));
    // 0x17c480: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x17C480u;
    SET_GPR_U32(ctx, 31, 0x17C488u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x17C480u, 0x17C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C488u;
label_17c488:
    // 0x17c488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17c488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c48c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x17c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c490: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17c490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c494: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x17c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17c498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c49c: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17C49Cu;
    SET_GPR_U32(ctx, 31, 0x17C4A4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17C49Cu, 0x17C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C4A4u;
label_17c4a4:
    // 0x17c4a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c4a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4a8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x17c4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c4ac: 0x26540017  addiu       $s4, $s2, 0x17
    ctx->pc = 0x17c4acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 23));
    // 0x17c4b0: 0x24a40050  addiu       $a0, $a1, 0x50
    ctx->pc = 0x17c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x17c4b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17c4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4b8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C4B8u;
    SET_GPR_U32(ctx, 31, 0x17C4C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C4B8u, 0x17C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C4C0u;
label_17c4c0:
    // 0x17c4c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17c4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4c4: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x17c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x17c4c8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x17c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c4cc: 0x26420017  addiu       $v0, $s2, 0x17
    ctx->pc = 0x17c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 23));
    // 0x17c4d0: 0x24a40050  addiu       $a0, $a1, 0x50
    ctx->pc = 0x17c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x17c4d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17c4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17C4D8u;
    SET_GPR_U32(ctx, 31, 0x17C4E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17C4D8u, 0x17C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C4E0u;
label_17c4e0:
    // 0x17c4e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17c4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4e4: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x17c4e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17c4e8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c4ec: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17c4f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17c4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4f8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x17C4F8u;
    SET_GPR_U32(ctx, 31, 0x17C500u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17C4F8u, 0x17C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C500u;
label_17c500:
    // 0x17c500: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17c500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c504: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x17c504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17c508: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17c508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c50c:
    // 0x17c50c: 0x2e440013  sltiu       $a0, $s2, 0x13
    ctx->pc = 0x17c50cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x17c510: 0x1480ffd6  bnez        $a0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x17C510u;
    {
        const bool branch_taken_0x17c510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c510) {
            ctx->pc = 0x17C46Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c46c;
        }
    }
    ctx->pc = 0x17C518u;
    // 0x17c518: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17c518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17c51c: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x17c51cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c520: 0xae650088  sw          $a1, 0x88($s3)
    ctx->pc = 0x17c520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 5));
    // 0x17c524: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c528: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x17c528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
    // 0x17c52c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c530: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x17c530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c534: 0xaca40090  sw          $a0, 0x90($a1)
    ctx->pc = 0x17c534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 4));
    // 0x17c538: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c53c: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x17c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x17c540: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17c540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17c544: 0xc05f298  jal         func_17CA60
    ctx->pc = 0x17C544u;
    SET_GPR_U32(ctx, 31, 0x17C54Cu);
    ctx->pc = 0x17CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA60u, 0x17C544u, 0x17C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C54Cu;
label_17c54c:
    // 0x17c54c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17c54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c550: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c554: 0x24450078  addiu       $a1, $v0, 0x78
    ctx->pc = 0x17c554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x17c558: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17c558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c55c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17c560: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17c560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c564: 0xc05f1c0  jal         func_17C700
    ctx->pc = 0x17C564u;
    SET_GPR_U32(ctx, 31, 0x17C56Cu);
    ctx->pc = 0x17C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C700u, 0x17C564u, 0x17C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C56Cu;
label_17c56c:
    // 0x17c56c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17c56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c570: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17c570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c574: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x17C574u;
    {
        const bool branch_taken_0x17c574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c574) {
            ctx->pc = 0x17C5F8u;
            goto label_17c5f8;
        }
    }
    ctx->pc = 0x17C57Cu;
label_17c57c:
    // 0x17c57c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x17c57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17c580: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c584: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x17c584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x17c588: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17c588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c58c: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x17C58Cu;
    SET_GPR_U32(ctx, 31, 0x17C594u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x17C58Cu, 0x17C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C594u;
label_17c594:
    // 0x17c594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17c594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c598: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x17c598u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x17c59c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x17c59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c5a0: 0x24a20078  addiu       $v0, $a1, 0x78
    ctx->pc = 0x17c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    // 0x17c5a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17c5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17c5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5ac: 0xc05f190  jal         func_17C640
    ctx->pc = 0x17C5ACu;
    SET_GPR_U32(ctx, 31, 0x17C5B4u);
    ctx->pc = 0x17C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C640u, 0x17C5ACu, 0x17C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C5B4u;
label_17c5b4:
    // 0x17c5b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17c5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5b8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x17c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x17c5bc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c5c0: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x17c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x17c5c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17c5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5c8: 0xc05f190  jal         func_17C640
    ctx->pc = 0x17C5C8u;
    SET_GPR_U32(ctx, 31, 0x17C5D0u);
    ctx->pc = 0x17C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C640u, 0x17C5C8u, 0x17C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C5D0u;
label_17c5d0:
    // 0x17c5d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17c5d4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c5d8: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x17c5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x17c5dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17c5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5e0: 0xc05f190  jal         func_17C640
    ctx->pc = 0x17C5E0u;
    SET_GPR_U32(ctx, 31, 0x17C5E8u);
    ctx->pc = 0x17C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C640u, 0x17C5E0u, 0x17C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C5E8u;
label_17c5e8:
    // 0x17c5e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17c5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5ec: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x17c5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c5f0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x17c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17c5f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17c5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c5f8:
    // 0x17c5f8: 0x2e250003  sltiu       $a1, $s1, 0x3
    ctx->pc = 0x17c5f8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x17c5fc: 0x14a0ffdf  bnez        $a1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x17C5FCu;
    {
        const bool branch_taken_0x17c5fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c5fc) {
            ctx->pc = 0x17C57Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c57c;
        }
    }
    ctx->pc = 0x17C604u;
    // 0x17c604: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17c604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17c608: 0xc05fb98  jal         func_17EE60
    ctx->pc = 0x17C608u;
    SET_GPR_U32(ctx, 31, 0x17C610u);
    ctx->pc = 0x17EE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE60u, 0x17C608u, 0x17C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C610u;
label_17c610:
    // 0x17c610: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17c610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17c614: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17c614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c618: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17c618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c61c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17c61cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c620: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17c620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c624: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c628: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17c62c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x17c62cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c630: 0x3e00008  jr          $ra
    ctx->pc = 0x17C630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C638u;
    // 0x17c638: 0x0  nop
    ctx->pc = 0x17c638u;
    // NOP
    // 0x17c63c: 0x0  nop
    ctx->pc = 0x17c63cu;
    // NOP
    ctx->pc = 0x17c640u;
}
