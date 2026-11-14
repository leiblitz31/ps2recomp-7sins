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

// Function: sub_00200000
// Address: 0x200000 - 0x200790
void sub_00200000_0x200000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200000_0x200000");
#endif

    switch (ctx->pc) {
        case 0x200034u: goto label_200034;
        case 0x20013cu: goto label_20013c;
        case 0x200154u: goto label_200154;
        case 0x200178u: goto label_200178;
        case 0x2001a4u: goto label_2001a4;
        case 0x2001bcu: goto label_2001bc;
        case 0x200258u: goto label_200258;
        case 0x20027cu: goto label_20027c;
        case 0x20029cu: goto label_20029c;
        case 0x2002fcu: goto label_2002fc;
        case 0x20039cu: goto label_20039c;
        case 0x2003a8u: goto label_2003a8;
        case 0x2003bcu: goto label_2003bc;
        case 0x2003d0u: goto label_2003d0;
        case 0x2003e8u: goto label_2003e8;
        case 0x200418u: goto label_200418;
        case 0x200448u: goto label_200448;
        case 0x20049cu: goto label_20049c;
        case 0x2004b4u: goto label_2004b4;
        case 0x20050cu: goto label_20050c;
        case 0x200518u: goto label_200518;
        case 0x200588u: goto label_200588;
        case 0x20059cu: goto label_20059c;
        case 0x2005e0u: goto label_2005e0;
        case 0x2005e8u: goto label_2005e8;
        case 0x2005f8u: goto label_2005f8;
        case 0x200620u: goto label_200620;
        case 0x2006d8u: goto label_2006d8;
        case 0x20072cu: goto label_20072c;
        case 0x20073cu: goto label_20073c;
        case 0x200750u: goto label_200750;
        case 0x20075cu: goto label_20075c;
        default: break;
    }

    ctx->pc = 0x200000u;

    // 0x200000: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200004: 0xc4410164  lwc1        $f1, 0x164($v0)
    ctx->pc = 0x200004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200008: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x200008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20000c: 0x0  nop
    ctx->pc = 0x20000cu;
    // NOP
    // 0x200010: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x200010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200014: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x200014u;
    {
        const bool branch_taken_0x200014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x200014) {
            ctx->pc = 0x200034u;
            goto label_200034;
        }
    }
    ctx->pc = 0x20001Cu;
    // 0x20001c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20001cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200020: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200024: 0xe4400164  swc1        $f0, 0x164($v0)
    ctx->pc = 0x200024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 356), bits); }
    // 0x200028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20002c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x20002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200030: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x200030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
label_200034:
    // 0x200034: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200038: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x200038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x20003c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200040: 0x14620107  bne         $v1, $v0, . + 4 + (0x107 << 2)
    ctx->pc = 0x200040u;
    {
        const bool branch_taken_0x200040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x200040) {
            ctx->pc = 0x200460u;
            goto label_200460;
        }
    }
    ctx->pc = 0x200048u;
    // 0x200048: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20004c: 0xc441011c  lwc1        $f1, 0x11C($v0)
    ctx->pc = 0x20004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200050: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x200050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200054: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x200054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x200058: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x200058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x20005c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x20005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200060: 0xc441011c  lwc1        $f1, 0x11C($v0)
    ctx->pc = 0x200060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x200064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200068: 0x0  nop
    ctx->pc = 0x200068u;
    // NOP
    // 0x20006c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20006cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200070: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x200070u;
    {
        const bool branch_taken_0x200070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x200070) {
            ctx->pc = 0x200084u;
            goto label_200084;
        }
    }
    ctx->pc = 0x200078u;
    // 0x200078: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x200078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20007c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x20007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200080: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x200080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
