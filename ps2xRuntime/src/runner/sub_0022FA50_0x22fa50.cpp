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

// Function: sub_0022FA50
// Address: 0x22fa50 - 0x22fcc0
void sub_0022FA50_0x22fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FA50_0x22fa50");
#endif

    switch (ctx->pc) {
        case 0x22fa50u: goto label_22fa50;
        case 0x22fa54u: goto label_22fa54;
        case 0x22fa58u: goto label_22fa58;
        case 0x22fa5cu: goto label_22fa5c;
        case 0x22fa60u: goto label_22fa60;
        case 0x22fa64u: goto label_22fa64;
        case 0x22fa68u: goto label_22fa68;
        case 0x22fa6cu: goto label_22fa6c;
        case 0x22fa70u: goto label_22fa70;
        case 0x22fa74u: goto label_22fa74;
        case 0x22fa78u: goto label_22fa78;
        case 0x22fa7cu: goto label_22fa7c;
        case 0x22fa80u: goto label_22fa80;
        case 0x22fa84u: goto label_22fa84;
        case 0x22fa88u: goto label_22fa88;
        case 0x22fa8cu: goto label_22fa8c;
        case 0x22fa90u: goto label_22fa90;
        case 0x22fa94u: goto label_22fa94;
        case 0x22fa98u: goto label_22fa98;
        case 0x22fa9cu: goto label_22fa9c;
        case 0x22faa0u: goto label_22faa0;
        case 0x22faa4u: goto label_22faa4;
        case 0x22faa8u: goto label_22faa8;
        case 0x22faacu: goto label_22faac;
        case 0x22fab0u: goto label_22fab0;
        case 0x22fab4u: goto label_22fab4;
        case 0x22fab8u: goto label_22fab8;
        case 0x22fabcu: goto label_22fabc;
        case 0x22fac0u: goto label_22fac0;
        case 0x22fac4u: goto label_22fac4;
        case 0x22fac8u: goto label_22fac8;
        case 0x22faccu: goto label_22facc;
        case 0x22fad0u: goto label_22fad0;
        case 0x22fad4u: goto label_22fad4;
        case 0x22fad8u: goto label_22fad8;
        case 0x22fadcu: goto label_22fadc;
        case 0x22fae0u: goto label_22fae0;
        case 0x22fae4u: goto label_22fae4;
        case 0x22fae8u: goto label_22fae8;
        case 0x22faecu: goto label_22faec;
        case 0x22faf0u: goto label_22faf0;
        case 0x22faf4u: goto label_22faf4;
        case 0x22faf8u: goto label_22faf8;
        case 0x22fafcu: goto label_22fafc;
        case 0x22fb00u: goto label_22fb00;
        case 0x22fb04u: goto label_22fb04;
        case 0x22fb08u: goto label_22fb08;
        case 0x22fb0cu: goto label_22fb0c;
        case 0x22fb10u: goto label_22fb10;
        case 0x22fb14u: goto label_22fb14;
        case 0x22fb18u: goto label_22fb18;
        case 0x22fb1cu: goto label_22fb1c;
        case 0x22fb20u: goto label_22fb20;
        case 0x22fb24u: goto label_22fb24;
        case 0x22fb28u: goto label_22fb28;
        case 0x22fb2cu: goto label_22fb2c;
        case 0x22fb30u: goto label_22fb30;
        case 0x22fb34u: goto label_22fb34;
        case 0x22fb38u: goto label_22fb38;
        case 0x22fb3cu: goto label_22fb3c;
        case 0x22fb40u: goto label_22fb40;
        case 0x22fb44u: goto label_22fb44;
        case 0x22fb48u: goto label_22fb48;
        case 0x22fb4cu: goto label_22fb4c;
        case 0x22fb50u: goto label_22fb50;
        case 0x22fb54u: goto label_22fb54;
        case 0x22fb58u: goto label_22fb58;
        case 0x22fb5cu: goto label_22fb5c;
        case 0x22fb60u: goto label_22fb60;
        case 0x22fb64u: goto label_22fb64;
        case 0x22fb68u: goto label_22fb68;
        case 0x22fb6cu: goto label_22fb6c;
        case 0x22fb70u: goto label_22fb70;
        case 0x22fb74u: goto label_22fb74;
        case 0x22fb78u: goto label_22fb78;
        case 0x22fb7cu: goto label_22fb7c;
        case 0x22fb80u: goto label_22fb80;
        case 0x22fb84u: goto label_22fb84;
        case 0x22fb88u: goto label_22fb88;
        case 0x22fb8cu: goto label_22fb8c;
        case 0x22fb90u: goto label_22fb90;
        case 0x22fb94u: goto label_22fb94;
        case 0x22fb98u: goto label_22fb98;
        case 0x22fb9cu: goto label_22fb9c;
        case 0x22fba0u: goto label_22fba0;
        case 0x22fba4u: goto label_22fba4;
        case 0x22fba8u: goto label_22fba8;
        case 0x22fbacu: goto label_22fbac;
        case 0x22fbb0u: goto label_22fbb0;
        case 0x22fbb4u: goto label_22fbb4;
        case 0x22fbb8u: goto label_22fbb8;
        case 0x22fbbcu: goto label_22fbbc;
        case 0x22fbc0u: goto label_22fbc0;
        case 0x22fbc4u: goto label_22fbc4;
        case 0x22fbc8u: goto label_22fbc8;
        case 0x22fbccu: goto label_22fbcc;
        case 0x22fbd0u: goto label_22fbd0;
        case 0x22fbd4u: goto label_22fbd4;
        case 0x22fbd8u: goto label_22fbd8;
        case 0x22fbdcu: goto label_22fbdc;
        case 0x22fbe0u: goto label_22fbe0;
        case 0x22fbe4u: goto label_22fbe4;
        case 0x22fbe8u: goto label_22fbe8;
        case 0x22fbecu: goto label_22fbec;
        case 0x22fbf0u: goto label_22fbf0;
        case 0x22fbf4u: goto label_22fbf4;
        case 0x22fbf8u: goto label_22fbf8;
        case 0x22fbfcu: goto label_22fbfc;
        case 0x22fc00u: goto label_22fc00;
        case 0x22fc04u: goto label_22fc04;
        case 0x22fc08u: goto label_22fc08;
        case 0x22fc0cu: goto label_22fc0c;
        case 0x22fc10u: goto label_22fc10;
        case 0x22fc14u: goto label_22fc14;
        case 0x22fc18u: goto label_22fc18;
        case 0x22fc1cu: goto label_22fc1c;
        case 0x22fc20u: goto label_22fc20;
        case 0x22fc24u: goto label_22fc24;
        case 0x22fc28u: goto label_22fc28;
        case 0x22fc2cu: goto label_22fc2c;
        case 0x22fc30u: goto label_22fc30;
        case 0x22fc34u: goto label_22fc34;
        case 0x22fc38u: goto label_22fc38;
        case 0x22fc3cu: goto label_22fc3c;
        case 0x22fc40u: goto label_22fc40;
        case 0x22fc44u: goto label_22fc44;
        case 0x22fc48u: goto label_22fc48;
        case 0x22fc4cu: goto label_22fc4c;
        case 0x22fc50u: goto label_22fc50;
        case 0x22fc54u: goto label_22fc54;
        case 0x22fc58u: goto label_22fc58;
        case 0x22fc5cu: goto label_22fc5c;
        case 0x22fc60u: goto label_22fc60;
        case 0x22fc64u: goto label_22fc64;
        case 0x22fc68u: goto label_22fc68;
        case 0x22fc6cu: goto label_22fc6c;
        case 0x22fc70u: goto label_22fc70;
        case 0x22fc74u: goto label_22fc74;
        case 0x22fc78u: goto label_22fc78;
        case 0x22fc7cu: goto label_22fc7c;
        case 0x22fc80u: goto label_22fc80;
        case 0x22fc84u: goto label_22fc84;
        case 0x22fc88u: goto label_22fc88;
        case 0x22fc8cu: goto label_22fc8c;
        case 0x22fc90u: goto label_22fc90;
        case 0x22fc94u: goto label_22fc94;
        case 0x22fc98u: goto label_22fc98;
        case 0x22fc9cu: goto label_22fc9c;
        case 0x22fca0u: goto label_22fca0;
        case 0x22fca4u: goto label_22fca4;
        case 0x22fca8u: goto label_22fca8;
        case 0x22fcacu: goto label_22fcac;
        case 0x22fcb0u: goto label_22fcb0;
        case 0x22fcb4u: goto label_22fcb4;
        case 0x22fcb8u: goto label_22fcb8;
        case 0x22fcbcu: goto label_22fcbc;
        default: break;
    }

    ctx->pc = 0x22fa50u;

