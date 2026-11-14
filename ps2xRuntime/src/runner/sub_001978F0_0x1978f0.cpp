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

// Function: sub_001978F0
// Address: 0x1978f0 - 0x197fb0
void sub_001978F0_0x1978f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001978F0_0x1978f0");
#endif

    switch (ctx->pc) {
        case 0x197920u: goto label_197920;
        case 0x197934u: goto label_197934;
        case 0x19794cu: goto label_19794c;
        case 0x19795cu: goto label_19795c;
        case 0x197970u: goto label_197970;
        case 0x197988u: goto label_197988;
        case 0x1979a0u: goto label_1979a0;
        case 0x1979b8u: goto label_1979b8;
        case 0x1979d0u: goto label_1979d0;
        case 0x1979ecu: goto label_1979ec;
        case 0x197a00u: goto label_197a00;
        case 0x197a10u: goto label_197a10;
        case 0x197a24u: goto label_197a24;
        case 0x197a38u: goto label_197a38;
        case 0x197a4cu: goto label_197a4c;
        case 0x197a64u: goto label_197a64;
        case 0x197a74u: goto label_197a74;
        case 0x197a88u: goto label_197a88;
        case 0x197aa0u: goto label_197aa0;
        case 0x197ab8u: goto label_197ab8;
        case 0x197ad0u: goto label_197ad0;
        case 0x197aecu: goto label_197aec;
        case 0x197b00u: goto label_197b00;
        case 0x197b10u: goto label_197b10;
        case 0x197b24u: goto label_197b24;
        case 0x197b38u: goto label_197b38;
        case 0x197b4cu: goto label_197b4c;
        case 0x197b64u: goto label_197b64;
        case 0x197b74u: goto label_197b74;
        case 0x197b88u: goto label_197b88;
        case 0x197ba0u: goto label_197ba0;
        case 0x197bb8u: goto label_197bb8;
        case 0x197bd0u: goto label_197bd0;
        case 0x197be8u: goto label_197be8;
        case 0x197c04u: goto label_197c04;
        case 0x197c18u: goto label_197c18;
        case 0x197c28u: goto label_197c28;
        case 0x197c3cu: goto label_197c3c;
        case 0x197c50u: goto label_197c50;
        case 0x197c64u: goto label_197c64;
        case 0x197c7cu: goto label_197c7c;
        case 0x197c8cu: goto label_197c8c;
        case 0x197ca0u: goto label_197ca0;
        case 0x197cb8u: goto label_197cb8;
        case 0x197cd0u: goto label_197cd0;
        case 0x197ce8u: goto label_197ce8;
        case 0x197d00u: goto label_197d00;
        case 0x197d1cu: goto label_197d1c;
        case 0x197d30u: goto label_197d30;
        case 0x197d40u: goto label_197d40;
        case 0x197d54u: goto label_197d54;
        case 0x197d68u: goto label_197d68;
        case 0x197d7cu: goto label_197d7c;
        case 0x197d94u: goto label_197d94;
        case 0x197da4u: goto label_197da4;
        case 0x197db8u: goto label_197db8;
        case 0x197dd0u: goto label_197dd0;
        case 0x197de8u: goto label_197de8;
        case 0x197e00u: goto label_197e00;
        case 0x197e1cu: goto label_197e1c;
        case 0x197e30u: goto label_197e30;
        case 0x197e40u: goto label_197e40;
        case 0x197e54u: goto label_197e54;
        case 0x197e68u: goto label_197e68;
        case 0x197e7cu: goto label_197e7c;
        case 0x197e94u: goto label_197e94;
        case 0x197ea4u: goto label_197ea4;
        case 0x197eb8u: goto label_197eb8;
        case 0x197ed0u: goto label_197ed0;
        case 0x197ee8u: goto label_197ee8;
        case 0x197f00u: goto label_197f00;
        case 0x197f18u: goto label_197f18;
        case 0x197f34u: goto label_197f34;
        case 0x197f48u: goto label_197f48;
        case 0x197f58u: goto label_197f58;
        case 0x197f70u: goto label_197f70;
        case 0x197f84u: goto label_197f84;
        default: break;
    }

    ctx->pc = 0x1978f0u;

    // 0x1978f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1978f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1978f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1978f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1978f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1978f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1978fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1978fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x197900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197904: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197908: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x197908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x19790c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197910: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197914: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x197914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x197918: 0xc06601c  jal         func_198070
    ctx->pc = 0x197918u;
    SET_GPR_U32(ctx, 31, 0x197920u);
    ctx->pc = 0x198070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198070u, 0x197918u, 0x197920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197920u;