label_200084:
    // 0x200084: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200088: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x200088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20008c: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x20008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200090: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x200090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x200094: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x200094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x200098: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20009c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x20009cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2000a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2000a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2000a4: 0x0  nop
    ctx->pc = 0x2000a4u;
    // NOP
    // 0x2000a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2000a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2000ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2000ACu;
    {
        const bool branch_taken_0x2000ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2000ac) {
            ctx->pc = 0x2000C0u;
            goto label_2000c0;
        }
    }
    ctx->pc = 0x2000B4u;
    // 0x2000b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2000b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2000b8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2000b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2000bc: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2000bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_2000c0:
    // 0x2000c0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2000c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2000c4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2000c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2000c8: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x2000c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2000cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2000ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2000d0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2000d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2000d4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2000d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2000d8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2000d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2000dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2000dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2000e0: 0x0  nop
    ctx->pc = 0x2000e0u;
    // NOP
    // 0x2000e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2000e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2000e8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2000E8u;
    {
        const bool branch_taken_0x2000e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2000e8) {
            ctx->pc = 0x2000FCu;
            goto label_2000fc;
        }
    }
    ctx->pc = 0x2000F0u;
    // 0x2000f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2000f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2000f4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2000f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2000f8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2000f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2000fc:
    // 0x2000fc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2000fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200100: 0xc4430114  lwc1        $f3, 0x114($v0)
    ctx->pc = 0x200100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x200104: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x200104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200108: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20010c: 0xc44100e4  lwc1        $f1, 0xE4($v0)
    ctx->pc = 0x20010cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x200110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200114: 0x0  nop
    ctx->pc = 0x200114u;
    // NOP
    // 0x200118: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x200118u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20011c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x20011cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x200120: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x200120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x200124: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200128: 0x244300e8  addiu       $v1, $v0, 0xE8
    ctx->pc = 0x200128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x20012c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20012cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200130: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x200130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x200134: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x200134u;
    SET_GPR_U32(ctx, 31, 0x20013Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x200134u, 0x20013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20013Cu;
label_20013c:
    // 0x20013c: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x20013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x200140: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200144: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x200144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x200148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20014c: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x20014Cu;
    SET_GPR_U32(ctx, 31, 0x200154u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x20014Cu, 0x200154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200154u;
label_200154:
    // 0x200154: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x200154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200158: 0x4600a541  sub.s       $f21, $f20, $f0
    ctx->pc = 0x200158u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x20015c: 0x8fb00140  lw          $s0, 0x140($sp)
    ctx->pc = 0x20015cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200160: 0xc61400e4  lwc1        $f20, 0xE4($s0)
    ctx->pc = 0x200160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x200164: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200168: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x200168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x20016c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20016cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200170: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x200170u;
    SET_GPR_U32(ctx, 31, 0x200178u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x200170u, 0x200178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200178u;
label_200178:
    // 0x200178: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x200178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20017c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20017cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200180: 0x0  nop
    ctx->pc = 0x200180u;
    // NOP
    // 0x200184: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x200184u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x200188: 0x4615a01c  madd.s      $f0, $f20, $f21
    ctx->pc = 0x200188u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
    // 0x20018c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x20018cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x200190: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200194: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x200194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x200198: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x200198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20019c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x20019Cu;
    {
        const bool branch_taken_0x20019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20019c) {
            ctx->pc = 0x2001E4u;
            goto label_2001e4;
        }
    }
    ctx->pc = 0x2001A4u;
label_2001a4:
    // 0x2001a4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2001a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2001a8: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x2001a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x2001ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2001acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2001b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001b4: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x2001B4u;
    SET_GPR_U32(ctx, 31, 0x2001BCu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x2001B4u, 0x2001BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001BCu;
label_2001bc:
    // 0x2001bc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2001bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2001c0: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2001c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2001c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2001c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2001c8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2001C8u;
    {
        const bool branch_taken_0x2001c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2001c8) {
            ctx->pc = 0x2001F0u;
            goto label_2001f0;
        }
    }
    ctx->pc = 0x2001D0u;
    // 0x2001d0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2001d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2001d4: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x2001d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x2001d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2001d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2001dc: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2001dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2001e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2001e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2001e4:
    // 0x2001e4: 0x2e62000e  sltiu       $v0, $s3, 0xE
    ctx->pc = 0x2001e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x2001e8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2001E8u;
    {
        const bool branch_taken_0x2001e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2001e8) {
            ctx->pc = 0x2001A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2001a4;
        }
    }
    ctx->pc = 0x2001F0u;
label_2001f0:
    // 0x2001f0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2001f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2001f4: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x2001f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2001f8: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x2001f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2001fc: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x2001FCu;
    {
        const bool branch_taken_0x2001fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2001fc) {
            ctx->pc = 0x2002FCu;
            goto label_2002fc;
        }
    }
    ctx->pc = 0x200204u;
    // 0x200204: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200208: 0xc4410108  lwc1        $f1, 0x108($v0)
    ctx->pc = 0x200208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20020c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20020cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200210: 0x0  nop
    ctx->pc = 0x200210u;
    // NOP
    // 0x200214: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x200214u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200218: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x200218u;
    {
        const bool branch_taken_0x200218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x200218) {
            ctx->pc = 0x2002FCu;
            goto label_2002fc;
        }
    }
    ctx->pc = 0x200220u;
    // 0x200220: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200224: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x200224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x200228: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x200228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x20022c: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x20022cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x200230: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x200230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200234: 0x8c850100  lw          $a1, 0x100($a0)
    ctx->pc = 0x200234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x200238: 0x225082b  sltu        $at, $s1, $a1
    ctx->pc = 0x200238u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20023c: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x20023Cu;
    {
        const bool branch_taken_0x20023c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20023c) {
            ctx->pc = 0x2002FCu;
            goto label_2002fc;
        }
    }
    ctx->pc = 0x200244u;
    // 0x200244: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200248: 0x26250002  addiu       $a1, $s1, 0x2
    ctx->pc = 0x200248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x20024c: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x20024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x200250: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x200250u;
    SET_GPR_U32(ctx, 31, 0x200258u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x200250u, 0x200258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200258u;
label_200258:
    // 0x200258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20025c: 0xc4940000  lwc1        $f20, 0x0($a0)
    ctx->pc = 0x20025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x200260: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x200260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200264: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x200264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x200268: 0x24a200e8  addiu       $v0, $a1, 0xE8
    ctx->pc = 0x200268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 232));
    // 0x20026c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20026cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200270: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x200270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200274: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x200274u;
    SET_GPR_U32(ctx, 31, 0x20027Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x200274u, 0x20027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20027Cu;
label_20027c:
    // 0x20027c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200280: 0x4600a541  sub.s       $f21, $f20, $f0
    ctx->pc = 0x200280u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x200284: 0xc79481b0  lwc1        $f20, -0x7E50($gp)
    ctx->pc = 0x200284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x200288: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20028c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x20028cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x200290: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x200290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x200294: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x200294u;
    SET_GPR_U32(ctx, 31, 0x20029Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x200294u, 0x20029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20029Cu;
label_20029c:
    // 0x20029c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x20029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2002a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2002a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2002a4: 0x0  nop
    ctx->pc = 0x2002a4u;
    // NOP
    // 0x2002a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2002a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2002ac: 0x4615a05c  madd.s      $f1, $f20, $f21
    ctx->pc = 0x2002acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
    // 0x2002b0: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2002b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2002b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2002b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2002b8: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2002B8u;
    {
        const bool branch_taken_0x2002b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2002b8) {
            ctx->pc = 0x2002FCu;
            goto label_2002fc;
        }
    }
    ctx->pc = 0x2002C0u;
    // 0x2002c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2002c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2002c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2002c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2002c8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2002c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2002cc: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x2002ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x2002d0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2002d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2002d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2002d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2002d8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2002d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2002dc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2002dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2002e0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2002e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2002e4: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x2002e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2002e8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2002e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2002ec: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x2002ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x2002f0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2002f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2002f4: 0xc080a08  jal         func_202820
    ctx->pc = 0x2002F4u;
    SET_GPR_U32(ctx, 31, 0x2002FCu);
    ctx->pc = 0x202820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202820u, 0x2002F4u, 0x2002FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002FCu;
label_2002fc:
    // 0x2002fc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2002fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200300: 0xc4410108  lwc1        $f1, 0x108($v0)
    ctx->pc = 0x200300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x200304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200308: 0x0  nop
    ctx->pc = 0x200308u;
    // NOP
    // 0x20030c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20030cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200310: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x200310u;
    {
        const bool branch_taken_0x200310 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x200310) {
            ctx->pc = 0x20032Cu;
            goto label_20032c;
        }
    }
    ctx->pc = 0x200318u;
    // 0x200318: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20031c: 0xc4410108  lwc1        $f1, 0x108($v0)
    ctx->pc = 0x20031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200320: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x200320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200324: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x200324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x200328: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x200328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