label_22fa50:
    // 0x22fa50: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x22fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_22fa54:
    // 0x22fa54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22fa58:
    // 0x22fa58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22fa5c:
    // 0x22fa5c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x22fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_22fa60:
    // 0x22fa60: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x22fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
label_22fa64:
    // 0x22fa64: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x22fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
label_22fa68:
    // 0x22fa68: 0xe7ac00c0  swc1        $f12, 0xC0($sp)
    ctx->pc = 0x22fa68u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_22fa6c:
    // 0x22fa6c: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x22fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
label_22fa70:
    // 0x22fa70: 0xafa800e0  sw          $t0, 0xE0($sp)
    ctx->pc = 0x22fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 8));
label_22fa74:
    // 0x22fa74: 0xafa900f0  sw          $t1, 0xF0($sp)
    ctx->pc = 0x22fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 9));
label_22fa78:
    // 0x22fa78: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x22fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_22fa7c:
    // 0x22fa7c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_22fa80:
    // 0x22fa80: 0xc0bc65a  jal         func_2F1968
label_22fa84:
    if (ctx->pc == 0x22FA84u) {
        ctx->pc = 0x22FA88u;
        goto label_22fa88;
    }
    ctx->pc = 0x22FA80u;
    SET_GPR_U32(ctx, 31, 0x22FA88u);
    ctx->pc = 0x2F1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1968u, 0x22FA80u, 0x22FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA88u;