label_197920:
    // 0x197920: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197924: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19792c: 0xc066004  jal         func_198010
    ctx->pc = 0x19792Cu;
    SET_GPR_U32(ctx, 31, 0x197934u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x19792Cu, 0x197934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197934u;
label_197934:
    // 0x197934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197938: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x197938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19793c: 0x24a4010c  addiu       $a0, $a1, 0x10C
    ctx->pc = 0x19793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 268));
    // 0x197940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197944: 0xc065d40  jal         func_197500
    ctx->pc = 0x197944u;
    SET_GPR_U32(ctx, 31, 0x19794Cu);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x197944u, 0x19794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19794Cu;
label_19794c:
    // 0x19794c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19794cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197950: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197954: 0xc067118  jal         func_19C460
    ctx->pc = 0x197954u;
    SET_GPR_U32(ctx, 31, 0x19795Cu);
    ctx->pc = 0x19C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C460u, 0x197954u, 0x19795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19795Cu;
label_19795c:
    // 0x19795c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197960: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197968: 0xc066004  jal         func_198010
    ctx->pc = 0x197968u;
    SET_GPR_U32(ctx, 31, 0x197970u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197968u, 0x197970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197970u;
label_197970:
    // 0x197970: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x197970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197974: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197978: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19797c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x19797cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x197980: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197980u;
    SET_GPR_U32(ctx, 31, 0x197988u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197980u, 0x197988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197988u;
label_197988:
    // 0x197988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x197988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19798c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197990: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197994: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x197994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x197998: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197998u;
    SET_GPR_U32(ctx, 31, 0x1979A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197998u, 0x1979A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979A0u;
label_1979a0:
    // 0x1979a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1979a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979a4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1979a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1979a8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1979a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1979ac: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1979acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1979b0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1979B0u;
    SET_GPR_U32(ctx, 31, 0x1979B8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1979B0u, 0x1979B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979B8u;
label_1979b8:
    // 0x1979b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1979b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1979bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1979c0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1979c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1979c4: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1979c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1979c8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1979C8u;
    SET_GPR_U32(ctx, 31, 0x1979D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1979C8u, 0x1979D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979D0u;
label_1979d0:
    // 0x1979d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1979d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979d4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1979d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1979d8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1979d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1979dc: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x1979dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1979e0: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1979e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1979e4: 0xc067240  jal         func_19C900
    ctx->pc = 0x1979E4u;
    SET_GPR_U32(ctx, 31, 0x1979ECu);
    ctx->pc = 0x19C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C900u, 0x1979E4u, 0x1979ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979ECu;
label_1979ec:
    // 0x1979ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1979ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1979f0: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x1979f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1979f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1979f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979f8: 0xc066004  jal         func_198010
    ctx->pc = 0x1979F8u;
    SET_GPR_U32(ctx, 31, 0x197A00u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x1979F8u, 0x197A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A00u;
label_197a00:
    // 0x197a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a04: 0xc78c83f4  lwc1        $f12, -0x7C0C($gp)
    ctx->pc = 0x197a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x197a08: 0xc067168  jal         func_19C5A0
    ctx->pc = 0x197A08u;
    SET_GPR_U32(ctx, 31, 0x197A10u);
    ctx->pc = 0x19C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C5A0u, 0x197A08u, 0x197A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A10u;
label_197a10:
    // 0x197a10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197a14: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a1c: 0xc066004  jal         func_198010
    ctx->pc = 0x197A1Cu;
    SET_GPR_U32(ctx, 31, 0x197A24u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197A1Cu, 0x197A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A24u;
label_197a24:
    // 0x197a24: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x197a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x197a28: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x197a28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197a2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a30: 0xc065ff8  jal         func_197FE0
    ctx->pc = 0x197A30u;
    SET_GPR_U32(ctx, 31, 0x197A38u);
    ctx->pc = 0x197FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FE0u, 0x197A30u, 0x197A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A38u;
label_197a38:
    // 0x197a38: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197a3c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197a40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197a44: 0xc066004  jal         func_198010
    ctx->pc = 0x197A44u;
    SET_GPR_U32(ctx, 31, 0x197A4Cu);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197A44u, 0x197A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A4Cu;
label_197a4c:
    // 0x197a4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197a54: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x197a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x197a58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197a5c: 0xc065d40  jal         func_197500
    ctx->pc = 0x197A5Cu;
    SET_GPR_U32(ctx, 31, 0x197A64u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x197A5Cu, 0x197A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A64u;
label_197a64:
    // 0x197a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a6c: 0xc067118  jal         func_19C460
    ctx->pc = 0x197A6Cu;
    SET_GPR_U32(ctx, 31, 0x197A74u);
    ctx->pc = 0x19C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C460u, 0x197A6Cu, 0x197A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A74u;
label_197a74:
    // 0x197a74: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197a78: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197a7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197a80: 0xc066004  jal         func_198010
    ctx->pc = 0x197A80u;
    SET_GPR_U32(ctx, 31, 0x197A88u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197A80u, 0x197A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A88u;
label_197a88:
    // 0x197a88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a8c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197a90: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197a94: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x197a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x197a98: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197A98u;
    SET_GPR_U32(ctx, 31, 0x197AA0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197A98u, 0x197AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AA0u;
label_197aa0:
    // 0x197aa0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x197aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197aa4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197aa8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197aac: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x197aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x197ab0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197AB0u;
    SET_GPR_U32(ctx, 31, 0x197AB8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197AB0u, 0x197AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AB8u;
label_197ab8:
    // 0x197ab8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x197ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197abc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197ac0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197ac4: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x197ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x197ac8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197AC8u;
    SET_GPR_U32(ctx, 31, 0x197AD0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197AC8u, 0x197AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AD0u;
label_197ad0:
    // 0x197ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ad4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x197ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x197ad8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x197ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197adc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x197adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197ae0: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x197ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197ae4: 0xc067240  jal         func_19C900
    ctx->pc = 0x197AE4u;
    SET_GPR_U32(ctx, 31, 0x197AECu);
    ctx->pc = 0x19C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C900u, 0x197AE4u, 0x197AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AECu;
label_197aec:
    // 0x197aec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197af0: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197af4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197af8: 0xc066004  jal         func_198010
    ctx->pc = 0x197AF8u;
    SET_GPR_U32(ctx, 31, 0x197B00u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197AF8u, 0x197B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B00u;
label_197b00:
    // 0x197b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b04: 0xc78c83f8  lwc1        $f12, -0x7C08($gp)
    ctx->pc = 0x197b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x197b08: 0xc067168  jal         func_19C5A0
    ctx->pc = 0x197B08u;
    SET_GPR_U32(ctx, 31, 0x197B10u);
    ctx->pc = 0x19C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C5A0u, 0x197B08u, 0x197B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B10u;
label_197b10:
    // 0x197b10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197b14: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197b18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197b1c: 0xc066004  jal         func_198010
    ctx->pc = 0x197B1Cu;
    SET_GPR_U32(ctx, 31, 0x197B24u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197B1Cu, 0x197B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B24u;
label_197b24:
    // 0x197b24: 0x3c03c57a  lui         $v1, 0xC57A
    ctx->pc = 0x197b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50554 << 16));
    // 0x197b28: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x197b28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197b2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b30: 0xc065fec  jal         func_197FB0
    ctx->pc = 0x197B30u;
    SET_GPR_U32(ctx, 31, 0x197B38u);
    ctx->pc = 0x197FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FB0u, 0x197B30u, 0x197B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B38u;
label_197b38:
    // 0x197b38: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197b3c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197b40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x197b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197b44: 0xc066004  jal         func_198010
    ctx->pc = 0x197B44u;
    SET_GPR_U32(ctx, 31, 0x197B4Cu);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197B44u, 0x197B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B4Cu;
label_197b4c:
    // 0x197b4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197b54: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x197b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x197b58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x197b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197b5c: 0xc065d40  jal         func_197500
    ctx->pc = 0x197B5Cu;
    SET_GPR_U32(ctx, 31, 0x197B64u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x197B5Cu, 0x197B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B64u;
label_197b64:
    // 0x197b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b6c: 0xc067118  jal         func_19C460
    ctx->pc = 0x197B6Cu;
    SET_GPR_U32(ctx, 31, 0x197B74u);
    ctx->pc = 0x19C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C460u, 0x197B6Cu, 0x197B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B74u;
label_197b74:
    // 0x197b74: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197b78: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197b7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x197b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197b80: 0xc066004  jal         func_198010
    ctx->pc = 0x197B80u;
    SET_GPR_U32(ctx, 31, 0x197B88u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197B80u, 0x197B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B88u;
label_197b88:
    // 0x197b88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x197b88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b8c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197b90: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197b94: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x197b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x197b98: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197B98u;
    SET_GPR_U32(ctx, 31, 0x197BA0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197B98u, 0x197BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197BA0u;
label_197ba0:
    // 0x197ba0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x197ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ba4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197ba8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197bac: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x197bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x197bb0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197BB0u;
    SET_GPR_U32(ctx, 31, 0x197BB8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197BB0u, 0x197BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197BB8u;
label_197bb8:
    // 0x197bb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bbc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197bc0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197bc4: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x197bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x197bc8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197BC8u;
    SET_GPR_U32(ctx, 31, 0x197BD0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197BC8u, 0x197BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197BD0u;
label_197bd0:
    // 0x197bd0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x197bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bd4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197bd8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197bdc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x197bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x197be0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197BE0u;
    SET_GPR_U32(ctx, 31, 0x197BE8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197BE0u, 0x197BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197BE8u;
label_197be8:
    // 0x197be8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x197becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197bf0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x197bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x197bf4: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x197bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x197bf8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x197bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197bfc: 0xc067240  jal         func_19C900
    ctx->pc = 0x197BFCu;
    SET_GPR_U32(ctx, 31, 0x197C04u);
    ctx->pc = 0x19C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C900u, 0x197BFCu, 0x197C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C04u;
label_197c04:
    // 0x197c04: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197c08: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197c0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x197c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197c10: 0xc066004  jal         func_198010
    ctx->pc = 0x197C10u;
    SET_GPR_U32(ctx, 31, 0x197C18u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197C10u, 0x197C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C18u;
label_197c18:
    // 0x197c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c1c: 0xc78c83b0  lwc1        $f12, -0x7C50($gp)
    ctx->pc = 0x197c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x197c20: 0xc067168  jal         func_19C5A0
    ctx->pc = 0x197C20u;
    SET_GPR_U32(ctx, 31, 0x197C28u);
    ctx->pc = 0x19C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C5A0u, 0x197C20u, 0x197C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C28u;
label_197c28:
    // 0x197c28: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197c2c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197c30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x197c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197c34: 0xc066004  jal         func_198010
    ctx->pc = 0x197C34u;
    SET_GPR_U32(ctx, 31, 0x197C3Cu);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197C34u, 0x197C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C3Cu;
label_197c3c:
    // 0x197c3c: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x197c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
    // 0x197c40: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x197c40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197c44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c48: 0xc065ff8  jal         func_197FE0
    ctx->pc = 0x197C48u;
    SET_GPR_U32(ctx, 31, 0x197C50u);
    ctx->pc = 0x197FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FE0u, 0x197C48u, 0x197C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C50u;
label_197c50:
    // 0x197c50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197c54: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197c58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x197c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197c5c: 0xc066004  jal         func_198010
    ctx->pc = 0x197C5Cu;
    SET_GPR_U32(ctx, 31, 0x197C64u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197C5Cu, 0x197C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C64u;
label_197c64:
    // 0x197c64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c68: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197c6c: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x197c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x197c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c74: 0xc065d40  jal         func_197500
    ctx->pc = 0x197C74u;
    SET_GPR_U32(ctx, 31, 0x197C7Cu);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x197C74u, 0x197C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C7Cu;
label_197c7c:
    // 0x197c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c84: 0xc067118  jal         func_19C460
    ctx->pc = 0x197C84u;
    SET_GPR_U32(ctx, 31, 0x197C8Cu);
    ctx->pc = 0x19C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C460u, 0x197C84u, 0x197C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C8Cu;
label_197c8c:
    // 0x197c8c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197c90: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197c94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x197c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197c98: 0xc066004  jal         func_198010
    ctx->pc = 0x197C98u;
    SET_GPR_U32(ctx, 31, 0x197CA0u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197C98u, 0x197CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CA0u;
label_197ca0:
    // 0x197ca0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x197ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ca4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197ca8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197cac: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x197cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x197cb0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197CB0u;
    SET_GPR_U32(ctx, 31, 0x197CB8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197CB0u, 0x197CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CB8u;
label_197cb8:
    // 0x197cb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x197cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197cbc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197cc0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197cc4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x197cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x197cc8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197CC8u;
    SET_GPR_U32(ctx, 31, 0x197CD0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197CC8u, 0x197CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CD0u;
label_197cd0:
    // 0x197cd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197cd4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197cd8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197cdc: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x197cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x197ce0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197CE0u;
    SET_GPR_U32(ctx, 31, 0x197CE8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197CE0u, 0x197CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CE8u;
label_197ce8:
    // 0x197ce8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x197ce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197cec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197cf0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197cf4: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x197cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x197cf8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197CF8u;
    SET_GPR_U32(ctx, 31, 0x197D00u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197CF8u, 0x197D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D00u;
label_197d00:
    // 0x197d00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d04: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x197d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197d08: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x197d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x197d0c: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x197d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x197d10: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x197d10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197d14: 0xc067240  jal         func_19C900
    ctx->pc = 0x197D14u;
    SET_GPR_U32(ctx, 31, 0x197D1Cu);
    ctx->pc = 0x19C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C900u, 0x197D14u, 0x197D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D1Cu;
label_197d1c:
    // 0x197d1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197d20: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197d24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x197d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197d28: 0xc066004  jal         func_198010
    ctx->pc = 0x197D28u;
    SET_GPR_U32(ctx, 31, 0x197D30u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197D28u, 0x197D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D30u;
label_197d30:
    // 0x197d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d34: 0xc78c8288  lwc1        $f12, -0x7D78($gp)
    ctx->pc = 0x197d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x197d38: 0xc067168  jal         func_19C5A0
    ctx->pc = 0x197D38u;
    SET_GPR_U32(ctx, 31, 0x197D40u);
    ctx->pc = 0x19C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C5A0u, 0x197D38u, 0x197D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D40u;
label_197d40:
    // 0x197d40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197d44: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197d48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x197d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197d4c: 0xc066004  jal         func_198010
    ctx->pc = 0x197D4Cu;
    SET_GPR_U32(ctx, 31, 0x197D54u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197D4Cu, 0x197D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D54u;
label_197d54:
    // 0x197d54: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x197d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x197d58: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x197d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197d5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d60: 0xc065ff8  jal         func_197FE0
    ctx->pc = 0x197D60u;
    SET_GPR_U32(ctx, 31, 0x197D68u);
    ctx->pc = 0x197FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FE0u, 0x197D60u, 0x197D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D68u;
label_197d68:
    // 0x197d68: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197d6c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197d70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x197d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197d74: 0xc066004  jal         func_198010
    ctx->pc = 0x197D74u;
    SET_GPR_U32(ctx, 31, 0x197D7Cu);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197D74u, 0x197D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D7Cu;
label_197d7c:
    // 0x197d7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197d84: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x197d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x197d88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x197d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197d8c: 0xc065d40  jal         func_197500
    ctx->pc = 0x197D8Cu;
    SET_GPR_U32(ctx, 31, 0x197D94u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x197D8Cu, 0x197D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D94u;
label_197d94:
    // 0x197d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d9c: 0xc067118  jal         func_19C460
    ctx->pc = 0x197D9Cu;
    SET_GPR_U32(ctx, 31, 0x197DA4u);
    ctx->pc = 0x19C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C460u, 0x197D9Cu, 0x197DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DA4u;
label_197da4:
    // 0x197da4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197da8: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197dac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x197dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197db0: 0xc066004  jal         func_198010
    ctx->pc = 0x197DB0u;
    SET_GPR_U32(ctx, 31, 0x197DB8u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197DB0u, 0x197DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DB8u;
label_197db8:
    // 0x197db8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197dbc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197dc0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197dc4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x197dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x197dc8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197DC8u;
    SET_GPR_U32(ctx, 31, 0x197DD0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197DC8u, 0x197DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DD0u;
label_197dd0:
    // 0x197dd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x197dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197dd4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197dd8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197ddc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x197ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x197de0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197DE0u;
    SET_GPR_U32(ctx, 31, 0x197DE8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197DE0u, 0x197DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DE8u;
label_197de8:
    // 0x197de8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x197de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197dec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197df0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197df4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x197df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x197df8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197DF8u;
    SET_GPR_U32(ctx, 31, 0x197E00u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197DF8u, 0x197E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E00u;
label_197e00:
    // 0x197e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e04: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x197e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x197e08: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x197e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197e0c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x197e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197e10: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x197e10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197e14: 0xc067240  jal         func_19C900
    ctx->pc = 0x197E14u;
    SET_GPR_U32(ctx, 31, 0x197E1Cu);
    ctx->pc = 0x19C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C900u, 0x197E14u, 0x197E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E1Cu;
label_197e1c:
    // 0x197e1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197e20: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197e24: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x197e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197e28: 0xc066004  jal         func_198010
    ctx->pc = 0x197E28u;
    SET_GPR_U32(ctx, 31, 0x197E30u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197E28u, 0x197E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E30u;
label_197e30:
    // 0x197e30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e34: 0xc78c82a4  lwc1        $f12, -0x7D5C($gp)
    ctx->pc = 0x197e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x197e38: 0xc067168  jal         func_19C5A0
    ctx->pc = 0x197E38u;
    SET_GPR_U32(ctx, 31, 0x197E40u);
    ctx->pc = 0x19C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C5A0u, 0x197E38u, 0x197E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E40u;
label_197e40:
    // 0x197e40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197e44: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197e48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x197e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197e4c: 0xc066004  jal         func_198010
    ctx->pc = 0x197E4Cu;
    SET_GPR_U32(ctx, 31, 0x197E54u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197E4Cu, 0x197E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E54u;
label_197e54:
    // 0x197e54: 0x3c03c57a  lui         $v1, 0xC57A
    ctx->pc = 0x197e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50554 << 16));
    // 0x197e58: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x197e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197e5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e60: 0xc065fec  jal         func_197FB0
    ctx->pc = 0x197E60u;
    SET_GPR_U32(ctx, 31, 0x197E68u);
    ctx->pc = 0x197FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FB0u, 0x197E60u, 0x197E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E68u;
label_197e68:
    // 0x197e68: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197e6c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197e70: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x197e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x197e74: 0xc066004  jal         func_198010
    ctx->pc = 0x197E74u;
    SET_GPR_U32(ctx, 31, 0x197E7Cu);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197E74u, 0x197E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E7Cu;
label_197e7c:
    // 0x197e7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197e84: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x197e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x197e88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x197e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197e8c: 0xc065d40  jal         func_197500
    ctx->pc = 0x197E8Cu;
    SET_GPR_U32(ctx, 31, 0x197E94u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x197E8Cu, 0x197E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E94u;
label_197e94:
    // 0x197e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e9c: 0xc067118  jal         func_19C460
    ctx->pc = 0x197E9Cu;
    SET_GPR_U32(ctx, 31, 0x197EA4u);
    ctx->pc = 0x19C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C460u, 0x197E9Cu, 0x197EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197EA4u;
label_197ea4:
    // 0x197ea4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197ea8: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197eac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x197eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x197eb0: 0xc066004  jal         func_198010
    ctx->pc = 0x197EB0u;
    SET_GPR_U32(ctx, 31, 0x197EB8u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197EB0u, 0x197EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197EB8u;
label_197eb8:
    // 0x197eb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x197eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ebc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197ec0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197ec4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x197ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x197ec8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197EC8u;
    SET_GPR_U32(ctx, 31, 0x197ED0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197EC8u, 0x197ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197ED0u;
label_197ed0:
    // 0x197ed0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x197ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ed4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197ed8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197edc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x197edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x197ee0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197EE0u;
    SET_GPR_U32(ctx, 31, 0x197EE8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197EE0u, 0x197EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197EE8u;
label_197ee8:
    // 0x197ee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197eec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197ef0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197ef4: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x197ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x197ef8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197EF8u;
    SET_GPR_U32(ctx, 31, 0x197F00u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197EF8u, 0x197F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F00u;
label_197f00:
    // 0x197f00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x197f00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f04: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197f08: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x197f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x197f0c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x197f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x197f10: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x197F10u;
    SET_GPR_U32(ctx, 31, 0x197F18u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x197F10u, 0x197F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F18u;
label_197f18:
    // 0x197f18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f1c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x197f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197f20: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x197f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x197f24: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x197f24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x197f28: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x197f28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197f2c: 0xc067240  jal         func_19C900
    ctx->pc = 0x197F2Cu;
    SET_GPR_U32(ctx, 31, 0x197F34u);
    ctx->pc = 0x19C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C900u, 0x197F2Cu, 0x197F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F34u;
label_197f34:
    // 0x197f34: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x197f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197f38: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x197f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x197f3c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x197f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x197f40: 0xc066004  jal         func_198010
    ctx->pc = 0x197F40u;
    SET_GPR_U32(ctx, 31, 0x197F48u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197F40u, 0x197F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F48u;
label_197f48:
    // 0x197f48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f4c: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x197f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x197f50: 0xc067168  jal         func_19C5A0
    ctx->pc = 0x197F50u;
    SET_GPR_U32(ctx, 31, 0x197F58u);
    ctx->pc = 0x19C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C5A0u, 0x197F50u, 0x197F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F58u;
label_197f58:
    // 0x197f58: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x197f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197f5c: 0x24900100  addiu       $s0, $a0, 0x100
    ctx->pc = 0x197f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x197f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f64: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x197f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x197f68: 0xc066004  jal         func_198010
    ctx->pc = 0x197F68u;
    SET_GPR_U32(ctx, 31, 0x197F70u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x197F68u, 0x197F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F70u;
label_197f70:
    // 0x197f70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f74: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x197f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x197f78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197f7c: 0xc065ff8  jal         func_197FE0
    ctx->pc = 0x197F7Cu;
    SET_GPR_U32(ctx, 31, 0x197F84u);
    ctx->pc = 0x197FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FE0u, 0x197F7Cu, 0x197F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F84u;
label_197f84:
    // 0x197f84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x197f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197f88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197f88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197f8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197f90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197f94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197f98: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x197f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x197f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x197F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197FA4u;
    // 0x197fa4: 0x0  nop
    ctx->pc = 0x197fa4u;
    // NOP
    // 0x197fa8: 0x0  nop
    ctx->pc = 0x197fa8u;
    // NOP
    // 0x197fac: 0x0  nop
    ctx->pc = 0x197facu;
    // NOP
    ctx->pc = 0x197fb0u;
}