label_20032c:
    // 0x20032c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x20032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200330: 0xc48100e4  lwc1        $f1, 0xE4($a0)
    ctx->pc = 0x200330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200334: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x200334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x200338: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x200338u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20033c: 0x0  nop
    ctx->pc = 0x20033cu;
    // NOP
    // 0x200340: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x200340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200344: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x200344u;
    {
        const bool branch_taken_0x200344 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x200344) {
            ctx->pc = 0x200364u;
            goto label_200364;
        }
    }
    ctx->pc = 0x20034Cu;
    // 0x20034c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x20034cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200350: 0xc4c10108  lwc1        $f1, 0x108($a2)
    ctx->pc = 0x200350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200354: 0xc7808330  lwc1        $f0, -0x7CD0($gp)
    ctx->pc = 0x200354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200358: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x200358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20035c: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x20035Cu;
    {
        const bool branch_taken_0x20035c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20035c) {
            ctx->pc = 0x200460u;
            goto label_200460;
        }
    }
    ctx->pc = 0x200364u;
label_200364:
    // 0x200364: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200368: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x200368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x20036c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x20036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x200370: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200370u;
    {
        const bool branch_taken_0x200370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x200370) {
            ctx->pc = 0x200388u;
            goto label_200388;
        }
    }
    ctx->pc = 0x200378u;
    // 0x200378: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20037c: 0xac4000bc  sw          $zero, 0xBC($v0)
    ctx->pc = 0x20037cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 0));
    // 0x200380: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x200380u;
    {
        const bool branch_taken_0x200380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200380) {
            ctx->pc = 0x200448u;
            goto label_200448;
        }
    }
    ctx->pc = 0x200388u;