label_22fa88:
    // 0x22fa88: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_22fa8c:
    // 0x22fa8c: 0xc0eb428  jal         func_3AD0A0
label_22fa90:
    if (ctx->pc == 0x22FA90u) {
        ctx->pc = 0x22FA94u;
        goto label_22fa94;
    }
    ctx->pc = 0x22FA8Cu;
    SET_GPR_U32(ctx, 31, 0x22FA94u);
    ctx->pc = 0x3AD0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0A0u, 0x22FA8Cu, 0x22FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA94u;
label_22fa94:
    // 0x22fa94: 0x1402001f  bne         $zero, $v0, . + 4 + (0x1F << 2)
label_22fa98:
    if (ctx->pc == 0x22FA98u) {
        ctx->pc = 0x22FA9Cu;
        goto label_22fa9c;
    }
    ctx->pc = 0x22FA94u;
    {
        const bool branch_taken_0x22fa94 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x22fa94) {
            ctx->pc = 0x22FB14u;
            goto label_22fb14;
        }
    }
    ctx->pc = 0x22FA9Cu;
label_22fa9c:
    // 0x22fa9c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x22fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_22faa0:
    // 0x22faa0: 0x2484b950  addiu       $a0, $a0, -0x46B0
    ctx->pc = 0x22faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
label_22faa4:
    // 0x22faa4: 0xc11c2f8  jal         func_470BE0
