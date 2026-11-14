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

// Function: sub_0024DDA0
// Address: 0x24dda0 - 0x24df40
void sub_0024DDA0_0x24dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DDA0_0x24dda0");
#endif

    switch (ctx->pc) {
        case 0x24ddd4u: goto label_24ddd4;
        case 0x24de04u: goto label_24de04;
        case 0x24de1cu: goto label_24de1c;
        case 0x24de3cu: goto label_24de3c;
        case 0x24de50u: goto label_24de50;
        case 0x24de90u: goto label_24de90;
        case 0x24dec0u: goto label_24dec0;
        case 0x24def0u: goto label_24def0;
        case 0x24df1cu: goto label_24df1c;
        default: break;
    }

    ctx->pc = 0x24dda0u;

    // 0x24dda0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x24dda4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24dda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24dda8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24dda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24ddac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24ddacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24ddb0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x24ddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x24ddb4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x24ddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x24ddb8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x24ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x24ddbc: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x24ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x24ddc0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x24ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x24ddc4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x24ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24ddc8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24ddcc: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24DDCCu;
    SET_GPR_U32(ctx, 31, 0x24DDD4u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24DDCCu, 0x24DDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDD4u;
label_24ddd4:
    // 0x24ddd4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x24ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24ddd8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x24ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24dddc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x24dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24dde0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24dde4: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x24dde4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24dde8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x24dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24ddec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x24ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24ddf0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x24ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24ddf4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x24ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24ddf8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x24ddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24ddfc: 0xc093804  jal         func_24E010
    ctx->pc = 0x24DDFCu;
    SET_GPR_U32(ctx, 31, 0x24DE04u);
    ctx->pc = 0x24E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E010u, 0x24DDFCu, 0x24DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE04u;
label_24de04:
    // 0x24de04: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x24de04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24de08: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x24de08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x24de0c: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x24de0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x24de10: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x24de10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24de14: 0xc0937d0  jal         func_24DF40
    ctx->pc = 0x24DE14u;
    SET_GPR_U32(ctx, 31, 0x24DE1Cu);
    ctx->pc = 0x24DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF40u, 0x24DE14u, 0x24DE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE1Cu;
label_24de1c:
    // 0x24de1c: 0x93a3004c  lbu         $v1, 0x4C($sp)
    ctx->pc = 0x24de1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x24de20: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x24de20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24de24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24de24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24de28: 0x1483003d  bne         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x24DE28u;
    {
        const bool branch_taken_0x24de28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24de28) {
            ctx->pc = 0x24DF20u;
            goto label_24df20;
        }
    }
    ctx->pc = 0x24DE30u;
    // 0x24de30: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x24de30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x24de34: 0xc064170  jal         func_1905C0
    ctx->pc = 0x24DE34u;
    SET_GPR_U32(ctx, 31, 0x24DE3Cu);
    ctx->pc = 0x1905C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1905C0u, 0x24DE34u, 0x24DE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE3Cu;
label_24de3c:
    // 0x24de3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24de3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24de40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x24de40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24de44: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24de44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24de48: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24DE48u;
    SET_GPR_U32(ctx, 31, 0x24DE50u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24DE48u, 0x24DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE50u;
label_24de50:
    // 0x24de50: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x24de50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24de54: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x24de54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24de58: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x24de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24de5c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x24de5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24de60: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x24de60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24de64: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x24de64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24de68: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x24de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24de6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24de70: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x24de70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24de74: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x24de74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24de78: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x24de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24de7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24de80: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x24de80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24de84: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x24de84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x24de88: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24DE88u;
    SET_GPR_U32(ctx, 31, 0x24DE90u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24DE88u, 0x24DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE90u;
label_24de90:
    // 0x24de90: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x24de90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x24de94: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x24de94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24de98: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x24de98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24de9c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x24de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24dea0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x24dea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24dea4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x24dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24dea8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x24dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24deac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24deacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24deb0: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x24deb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24deb4: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x24deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x24deb8: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24DEB8u;
    SET_GPR_U32(ctx, 31, 0x24DEC0u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24DEB8u, 0x24DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DEC0u;
label_24dec0:
    // 0x24dec0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x24dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x24dec4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x24dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24dec8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x24dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24decc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x24deccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24ded0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24ded4: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x24ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24ded8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x24ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24dedc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x24dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24dee0: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x24dee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24dee4: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x24dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x24dee8: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24DEE8u;
    SET_GPR_U32(ctx, 31, 0x24DEF0u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24DEE8u, 0x24DEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DEF0u;
label_24def0:
    // 0x24def0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x24def0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x24def4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x24def4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24def8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x24def8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24defc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x24defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24df00: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x24df00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24df04: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x24df04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24df08: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x24df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24df0c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x24df0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24df10: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x24df10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x24df14: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24DF14u;
    SET_GPR_U32(ctx, 31, 0x24DF1Cu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24DF14u, 0x24DF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF1Cu;
label_24df1c:
    // 0x24df1c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x24df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_24df20:
    // 0x24df20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24df20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24df24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24df24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24df28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24df28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24df2c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x24df2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24df30: 0x3e00008  jr          $ra
    ctx->pc = 0x24DF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DF38u;
    // 0x24df38: 0x0  nop
    ctx->pc = 0x24df38u;
    // NOP
    // 0x24df3c: 0x0  nop
    ctx->pc = 0x24df3cu;
    // NOP
    ctx->pc = 0x24df40u;
}