label_200388:
    // 0x200388: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x200388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20038c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x20038cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200390: 0xac8200bc  sw          $v0, 0xBC($a0)
    ctx->pc = 0x200390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 2));
    // 0x200394: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x200394u;
    SET_GPR_U32(ctx, 31, 0x20039Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x200394u, 0x20039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20039Cu;
label_20039c:
    // 0x20039c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20039cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003a0: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2003A0u;
    SET_GPR_U32(ctx, 31, 0x2003A8u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2003A0u, 0x2003A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003A8u;
label_2003a8:
    // 0x2003a8: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2003a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2003ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2003acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003b0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2003b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2003b4: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x2003B4u;
    SET_GPR_U32(ctx, 31, 0x2003BCu);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2003B4u, 0x2003BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003BCu;
label_2003bc:
    // 0x2003bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2003bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003c0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2003c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2003c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2003c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003c8: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2003C8u;
    SET_GPR_U32(ctx, 31, 0x2003D0u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2003C8u, 0x2003D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003D0u;
label_2003d0:
    // 0x2003d0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2003d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2003d4: 0x24420154  addiu       $v0, $v0, 0x154
    ctx->pc = 0x2003d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 340));
    // 0x2003d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2003d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2003dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2003e0: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x2003E0u;
    SET_GPR_U32(ctx, 31, 0x2003E8u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x2003E0u, 0x2003E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003E8u;
label_2003e8:
    // 0x2003e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2003e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003ec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2003ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2003f0: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x2003f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
    // 0x2003f4: 0x8f86bcc4  lw          $a2, -0x433C($gp)
    ctx->pc = 0x2003f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2003f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2003f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2003fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2003fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200400: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x200400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x200404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x200404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200408: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x200408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20040c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20040cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200410: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x200410u;
    SET_GPR_U32(ctx, 31, 0x200418u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x200410u, 0x200418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200418u;
label_200418:
    // 0x200418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x200418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20041c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x200420: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x200420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x200424: 0x8f82bbec  lw          $v0, -0x4414($gp)
    ctx->pc = 0x200424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x200428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20042c: 0x278299e0  addiu       $v0, $gp, -0x6620
    ctx->pc = 0x20042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941152));
    // 0x200430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x200430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x200434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200438: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x200438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20043c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x20043cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200440: 0xc08f558  jal         func_23D560
    ctx->pc = 0x200440u;
    SET_GPR_U32(ctx, 31, 0x200448u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x200440u, 0x200448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200448u;
label_200448:
    // 0x200448: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x200448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20044c: 0xc4810118  lwc1        $f1, 0x118($a0)
    ctx->pc = 0x20044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200450: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200454: 0xc4400114  lwc1        $f0, 0x114($v0)
    ctx->pc = 0x200454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200458: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x200458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20045c: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x20045cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_200460:
    // 0x200460: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200464: 0xc44300ac  lwc1        $f3, 0xAC($v0)
    ctx->pc = 0x200464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x200468: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x200468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20046c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x20046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200470: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x200470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x200474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200478: 0x0  nop
    ctx->pc = 0x200478u;
    // NOP
    // 0x20047c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20047cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x200480: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x200480u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x200484: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x200484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x200488: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x200488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20048c: 0xc44c00a8  lwc1        $f12, 0xA8($v0)
    ctx->pc = 0x20048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x200490: 0xc78d8300  lwc1        $f13, -0x7D00($gp)
    ctx->pc = 0x200490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x200494: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x200494u;
    SET_GPR_U32(ctx, 31, 0x20049Cu);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x200494u, 0x20049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20049Cu;
label_20049c:
    // 0x20049c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x20049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2004a0: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2004a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2004a4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2004a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2004a8: 0xc44c00a8  lwc1        $f12, 0xA8($v0)
    ctx->pc = 0x2004a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2004ac: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x2004ACu;
    SET_GPR_U32(ctx, 31, 0x2004B4u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x2004ACu, 0x2004B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2004B4u;
label_2004b4:
    // 0x2004b4: 0xc781830c  lwc1        $f1, -0x7CF4($gp)
    ctx->pc = 0x2004b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2004b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2004b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2004bc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2004bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2004c0: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2004c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2004c4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2004c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2004c8: 0xc4410144  lwc1        $f1, 0x144($v0)
    ctx->pc = 0x2004c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2004cc: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x2004ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2004d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2004d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2004d4: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x2004d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x2004d8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2004d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2004dc: 0xc4610144  lwc1        $f1, 0x144($v1)
    ctx->pc = 0x2004dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2004e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2004e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2004e4: 0x0  nop
    ctx->pc = 0x2004e4u;
    // NOP
    // 0x2004e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2004e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2004ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2004ECu;
    {
        const bool branch_taken_0x2004ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2004ec) {
            ctx->pc = 0x200500u;
            goto label_200500;
        }
    }
    ctx->pc = 0x2004F4u;
    // 0x2004f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2004f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2004f8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2004f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2004fc: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x2004fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
label_200500:
    // 0x200500: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x200500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200504: 0xc080440  jal         func_201100
    ctx->pc = 0x200504u;
    SET_GPR_U32(ctx, 31, 0x20050Cu);
    ctx->pc = 0x201100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201100u, 0x200504u, 0x20050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20050Cu;
label_20050c:
    // 0x20050c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x20050cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x200510: 0xc064cb0  jal         func_1932C0
    ctx->pc = 0x200510u;
    SET_GPR_U32(ctx, 31, 0x200518u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x200510u, 0x200518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200518u;
label_200518:
    // 0x200518: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x200518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20051c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x20051cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x200520: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x200520u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x200524: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x200524u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x200528: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x200528u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20052c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20052cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200530: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x200530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200534: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x200534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200538: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x200538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20053c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x20053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x200540: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x200540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x200544: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x200544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x200548: 0x3e00008  jr          $ra
    ctx->pc = 0x200548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200550u;
    // 0x200550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200554: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x200554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200558: 0x3e00008  jr          $ra
    ctx->pc = 0x200558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200560u;
    // 0x200560: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x200560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x200564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x200564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x200568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x200568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20056c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x20056cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x200570: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x200570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x200574: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x200574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x200578: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20057c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x20057cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x200580: 0xc085538  jal         func_2154E0
    ctx->pc = 0x200580u;
    SET_GPR_U32(ctx, 31, 0x200588u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x200580u, 0x200588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200588u;
label_200588:
    // 0x200588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20058c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20058cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x200590: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200594: 0xc090f80  jal         func_243E00
    ctx->pc = 0x200594u;
    SET_GPR_U32(ctx, 31, 0x20059Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x200594u, 0x20059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20059Cu;
label_20059c:
    // 0x20059c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x20059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2005a0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2005a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2005a4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2005a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2005a8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2005a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2005ac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2005acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2005b0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2005b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2005b4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2005b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2005b8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2005b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2005bc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2005bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2005c0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2005c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2005c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2005c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2005c8: 0x0  nop
    ctx->pc = 0x2005c8u;
    // NOP
    // 0x2005cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2005ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2005d0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2005d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2005d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2005d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2005d8: 0xc050530  jal         func_1414C0
    ctx->pc = 0x2005D8u;
    SET_GPR_U32(ctx, 31, 0x2005E0u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x2005D8u, 0x2005E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005E0u;
label_2005e0:
    // 0x2005e0: 0xc05035c  jal         func_140D70
    ctx->pc = 0x2005E0u;
    SET_GPR_U32(ctx, 31, 0x2005E8u);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x2005E0u, 0x2005E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005E8u;
label_2005e8:
    // 0x2005e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2005e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2005ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2005f0: 0xc050240  jal         func_140900
    ctx->pc = 0x2005F0u;
    SET_GPR_U32(ctx, 31, 0x2005F8u);
    ctx->pc = 0x140900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140900u, 0x2005F0u, 0x2005F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005F8u;
label_2005f8:
    // 0x2005f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2005f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2005fc: 0xc44100cc  lwc1        $f1, 0xCC($v0)
    ctx->pc = 0x2005fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200600: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x200600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200604: 0x0  nop
    ctx->pc = 0x200604u;
    // NOP
    // 0x200608: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x200608u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20060c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x20060Cu;
    {
        const bool branch_taken_0x20060c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20060c) {
            ctx->pc = 0x20068Cu;
            goto label_20068c;
        }
    }
    ctx->pc = 0x200614u;
    // 0x200614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200618: 0xc091008  jal         func_244020
    ctx->pc = 0x200618u;
    SET_GPR_U32(ctx, 31, 0x200620u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x200618u, 0x200620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200620u;
label_200620:
    // 0x200620: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x200620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x200624: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x200624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200628: 0x0  nop
    ctx->pc = 0x200628u;
    // NOP
    // 0x20062c: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x20062cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x200630: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x200630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x200634: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x200634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x200638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x200638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20063c: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x20063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200640: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x200640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200644: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x200644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x200648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20064c: 0x0  nop
    ctx->pc = 0x20064cu;
    // NOP
    // 0x200650: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x200650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x200654: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x200654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200658: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x200658u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20065c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20065cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x200660: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x200660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x200664: 0xc78099e8  lwc1        $f0, -0x6618($gp)
    ctx->pc = 0x200664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200668: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x200668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x20066c: 0xc78099e8  lwc1        $f0, -0x6618($gp)
    ctx->pc = 0x20066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200670: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x200670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x200674: 0xc78099ec  lwc1        $f0, -0x6614($gp)
    ctx->pc = 0x200674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200678: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x200678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x20067c: 0xc78099f0  lwc1        $f0, -0x6610($gp)
    ctx->pc = 0x20067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200680: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x200680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x200684: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x200684u;
    {
        const bool branch_taken_0x200684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200684) {
            ctx->pc = 0x200724u;
            goto label_200724;
        }
    }
    ctx->pc = 0x20068Cu;
label_20068c:
    // 0x20068c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x20068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x200690: 0xc44100c0  lwc1        $f1, 0xC0($v0)
    ctx->pc = 0x200690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200694: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x200694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200698: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x200698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20069c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x20069cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2006a0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2006a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2006a4: 0xc44100c4  lwc1        $f1, 0xC4($v0)
    ctx->pc = 0x2006a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2006a8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2006a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2006ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2006acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2006b0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2006b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2006b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2006b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2006b8: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x2006b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2006bc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2006bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2006c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2006c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2006c4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2006c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2006c8: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x2006c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2006cc: 0xc7ad0068  lwc1        $f13, 0x68($sp)
    ctx->pc = 0x2006ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2006d0: 0xc0c39d6  jal         func_30E758
    ctx->pc = 0x2006D0u;
    SET_GPR_U32(ctx, 31, 0x2006D8u);
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x2006D0u, 0x2006D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2006D8u;
label_2006d8:
    // 0x2006d8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2006d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2006dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2006dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2006e0: 0x0  nop
    ctx->pc = 0x2006e0u;
    // NOP
    // 0x2006e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2006e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2006e8: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x2006e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2006ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2006ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2006f0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2006f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2006f4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2006f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2006f8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2006f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2006fc: 0xc78099e8  lwc1        $f0, -0x6618($gp)
    ctx->pc = 0x2006fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200700: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x200700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x200704: 0xc78099e8  lwc1        $f0, -0x6618($gp)
    ctx->pc = 0x200704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200708: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x200708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x20070c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x20070cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x200710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200714: 0x0  nop
    ctx->pc = 0x200714u;
    // NOP
    // 0x200718: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x200718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x20071c: 0xc78099f0  lwc1        $f0, -0x6610($gp)
    ctx->pc = 0x20071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200720: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x200720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_200724:
    // 0x200724: 0xc05035c  jal         func_140D70
    ctx->pc = 0x200724u;
    SET_GPR_U32(ctx, 31, 0x20072Cu);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x200724u, 0x20072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20072Cu;
label_20072c:
    // 0x20072c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20072cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200730: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x200730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200734: 0xc050194  jal         func_140650
    ctx->pc = 0x200734u;
    SET_GPR_U32(ctx, 31, 0x20073Cu);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x200734u, 0x20073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20073Cu;
label_20073c:
    // 0x20073c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x20073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x200740: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x200740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x200744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x200744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200748: 0xc106598  jal         func_419660
    ctx->pc = 0x200748u;
    SET_GPR_U32(ctx, 31, 0x200750u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x200748u, 0x200750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200750u;
label_200750:
    // 0x200750: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x200750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x200754: 0xc106794  jal         func_419E50
    ctx->pc = 0x200754u;
    SET_GPR_U32(ctx, 31, 0x20075Cu);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x200754u, 0x20075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20075Cu;
label_20075c:
    // 0x20075c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20075cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x200760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200764: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x200764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x200768: 0x3e00008  jr          $ra
    ctx->pc = 0x200768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200770u;
    // 0x200770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200774: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x200774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x200778: 0x24428d80  addiu       $v0, $v0, -0x7280
    ctx->pc = 0x200778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
    // 0x20077c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20077cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x200780: 0x3e00008  jr          $ra
    ctx->pc = 0x200780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200788u;
    // 0x200788: 0x0  nop
    ctx->pc = 0x200788u;
    // NOP
    // 0x20078c: 0x0  nop
    ctx->pc = 0x20078cu;
    // NOP
    ctx->pc = 0x200790u;
}