label_22faa8:
    if (ctx->pc == 0x22FAA8u) {
        ctx->pc = 0x22FAACu;
        goto label_22faac;
    }
    ctx->pc = 0x22FAA4u;
    SET_GPR_U32(ctx, 31, 0x22FAACu);
    ctx->pc = 0x470BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470BE0u, 0x22FAA4u, 0x22FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAACu;
label_22faac:
    // 0x22faac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22faacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22fab0:
    // 0x22fab0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x22fab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_22fab4:
    // 0x22fab4: 0x24a5b950  addiu       $a1, $a1, -0x46B0
    ctx->pc = 0x22fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949200));
label_22fab8:
    // 0x22fab8: 0xc0bc5c6  jal         func_2F1718
label_22fabc:
    if (ctx->pc == 0x22FABCu) {
        ctx->pc = 0x22FAC0u;
        goto label_22fac0;
    }
    ctx->pc = 0x22FAB8u;
    SET_GPR_U32(ctx, 31, 0x22FAC0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x22FAB8u, 0x22FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAC0u;
label_22fac0:
    // 0x22fac0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22fac4:
    // 0x22fac4: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x22fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_22fac8:
    // 0x22fac8: 0xc0bc4c4  jal         func_2F1310
label_22facc:
    if (ctx->pc == 0x22FACCu) {
        ctx->pc = 0x22FAD0u;
        goto label_22fad0;
    }
    ctx->pc = 0x22FAC8u;
    SET_GPR_U32(ctx, 31, 0x22FAD0u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x22FAC8u, 0x22FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAD0u;
label_22fad0:
    // 0x22fad0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22fad4:
    // 0x22fad4: 0x27859d08  addiu       $a1, $gp, -0x62F8
    ctx->pc = 0x22fad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941960));
label_22fad8:
    // 0x22fad8: 0xc0bc4c4  jal         func_2F1310
label_22fadc:
    if (ctx->pc == 0x22FADCu) {
        ctx->pc = 0x22FAE0u;
        goto label_22fae0;
    }
    ctx->pc = 0x22FAD8u;
    SET_GPR_U32(ctx, 31, 0x22FAE0u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x22FAD8u, 0x22FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAE0u;
label_22fae0:
    // 0x22fae0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x22fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_22fae4:
    // 0x22fae4: 0x2484b950  addiu       $a0, $a0, -0x46B0
    ctx->pc = 0x22fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
label_22fae8:
    // 0x22fae8: 0xc107156  jal         func_41C558
label_22faec:
    if (ctx->pc == 0x22FAECu) {
        ctx->pc = 0x22FAF0u;
        goto label_22faf0;
    }
    ctx->pc = 0x22FAE8u;
    SET_GPR_U32(ctx, 31, 0x22FAF0u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x22FAE8u, 0x22FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAF0u;
label_22faf0:
    // 0x22faf0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_22faf4:
    // 0x22faf4: 0xc11c33c  jal         func_470CF0
label_22faf8:
    if (ctx->pc == 0x22FAF8u) {
        ctx->pc = 0x22FAFCu;
        goto label_22fafc;
    }
    ctx->pc = 0x22FAF4u;
    SET_GPR_U32(ctx, 31, 0x22FAFCu);
    ctx->pc = 0x470CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470CF0u, 0x22FAF4u, 0x22FAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAFCu;
label_22fafc:
    // 0x22fafc: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x22fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_22fb00:
    // 0x22fb00: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x22fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_22fb04:
    // 0x22fb04: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x22fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_22fb08:
    // 0x22fb08: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x22fb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_22fb0c:
    // 0x22fb0c: 0xc08c048  jal         func_230120
label_22fb10:
    if (ctx->pc == 0x22FB10u) {
        ctx->pc = 0x22FB14u;
        goto label_22fb14;
    }
    ctx->pc = 0x22FB0Cu;
    SET_GPR_U32(ctx, 31, 0x22FB14u);
    ctx->pc = 0x230120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230120u, 0x22FB0Cu, 0x22FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB14u;
label_22fb14:
    // 0x22fb14: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x22fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_22fb18:
    // 0x22fb18: 0xc119b68  jal         func_466DA0
label_22fb1c:
    if (ctx->pc == 0x22FB1Cu) {
        ctx->pc = 0x22FB20u;
        goto label_22fb20;
    }
    ctx->pc = 0x22FB18u;
    SET_GPR_U32(ctx, 31, 0x22FB20u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22FB18u, 0x22FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB20u;
label_22fb20:
    // 0x22fb20: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x22fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_22fb24:
    // 0x22fb24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22fb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22fb28:
    // 0x22fb28: 0xc0400e0  jal         func_100380
label_22fb2c:
    if (ctx->pc == 0x22FB2Cu) {
        ctx->pc = 0x22FB30u;
        goto label_22fb30;
    }
    ctx->pc = 0x22FB28u;
    SET_GPR_U32(ctx, 31, 0x22FB30u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22FB28u, 0x22FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB30u;
label_22fb30:
    // 0x22fb30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22fb30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22fb34:
    // 0x22fb34: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_22fb38:
    if (ctx->pc == 0x22FB38u) {
        ctx->pc = 0x22FB3Cu;
        goto label_22fb3c;
    }
    ctx->pc = 0x22FB34u;
    {
        const bool branch_taken_0x22fb34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fb34) {
            ctx->pc = 0x22FB6Cu;
            goto label_22fb6c;
        }
    }
    ctx->pc = 0x22FB3Cu;
label_22fb3c:
    // 0x22fb3c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x22fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_22fb40:
    // 0x22fb40: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x22fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_22fb44:
    // 0x22fb44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fb48:
    // 0x22fb48: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22fb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_22fb4c:
    // 0x22fb4c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x22fb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_22fb50:
    // 0x22fb50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22fb50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fb54:
    // 0x22fb54: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x22fb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22fb58:
    // 0x22fb58: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x22fb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22fb5c:
    // 0x22fb5c: 0xc7ae00c0  lwc1        $f14, 0xC0($sp)
    ctx->pc = 0x22fb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_22fb60:
    // 0x22fb60: 0xc11d4ec  jal         func_4753B0
label_22fb64:
    if (ctx->pc == 0x22FB64u) {
        ctx->pc = 0x22FB68u;
        goto label_22fb68;
    }
    ctx->pc = 0x22FB60u;
    SET_GPR_U32(ctx, 31, 0x22FB68u);
    ctx->pc = 0x4753B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4753B0u, 0x22FB60u, 0x22FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB68u;
label_22fb68:
    // 0x22fb68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22fb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22fb6c:
    // 0x22fb6c: 0xafb00078  sw          $s0, 0x78($sp)
    ctx->pc = 0x22fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
label_22fb70:
    // 0x22fb70: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x22fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_22fb74:
    // 0x22fb74: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x22fb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_22fb78:
    // 0x22fb78: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x22fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_22fb7c:
    // 0x22fb7c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x22fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_22fb80:
    // 0x22fb80: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x22fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_22fb84:
    // 0x22fb84: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x22fb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_22fb88:
    // 0x22fb88: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x22fb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_22fb8c:
    // 0x22fb8c: 0xc08bf40  jal         func_22FD00
label_22fb90:
    if (ctx->pc == 0x22FB90u) {
        ctx->pc = 0x22FB94u;
        goto label_22fb94;
    }
    ctx->pc = 0x22FB8Cu;
    SET_GPR_U32(ctx, 31, 0x22FB94u);
    ctx->pc = 0x22FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FD00u, 0x22FB8Cu, 0x22FB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB94u;
label_22fb94:
    // 0x22fb94: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22fb98:
    // 0x22fb98: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x22fb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_22fb9c:
    // 0x22fb9c: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x22fb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_22fba0:
    // 0x22fba0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22fba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22fba4:
    // 0x22fba4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x22fba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_22fba8:
    // 0x22fba8: 0x320f809  jalr        $t9
label_22fbac:
    if (ctx->pc == 0x22FBACu) {
        ctx->pc = 0x22FBB0u;
        goto label_22fbb0;
    }
    ctx->pc = 0x22FBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FBB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FBA8u, 0x22FBB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FBB0u;
label_22fbb0:
    // 0x22fbb0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22fbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22fbb4:
    // 0x22fbb4: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x22fbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_22fbb8:
    // 0x22fbb8: 0x27a60084  addiu       $a2, $sp, 0x84
    ctx->pc = 0x22fbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_22fbbc:
    // 0x22fbbc: 0xc11cb40  jal         func_472D00
label_22fbc0:
    if (ctx->pc == 0x22FBC0u) {
        ctx->pc = 0x22FBC4u;
        goto label_22fbc4;
    }
    ctx->pc = 0x22FBBCu;
    SET_GPR_U32(ctx, 31, 0x22FBC4u);
    ctx->pc = 0x472D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472D00u, 0x22FBBCu, 0x22FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBC4u;
label_22fbc4:
    // 0x22fbc4: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x22fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_22fbc8:
    // 0x22fbc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22fbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22fbcc:
    // 0x22fbcc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22fbd0:
    if (ctx->pc == 0x22FBD0u) {
        ctx->pc = 0x22FBD4u;
        goto label_22fbd4;
    }
    ctx->pc = 0x22FBCCu;
    {
        const bool branch_taken_0x22fbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fbcc) {
            ctx->pc = 0x22FBECu;
            goto label_22fbec;
        }
    }
    ctx->pc = 0x22FBD4u;
label_22fbd4:
    // 0x22fbd4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x22fbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22fbd8:
    // 0x22fbd8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x22fbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22fbdc:
    // 0x22fbdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22fbdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22fbe0:
    // 0x22fbe0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x22fbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_22fbe4:
    // 0x22fbe4: 0x1000000c  b           . + 4 + (0xC << 2)
label_22fbe8:
    if (ctx->pc == 0x22FBE8u) {
        ctx->pc = 0x22FBECu;
        goto label_22fbec;
    }
    ctx->pc = 0x22FBE4u;
    {
        const bool branch_taken_0x22fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fbe4) {
            ctx->pc = 0x22FC18u;
            goto label_22fc18;
        }
    }
    ctx->pc = 0x22FBECu;
label_22fbec:
    // 0x22fbec: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x22fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_22fbf0:
    // 0x22fbf0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22fbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_22fbf4:
    // 0x22fbf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22fbf8:
    if (ctx->pc == 0x22FBF8u) {
        ctx->pc = 0x22FBFCu;
        goto label_22fbfc;
    }
    ctx->pc = 0x22FBF4u;
    {
        const bool branch_taken_0x22fbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fbf4) {
            ctx->pc = 0x22FC18u;
            goto label_22fc18;
        }
    }
    ctx->pc = 0x22FBFCu;
label_22fbfc:
    // 0x22fbfc: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x22fbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22fc00:
    // 0x22fc00: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_22fc04:
    // 0x22fc04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fc04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22fc08:
    // 0x22fc08: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x22fc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22fc0c:
    // 0x22fc0c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x22fc0cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_22fc10:
    // 0x22fc10: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x22fc10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_22fc14:
    // 0x22fc14: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x22fc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_22fc18:
    // 0x22fc18: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x22fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_22fc1c:
    // 0x22fc1c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22fc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_22fc20:
    // 0x22fc20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22fc24:
    if (ctx->pc == 0x22FC24u) {
        ctx->pc = 0x22FC28u;
        goto label_22fc28;
    }
    ctx->pc = 0x22FC20u;
    {
        const bool branch_taken_0x22fc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc20) {
            ctx->pc = 0x22FC40u;
            goto label_22fc40;
        }
    }
    ctx->pc = 0x22FC28u;
label_22fc28:
    // 0x22fc28: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x22fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22fc2c:
    // 0x22fc2c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x22fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22fc30:
    // 0x22fc30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22fc30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22fc34:
    // 0x22fc34: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22fc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_22fc38:
    // 0x22fc38: 0x1000000c  b           . + 4 + (0xC << 2)
label_22fc3c:
    if (ctx->pc == 0x22FC3Cu) {
        ctx->pc = 0x22FC40u;
        goto label_22fc40;
    }
    ctx->pc = 0x22FC38u;
    {
        const bool branch_taken_0x22fc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc38) {
            ctx->pc = 0x22FC6Cu;
            goto label_22fc6c;
        }
    }
    ctx->pc = 0x22FC40u;
label_22fc40:
    // 0x22fc40: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x22fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_22fc44:
    // 0x22fc44: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x22fc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_22fc48:
    // 0x22fc48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22fc4c:
    if (ctx->pc == 0x22FC4Cu) {
        ctx->pc = 0x22FC50u;
        goto label_22fc50;
    }
    ctx->pc = 0x22FC48u;
    {
        const bool branch_taken_0x22fc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc48) {
            ctx->pc = 0x22FC6Cu;
            goto label_22fc6c;
        }
    }
    ctx->pc = 0x22FC50u;
label_22fc50:
    // 0x22fc50: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x22fc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22fc54:
    // 0x22fc54: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_22fc58:
    // 0x22fc58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22fc5c:
    // 0x22fc5c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x22fc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22fc60:
    // 0x22fc60: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x22fc60u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_22fc64:
    // 0x22fc64: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x22fc64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_22fc68:
    // 0x22fc68: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22fc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_22fc6c:
    // 0x22fc6c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22fc70:
    // 0x22fc70: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x22fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22fc74:
    // 0x22fc74: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x22fc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22fc78:
    // 0x22fc78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22fc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22fc7c:
    // 0x22fc7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22fc7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22fc80:
    // 0x22fc80: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22fc80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22fc84:
    // 0x22fc84: 0x320f809  jalr        $t9
label_22fc88:
    if (ctx->pc == 0x22FC88u) {
        ctx->pc = 0x22FC8Cu;
        goto label_22fc8c;
    }
    ctx->pc = 0x22FC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FC8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FC84u, 0x22FC8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FC8Cu;
label_22fc8c:
    // 0x22fc8c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x22fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_22fc90:
    // 0x22fc90: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x22fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_22fc94:
    // 0x22fc94: 0xc08bf30  jal         func_22FCC0
label_22fc98:
    if (ctx->pc == 0x22FC98u) {
        ctx->pc = 0x22FC9Cu;
        goto label_22fc9c;
    }
    ctx->pc = 0x22FC94u;
    SET_GPR_U32(ctx, 31, 0x22FC9Cu);
    ctx->pc = 0x22FCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FCC0u, 0x22FC94u, 0x22FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC9Cu;
label_22fc9c:
    // 0x22fc9c: 0x24421fff  addiu       $v0, $v0, 0x1FFF
    ctx->pc = 0x22fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8191));
label_22fca0:
    // 0x22fca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22fca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22fca4:
    // 0x22fca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22fca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22fca8:
    // 0x22fca8: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x22fca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_22fcac:
    // 0x22fcac: 0x3e00008  jr          $ra
label_22fcb0:
    if (ctx->pc == 0x22FCB0u) {
        ctx->pc = 0x22FCB4u;
        goto label_22fcb4;
    }
    ctx->pc = 0x22FCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FCB4u;
label_22fcb4:
    // 0x22fcb4: 0x0  nop
    ctx->pc = 0x22fcb4u;
    // NOP
label_22fcb8:
    // 0x22fcb8: 0x0  nop
    ctx->pc = 0x22fcb8u;
    // NOP
label_22fcbc:
    // 0x22fcbc: 0x0  nop
    ctx->pc = 0x22fcbcu;
    // NOP
    ctx->pc = 0x22fcc0u;
}
